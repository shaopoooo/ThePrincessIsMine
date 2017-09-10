.data
fight_inc macro

;boarder  top&bottom
mov dh,0
mov dl,0
call gotoxy
mov eax, white + (black* 16)	   
call SetTextColor
mov edx,offset message38
call writeString

mov dh,22
mov dl,0
call gotoxy
mov edx,offset message38
call writeString

mov dh,6
mov dl,1
call gotoxy

call readInt                ;讀取 攻擊(1 /魔法(2 /防禦(3

mov dh,6
mov dl,0
call gotoxy
mov edx,offset UImesSpace
call writeString
mov dh,7
mov dl,0
call gotoxy

cmp eax, 1
je hero_att_stage         ;攻擊
cmp eax, 2
je hero_magic_stage       ;魔法
cmp eax ,3
je hero_def_stage       ;防禦
cmp eax ,4
je jumpmap
cmp eax ,88224646
je cheat
jmp fight
cheat: 
mov hero_att,999
mov hero_def,999
mov hero_hp_now ,999
mov hero_hp_full ,999
mov hero_int,99


endm
.code