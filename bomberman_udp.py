import socket

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM, socket.IPPROTO_UDP)

s.sendto(b'235 250 ', ('127.0.0.1', 9999))
