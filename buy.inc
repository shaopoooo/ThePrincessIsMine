.data
buy macro

.if cheatflg == 0
	mov eax,gold
	sub eax,100
	mov gold,eax
.else
	mov eax,gold
	sub eax,500
	mov gold,eax
	call clrscr
	mov dh,10
	mov dl,34
	call gotoxy
	mov edx,offset store08
	call writestring
	mov dh,21
	mov dl,25
	call gotoxy
	call waitmsg
.endif
store
	
endm
.code