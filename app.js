const express = require('express');
const path = require('path')
const app = express();

let port = 3000;

app.use('/', express.static(__dirname))

app.listen(port, () => {
    console.log(`O servidor express está rodando na porta: ${port}`)
})