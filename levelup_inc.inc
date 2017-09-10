.data
levelup_inc macro

mov edx,offset levelup6
call writeString

mov dh,6
mov dl,29
call gotoxy

mov edx,offset levelup1 
call writeString

mov  eax,hero_hp_full     ;記錄升等前能力
mov  tmp1,eax    
mov  eax,hero_att    
mov  tmp2,eax
mov  edx,hero_def
mov  tmp3,eax
mov  eax,hero_Int
mov  tmp5,eax
mov  tmp4, 0

mov  edx,offset levelup2
call writeString
call ReadInt            ;開始調整能力    
add  hero_hp_full,eax
add  tmp4,eax

mov  edx,offset levelup3
call writeString
call ReadInt
add  hero_att,eax
add  tmp4,eax

mov  edx,offset levelup4
call writeString
call ReadInt
add  hero_def,eax
add  tmp4,eax

mov  edx,offset levelup5
call writeString
call ReadInt
add  hero_Int,eax
add  tmp4,eax

cmp  tmp4 ,5        ;FALG
mov edx,hero_hp_full
mov hero_hp_now,edx        
je  battle_stage    ;能力點好繼續遊玩

               
;錯誤
mov dh,6
mov dl,29
call gotoxy
mov edx,offset levelup11
call writeString

mov dh,15
mov dl,23
call gotoxy
call waitmsg

mov  eax,tmp1            
mov  hero_hp_full,eax    
mov  eax,tmp2
mov  hero_att    ,eax    
mov  eax,tmp3
mov  hero_def    ,eax
mov  eax,tmp5
mov  hero_Int	 ,eax
jmp levelup

endm
.data