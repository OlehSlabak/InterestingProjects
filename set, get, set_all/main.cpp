#include <stdio.h>

struct Arr
{
    int elem;
    size_t time_local;
};

size_t time_global = 1;
int global_value = 0;
size_t time_global_all = 0;

int get(struct Arr a[], int i)
{
    if(a[i].time_local > time_global_all)
        return a[i].elem;
    else
        return global_value;
}

void set(struct Arr *a, int j)
{
    a->elem = j;
    time_global++;
    a->time_local = time_global;
}

void setAll(int x)
{
    time_global_all = time_global;
    global_value = x;
}

int main()
{
    struct Arr temp[5] = {0, 0};
    set(&temp[1], 3);
    setAll(6);
    printf(" %d \n", get(temp, 1));
    set(&temp[2], 11);
    printf(" %d \n", get(temp, 2));
    setAll(5);
    printf(" %d \n", get(temp, 2));

    return 0;
}