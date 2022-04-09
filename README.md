# XML Query Processing with and without Compression Schemes
## This Implementation:
- Tests the performance of querying
	- XML documents (unminified & minified) without compression schemes in PHP (using SimpleXML)
	- XML documents (unminified & minified) with compression schemes (XQRT using various compression levels)
- Uses various datasets from http://pskibinski.pl/research/Wratislavia/
- Using general compression schemes (such as 7zip's LZMA) for decompression of files during a query
