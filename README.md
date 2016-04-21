## To Do

- Interpret HTTP data (tcp.dest_port will be 80)

###Packet Sniffer
Computer software that can __intercept and log traffic__ flowing through a network or part of a network is called 
Packet Sniffer.
<br />
It works by setting the __NIC (Network Interface Card) in Promiscuous Mode.__
Promiscuos Mode is that mode in which the controller sends all traffic that ir receives to the CPU, instead of only those packets it is intended to receive.
<br /><br />
_Other Modes: Monitor Mode_

###How Data Is Exchanged on the Internet

1.	An __HTTP(Hyper Text Transfer Protocol) request__ is sent to the target server for the requested resource.
2.	This HTTP request is wrapped inside an __IP packet__ (Internetworking Protocol).
3.	All of this is packed in an __Ethernet frame.__

So, in the implementation of the packet sniffer, we first have to unpack the Ethernet frame.

<img src="Other/ethernet_frame.png">
__Protocol Numbers__
1 		ICMP (Internet Control Messaging Protocol)<br/>
4		IPv4 (IP version 4)<br/>
41		TPv6 (IP version 6)<br/>
6		TCP (Transmission Control Protocol)<br/>
17		UDP (User Datagram Protocol)<br/>
8 		EGP (<a href="https://en.wikipedia.org/wiki/Exterior_Gateway_Protocol">Exterior gateway Protocol</a>)<br/>
9		IGP (<a href="https://en.wikipedia.org/wiki/Interior_gateway_protocol">Interior Gateway Protocol</a>)<br/>


###Sockets

A socket is one end-point of a two-way communication link between programs on the network. Sockets are bound to a port number so that the TCP layer can identify the application the data is destined to. 




















