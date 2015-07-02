/****************************************************************************
*****************************************************************************
*****************************************************************************
**********                                                         **********
**********           Heap (Priority Queue Representation)          **********
**********                                                         **********
**********                  C++ Implementation                     **********
**********                                                         **********
**********                      Writen By                          **********
**********                                                         **********
**********                     YAZAN OBEIDI                        **********
**********                                                         **********
*****************************************************************************
*****************************************************************************
*****************************************************************************
***                                                                       ***
***   Copyright 2015 Yazan Obeidi                                 		  ***
***                                                                       ***
***   This is free software: you can redistribute it and/or modify        ***
***   it under the terms of the GNU General Public License as published   ***
***   by the Free Software Foundation, either version 3 of the License,   ***
***   or (at your option) any later version.                              ***
***                                                                       ***
***   This program is distributed in the hope that it will be useful,     ***
***   but WITHOUT ANY WARRANTY; without even the implied warranty of      ***
***   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU    ***
***   General Public License for more details:                            ***
***    <http://www.gnu.org/licenses/>              						  ***
***                                                                       ***
****************************************************************************/

//The following code simply provides a demo for the BST class:

#include<iostream>
#include"priority_queue.hpp"

int main() {
	//Used to set queue size:
	int queue_size;
	
	//flags for demo
	char continue_flag;
	bool valid_choice = false;
	char choice;
	
	std::cout << "Welcome to a C++ Heap (Priority Queue Representation) Implementation Demo!\nPlease select a queue size: ";
	std::cin >> queue_size;
	//initialize binary search tree structure
	PriorityQueue queue(queue_size);
	
	//Main loop where users can interact with BST object
	while(true) {
	
		std::cout << "q - queue\nd - remove\ns - get size\np - print queue to console\nx - exit\n";
			
		// Menu
		do {
			std::cin >> choice;
			switch (choice) {
			case 'q':
				//insert
				int insert_value;
				std::cout << "Enter a value to insert: ";
				std::cin >> insert_value;
				if(queue.enqueue(insert_value)) std::cout << "\nValue successfully queued.\n";
				else std::cout << "\nValue failed to queue. Try dequeueing.\n";
				valid_choice = true;
				break;
			case 'd':
				if(queue.dequeue()) std::cout << "\nQueue successfully dequeued.\n";
				else std::cout << "\nQueue failed to dequeue. Try enqueuing.\n";
				valid_choice = true;
				break;
			case 's':
				//return size
				std::cout << "Size of Queue: ";
				std::cout << queue.size() << std::endl;
				valid_choice = true;
				break;
			case 'p':
				queue.print();
				std::cout << std::endl;
				valid_choice = true;
				break;
			case 'x':
				std::cout << "\nQuiting Heap Demo...\n\n";
				return(0);
			default:
				std::cout << "You did not enter a valid choice! Please try again: ";
				valid_choice = false;
				break;
			} 
		} while(valid_choice == false); //prompt if input is incorrect
	}
}
