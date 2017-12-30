# Calling custom function defined in C

Recomended lecture: [Why do functions in my C/C++ source code vanish when I compile to JavaScript, and/or I get No functions to process?](https://kripken.github.io/emscripten-site/docs/getting_started/FAQ.html#why-do-functions-in-my-c-c-source-code-vanish-when-i-compile-to-javascript-and-or-i-get-no-functions-to-process)

## Compilation
`emcc -o hello3.html hello3.c -O3 -s WASM=1 --shell-file html_template/shell_minimal.html -s NO_EXIT_RUNTIME=1 -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall"]'`

## Note to run the custom function add the following code to your html file

In the html body:
```html
<button class="mybutton">Run myFunction</button>
```

inside the script tag:
```javascript
document.querySelector('.mybutton').addEventListener('click', function(){
  alert('check console');
  var result = Module.ccall('myFunction', // name of C function
                             null, // return type
                             null, // argument types
                             null); // arguments
});
```


To see the example running you need a file server by example the python simple server.
`python -m SimpleHTTPServer 8000`
