.data
getexp_inc macro

call clrscr


mov edx,offset getexp2
call writeString 

mov dh,10
mov dl,32
call gotoxy
mov edx,offset getexp13
call writeString

mov dh,11
mov dl,32
call gotoxy
mov edx,offset getexp14
call writeString

mov dh,10
mov dl,40
call gotoxy
mov eax,monster_exp
call writeint

mov dh,11
mov dl,40
call gotoxy
mov eax,level
call writeint

mov dh,21
mov dl,25
call gotoxy
call waitmsg

mov eax,level
add Gold,eax

add level,1
mov eax,hero_exp_now
add eax,monster_exp
mov hero_exp_now,eax

cmp eax,hero_exp_max
jb	battle_stage
mov hero_exp_now,0
add hero_exp_max,5
jmp levelup

endm
.data