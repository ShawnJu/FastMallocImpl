# Fast Malloc Implementation

## PURPOSE
	mm is a signal-handler-safe dynamic memory manager that has generally better performance than malloc. Packet_sender and packet_receiver are a server-client suite resembling TCP server and client. Receiver is able to reassemble out-of-order packets into a complete message.
	
## COMPILE
	./make
	
## HOW TO USE
	To see the running time of mm and malloc, run ./main_mm and ./main_malloc respectively. 
	To use the server-client suite, first run ./packet_sender <number_of_messages> then run ./packet_receiver <number_of_messages>. The program arguments should be the same otherwise the behavior is indeterministic. 
