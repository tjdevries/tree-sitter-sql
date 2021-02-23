-- source: enterprise/internal/codeintel/stores/lsifstore/hover.go:Hover
SELECT dump_id, path, data
  FROM lsif_data_documents
  WHERE dump_id = %s AND path = %s LIMIT 1
