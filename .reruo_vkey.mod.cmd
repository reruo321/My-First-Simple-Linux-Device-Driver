cmd_/home/reruo/바탕화면/My-First-Simple-Linux-Device-Driver/reruo_vkey.mod := printf '%s\n'   reruo_vkey.o | awk '!x[$$0]++ { print("/home/reruo/바탕화면/My-First-Simple-Linux-Device-Driver/"$$0) }' > /home/reruo/바탕화면/My-First-Simple-Linux-Device-Driver/reruo_vkey.mod