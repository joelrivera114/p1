/*

Reverse Function

void reverse(LIST) 
{
    create CURRENT, PREV and TEMP node pointers: 
    CURRENT -> head, PREV = nullptr, TEMP = nullptr

    loop while CURRENT != nullptr
        TEMP = CURRENT.next

        CURRENT.next = PREV
        CURRENT.prev = TEMP (doubly linked list only)

        PREV = CURRENT
        CURRENT = TEMP
    end loop

    tail = head
    head = PREV
}

*/