returned strings from fsp will be freeable strings so remember to free
on error it returns a NULL
NULL handling is at the printf level

#notes :
- when using \0 wilth %c, the riginal printf returns 0: ma katkteb walo. ya3ni no need to handle it
- since width flag can be combined with any flag it makes sence to execute it last


clang -g -O0 -fno-omit-frame-pointer -Wall -Wextra -Werror -fsanitize=address -fstack-protector

# only one at a time
-fsanitize=leak
-fsanitize=undefined
