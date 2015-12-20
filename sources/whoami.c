
#include <stdlib.h>
#include <pwd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{

  struct passwd *pw;

  uid_t uid;
  int c;
  
 
  uid = geteuid ();
 
  pw = getpwuid (uid);
/*
 Структура passwd определена в файле <pwd.h> следующим образом:
    struct passwd {
            char    *pw_name;       /* имя пользователя */
//          char    *pw_passwd;     /* пароль пользователя */
//          uid_t   pw_uid;         /* id пользователя */
//          gid_t   pw_gid;         /* id группы */
//          char    *pw_gecos;      /* настоящее имя */
//          char    *pw_dir;        /* домашний каталог */
//           char    *pw_shell;      /* программа-оболочка */
//  };



  if (pw)
    {
      //даем команду вывести строку, обращаясь в структуре pw к полю pw_name
      puts (pw->pw_name);
      //и даем знать что все ок
      return 0;
    }
  // в противном случае- возвращаем ошибку
  return 1;
  
}
