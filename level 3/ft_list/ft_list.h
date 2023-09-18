#ifndef FT_LİST_H
#define FT_LİST_H

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                t_list;

#endif