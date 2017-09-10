.data
win macro

call randomize
mov eax, 99
call randomRange

.if(hero_Luk > eax)        ;爆擊
    mov eax ,hero_att
    add eax ,hero_att
    sub eax ,monster_def
.else                    ;沒爆擊
    mov eax ,hero_att;
    sub eax ,monster_def
.endif

.if(eax>1)                ;攻擊>怪物防禦
    sub monster_hp,eax    ;扣血
.endif

mov dh,0
mov dl,75
call gotoxy
mov edx,offset UImesSpace
call writeString

mov dh,0
mov dl,75
call gotoxy
mov eax ,monster_hp
call writeInt

cmp eax,0
jg  fight
jmp getexp

endm
.code