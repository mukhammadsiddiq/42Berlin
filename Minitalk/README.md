                              ███╗   ███╗██╗███╗   ██╗██╗████████╗ █████╗ ██╗     ██╗  ██╗
                              ████╗ ████║██║████╗  ██║██║╚══██╔══╝██╔══██╗██║     ██║ ██╔╝
                              ██╔████╔██║██║██╔██╗ ██║██║   ██║   ███████║██║     █████╔╝ 
                              ██║╚██╔╝██║██║██║╚██╗██║██║   ██║   ██╔══██║██║     ██╔═██╗ 
                              ██║ ╚═╝ ██║██║██║ ╚████║██║   ██║   ██║  ██║███████╗██║  ██╗
                              ╚═╝     ╚═╝╚═╝╚═╝  ╚═══╝╚═╝   ╚═╝   ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝

# minitalk

## Overview
`minitalk` is a small data exchange program designed to demonstrate inter-process communication using UNIX signals. The project includes two executables:

- **server**: Receives and displays a string sent by the client.
- **client**: Sends a string as a parameter to the server, identified by its process ID (PID).

The communication utilizes **SIGUSR1** and **SIGUSR2** signals only.

## Features
### Mandatory
- A server that receives a string and displays it.
- A client that sends a string bit-by-bit to the server using UNIX signals.

### Bonus (if implemented)
- Acknowledgement system for successful signal reception.
- Support for Unicode characters.

## Allowed Functions
- `malloc`, `free`, `write`, `getpid`
- `signal`, `sigemptyset`, `sigaddset`, `sigaction`
- `pause`, `kill`, `sleep`, `usleep`
- `exit`

## Compilation
This project is compiled using `make`. Run the following command in the project directory:

```bash
make
```

The `make` command will generate the following executables:
- `server`
- `client`

## How to Run
### Step 1: Start the Server
Run the `server` executable to start the server. The server will display its PID, which will be used by the client to send data:

```bash
./server
```

### Step 2: Run the Client
Using the server's PID, run the `client` executable and pass the PID and the string to be sent as arguments:

```bash
./client <PID> <string>
```

### Example
Start the server:
```bash
$ ./server
Server PID: 12345
```

Run the client with the server's PID:
```bash
$ ./client 12345 "Hello, World!"
```

The server will display:
```bash
Hello, World!
```

## File Structure
```
minitalk/
├── client.c       # Client implementation
├── server.c       # Server implementation
├── minitalk.h     # Shared headers
├── Makefile       # Compilation rules
└── README.md      # Project documentation
```

## Notes
- Ensure the server is running before executing the client.
- The `server` must handle signal interruptions gracefully.
- The `client` should validate inputs, including ensuring the PID is valid and the string is not empty.

## Acknowledgements
This project is part of the 42cursus, designed to deepen understanding of UNIX signals and inter-process communication.
