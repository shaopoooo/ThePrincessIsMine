.data
hero_att_inc macro

mov dh,7
mov dl,0
call gotoxy
mov edx,offset UImes5    ;Hero->Att
call writeString
call crlf

.if(att_miss == 1)
    
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
    
    mov edx,offset UImes12    ;"miss try again"
    call writeString
    
    jmp fight            ;hero:攻擊 monster:攻擊
.elseif(eax < monster_state2)
    mov edx,offset UImes9    ;moster->mag
    call writeString
    call crlf
    
    mov edx,offset UImes11    ;"win"
    call writeString
    
    jmp win            ;hero:攻擊 monster:魔法
.else
    mov edx,offset UImes10     ;moster->def
    call writeString
    call crlf
    
    mov edx,offset UImes11_2    ;"lose"
    call writeString
    
    jmp lose            ;hero:攻擊 monster:防禦
.endif

endm
.code