# activate emcc
```bash
emsdk activate latest
```

# wasm demo
https://webassembly.github.io/wabt/demo/wasm2wat/

# For cpp
```bash
em++
```

# For C
```bash
emcc
```

# Flag on emcc
- ```-o``` for output
- ```-s``` for switch


# Note
```bash
emcc wrapping.c -o wrapping.js -s NO_EXIT_RUNTIME=1 -s EXPORTED_RUNTIME_METHODS=ccall. cwrap
```

