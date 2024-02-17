const express = require('express');
const app = express();
const http = require('http').Server(app);
const io = require('socket.io')(http);

app.use(express.static('public'));

io.on('connection', (socket) => {
    console.log('a user connected');

    socket.on('join-chat', (chatID) => {
        socket.join(chatID);
    });

    socket.on('send-message', (msg) => {
        io.to(msg.chatID).emit('receive-message', msg);
    });

    socket.on('disconnect', () => {
        console.log('a user disconnected');
    });
});

http.listen(3000, () => {
    console.log('Server is listening on the port: 3000');
});

