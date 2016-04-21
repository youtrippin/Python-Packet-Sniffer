## To Do

- Interpret HTTP data (tcp.dest_port will be 80)

###Packet Sniffer
Computer software that can __intercept and log traffic__ flowing through a network or part of a network is called 
Packet Sniffer.
<br />
It works by setting the __NIC (Network Interface Card) in Promiscuous Mode.__
Promiscuos Mode is that mode in which the controller sends all traffic that ir receives to the CPU, instead of only those packets it is intended to receive.
<br />
_Other Modes: Monitor Mode_

###How Data Is Exchanged on the Internet

1.	An __HTTP(Hyper Text Transfer Protocol) request__ is sent to the target server for the requested resource.
2.	This HTTP request is wrapped inside an __IP packet__ (Internetworking Protocol).
3.	All of this is packed in an __Ethernet frame.__

So, in the implementation of the packet sniffer, we first have to unpack the Ethernet frame.

<img src="Other/ethernet_frame.png">






















