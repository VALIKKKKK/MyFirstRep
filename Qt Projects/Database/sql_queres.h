#ifndef SQL_QUERES_H

#define SQL_QUERES_H

#define SUBJECTS "create table subjects(\
id integer primary key autoincrement,\
name varchar(255),\
number_of_hours varchar(255)\
)"

#define GROUPS_QUERY "create table groups(\
id integer primary key autoincrement,\
group_name varchar(255)\
)"

#define STUDENT_QUERY "create table students(\
 id integer primary key autoincrement,\
 f_name varchar(255),\
 l_name varchar(255),\
 group_id int,\
 foreign key (group_id)\
 references groups(id)\
 )"


#endif // SQL_QUERES_H
