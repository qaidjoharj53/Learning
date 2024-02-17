const fs = require('fs');
fs.readFile('read-file.txt', 'utf8', (err, data) => {
    try {
        console.log(data);
    }
    catch (err) {
        console.error(err);
    }
});