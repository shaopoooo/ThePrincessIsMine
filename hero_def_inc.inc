.data
hero_def_inc macro

mov edx,offset UImes7  ;Hero->Def
call writeString
call crlf

.if(def_miss == 1)
    
    mov edx,offset UImes8_2    ;moster->X
    call writeString
    call crlf
    
    mov edx,offset UImes12
    call writeString
    jmp lose
.endif

call randomize
mov eax, 9
call randomRange

.if(eax < monster_state1)
    mov edx,offset UImes8    ;moster->att
    call writeString
    call crlf            
    
    mov edx,offset UImes11    ;"win"    
    call writeString
    
    jmp win                ;hero防禦: monster:攻擊
.elseif(eax < monster_state2)
    mov edx,offset UImes9    ;moster->mag
    call writeString
    call crlf
    
    mov edx,offset UImes11_2    ;"lose"
    call writeString
    
    jmp lose_magic            ;hero防禦: monster:魔法
.else
    mov edx,offset UImes10    ;moster->def
    call writeString
    call crlf
    
    mov edx,offset UImes12    ;"miss choose again"
    call writeString
    
    jmp fight            ;hero防禦: monster:防禦
.endif

endm
.code