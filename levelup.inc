title levelup

.data
HERO MACRO 
tmp1 dword;
start_levelup:

mov  edx,hero_hp_full	  ;記錄升等前能力
mov  tmp1,edx    
mov  edx,hero_att    
mov  tmp2,edx
mov  edx,hero_def
mov  tmp3,edx
mov  tmp4, 0


call ReadInt   	 ;開始調整能力    
add  hero_hp_full,eax
add  tmp4,eax
call ReadInt
add  hero_att,eax
add  tmp4,eax
call ReadInt
add  hero_def,eax
add  tmp4,eax

cmp  tmp4 ,4  	 
je     end_levelup  	 ;離開levelup

				;錯誤
mov  edx,tmp1   		 
mov  hero_hp_full,edx    
mov  edx,tmp2
mov  hero_att	,edx    
mov  edx,tmp3
mov  hero_def	,edx
jmp start_levelup

end_levelup:
ret
.code
main proc
endp levelup
