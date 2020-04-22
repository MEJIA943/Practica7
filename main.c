#include <stdio.h>
#include <stdlib.h>
#include "Clist.h"

int main(){
    clist *l;
    l = create_list();
    delete_list(l);
    return 0;
}
