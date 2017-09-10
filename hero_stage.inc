.data
hero_stage macro

mov dh,1
mov dl,0
call gotoxy
mov edx,offset UImes0     ;規則0,0
call writeString
call crlf
mov edx,offset UImes2      ;choose your move 0,1
call writeString

mov dh,1
mov dl,70
call gotoxy
mov edx,offset UImesSpace
call writeString


mov dh,1
mov dl,65
call gotoxy
mov edx,offset UImes1   ;MonsterHP: 1,65
call writeString

mov dh,1
mov dl,75
call gotoxy
mov eax,monster_hp
call writeInt

mov dh,2
mov dl,69
call gotoxy
mov edx,offset UImes1_2   ;level: 1,69
call writeString
mov eax,level
call writeInt

mov dh,16
mov dl,0
call gotoxy
mov edx,offset UImesSpace
call writeString
mov dh,20
mov dl,0
call gotoxy
mov edx,offset UImesSpace
call writeString
mov dh,21
mov dl,0
call gotoxy
mov edx,offset UImesSpace
call writeString

mov dh,16
mov dl,0
call gotoxy
mov edx,offset UImes13  ;HeroHP :  16,0
call writeString
mov eax,hero_hp_now
call writeInt
call crlf

mov edx,offset UImes14    ;HeroAtt :
call writeString
mov eax,hero_Att
call writeInt
call crlf 

mov edx,offset UImes15    ;HeroInt :
call writeString
mov eax,hero_Int
call writeInt
call crlf 

mov edx,offset UImes16    ;HeroDef :
call writeString
mov eax,hero_Def
call writeInt
call crlf

mov edx,offset UImes17    ;HeroLuk :
call writeString
mov eax,hero_exp_now
call writeInt
call crlf

mov edx,offset UImes18    ;Money   :
call writeString
mov eax,Gold
call writeInt
call crlf

endm
.code