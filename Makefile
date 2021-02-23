ts := $(shell which tree-sitter 2> /dev/null)
ifeq (, ${ts})
	ts := $(shell which tree-sitter-cli 2> /dev/null)
endif

generate:
	${ts} generate

test_ts: generate
	nvim --headless -c "luafile ./scripts/tests_to_corpus.lua" -c "qa!"
	${ts} test

test: test_ts

build_parser: generate
	cc -o ./build/parser.so -I./src src/parser.c -shared -Os -lstdc++ -fPIC

wasm: build_parser
	${ts} build-wasm

web: wasm
	${ts} web-ui
