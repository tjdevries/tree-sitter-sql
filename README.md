# tree-sitter-sql

I want to do something fun at work since we have stuff like this in Go:


```go
const hoverDocumentQuery = `
-- source: enterprise/internal/codeintel/stores/lsifstore/hover.go:Hover
SELECT dump_id, path, data FROM lsif_data_documents WHERE dump_id = %s AND path = %s LIMIT 1
`
```

Yeah, I wanna highlight that like SQL obviously :)

## Status

Not good :) you can check out the corpus to see what we currently parse.
