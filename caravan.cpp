/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "caravan.h"
#include <stdlib.h>
#include "general.h"

struct NodeImplementation{
  PackAnimal pack_animal;
  Node next;
};

struct CaravanImplementation{
  int length;
  Node head = (Node)malloc(sizeof(NodeImplementation));
  Node tail = (Node)malloc(sizeof(NodeImplementation));
};

Caravan new_caravan()
{
  Caravan caravan = (Caravan) malloc(sizeof(CaravanImplementation));
  caravan->length = 0;
  caravan->head = 0;
  caravan->tail = 0;

  return caravan;
}

int get_length(Caravan caravan)
{
  return caravan->length;
}

void delete_caravan(Caravan caravan)
{
  Node current = caravan->head;
  while (current != 0) {
    Node temp = current;
    current = current->next;
    sfree(temp);
  }

  sfree(caravan);
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{
  if (animal == 0) {
    return;
  }

  Node new_node = (Node)malloc(sizeof(NodeImplementation));
  new_node->pack_animal = animal;

  Node current = caravan->head;


  if (caravan != 0) {
    if (caravan->head == 0) {
      current->head = new_node;
    }
    else{
      while (current != 0) {
        current = current->next;
      }
      current = new_node;
    }
  }

}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
}

int get_caravan_load(Caravan caravan)
{
  return 0;
}

void unload(Caravan caravan)
{
}

int get_caravan_speed(Caravan caravan)
{
  return 0;
}

void optimize_load(Caravan caravan)
{

}
