##PyHound - A Packet Sniffer in Python

_By:_
_Pratik Kshirsagar, _ _Chinmay Terse_ _and_ _Rahul Agarwal_

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
__Protocol Numbers__<br/>
1 		&nbsp;&nbsp;ICMP (Internet Control Messaging Protocol)<br/>
4		&nbsp;&nbsp;IP-in-IP encapsulation (IP version 4)<br/>
41		&nbsp;&nbsp;IPv6 encapsulation (IP version 6)<br/>
6		&nbsp;&nbsp;TCP (Transmission Control Protocol)<br/>
17		&nbsp;&nbsp;UDP (User Datagram Protocol)<br/>
8 		&nbsp;&nbsp;EGP (<a href="https://en.wikipedia.org/wiki/Exterior_Gateway_Protocol">Exterior gateway Protocol</a>)<br/>
9		&nbsp;&nbsp;IGP (<a href="https://en.wikipedia.org/wiki/Interior_gateway_protocol">Interior Gateway Protocol</a>)<br/>


###Sockets

A socket is one end-point of a two-way communication link between programs on the network. Sockets are bound to a port number so that the TCP layer can identify the application the data is destined to. 

###IP Header Packet Format

<img src="Other/ip_header_diagram.png">

###TCP/IP packet

<img src="Other/tcp_ip_packet_diagram.jpg">

###Use Case and DFD for PyHound

<img src="Other/pyhound_usecase.png"><br><br>
<img src="Other/pyhound_dfd.png">

##Output Screens

__TCP Segment in IPv4 Packet(Protocol = 6)__<br>
<img src="Other/pyhound_op1.png"><br><br>
__UDP Segment in IPv4 Packet(Protocol = 17)__<br>
<img src="Other/pyhound_op2.png"><br><br>
__ICMP Packet in IPv4 Packet(Protocol = 1)__<br>
<img src="Other/pyhound_op3.png"><br>

###Advantages and Limitations
_Advantages_

1.	Easy to understand.<br />
	The system is easily understandable because simple socket programming concepts have been used.

2.	No extensive requirements.<br />
	This system has no extensive requirements and can run on any unix/linux system which has a basic Python compiler and terminal.

_Limitations_

1.	Does not store the packet information and data.<br />
		The biggest problem with the developed system is that, the program doesn’t store the data, it just displays it and once the terminal is closed the information is gone.

2.	Cannot run on windows.<br />
		Another drawback is that, this program uses a socket function which is not available in windows version of python, but exclusive to linux/unix systems.

3.	Only core functionality available.<br />
		Other supplementary and complimentary functionalities are missing.



















