mkdir -p temp
name=libscrypt
gcc -shared -O3 -std=c11 -fPIC src/scrypt.c -o temp/$name.so -Wl,--version-script=build/$name.version && chmod 644 temp/$name.so
