returned strings from fsp will be freeable strings so remember to free
on error it returns a NULL
NULL handling is at the printf level

#notes :
- when using \0 wilth %c, the riginal printf returns 0: ma katkteb walo. ya3ni no need to handle it
