# webassembly learn 

# Installation 
<a href="https://emscripten.org/docs/getting_started/downloads.html#sdk-download-and-install">Installation guide</a>
1. Run the following commands in dir you want to store the lib
```bash
cd $LibraryDirectory # replace with your directory
git clone https://github.com/emscripten-core/emsdk.git
cd emsdk
./emsdk install latest
./emsdk activate latest
````
2. Add `$LibraryDirectory\emsdk` to the `PATH` environment variabel
3. Restart your terminal
4. DONE MAN!

# activate emcc
```bash
emsdk activate latest #only for one activation
```
```bash
emsdk actibaye latest --global #For globallu activation
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
# Helpfull Resources
- <a href="https://developer.mozilla.org/en-US/docs/WebAssembly">MDN Handbook</a>
## Writing WebAssembly Text Format (WAT)
<a href="https://blog.ttulka.com/learning-webassembly-3-wat-programming-basics/">Basic Example</a>
