.data
story macro

call clrscr

;gamestart
mov dh,0               ;upperbound
mov dl,0
call gotoxy
mov eax, white + (black* 16)	   
call SetTextColor
mov edx,offset message2
call writeString
call crlf

mov dh,22               ;lowerbound
mov dl,0
call gotoxy
mov edx,offset message2
call writeString

mov dh,2               ;gamename
mov dl,0
call gotoxy
mov eax, lightred + (black* 16)	   
call SetTextColor
mov edx,OFFSET message00
call writeString
mov dh,7
mov dl,0
call gotoxy
mov edx,OFFSET message05
call writeString
mov dh,12
mov dl,0
call gotoxy
mov edx,OFFSET message80
call writeString

mov dh,7               ;princesss
mov dl,50
call gotoxy
mov eax, yellow + (black* 16)	   
call SetTextColor
mov edx,OFFSET message85
call writeString
mov dh,8                   ;crown
mov dl,50
call gotoxy
mov edx,OFFSET message86
call writeString
mov dh,9                 ;eyes
mov dl,50
call gotoxy
mov eax, brown + (black* 16)	   
call SetTextColor
mov edx,OFFSET message87
call writeString
mov dh,9                 ;eyes2
mov dl,60
call gotoxy
mov eax, white + (black* 16)	   
call SetTextColor
mov edx,OFFSET message100
call writeString
mov dh,10             ;mouth
mov dl,50
call gotoxy
mov eax, brown + (black* 16)	   
call SetTextColor
mov edx,OFFSET message88
call writeString
mov dh,10                 ;mouth2
mov dl,61
call gotoxy
mov eax, white + (black* 16)	   
call SetTextColor
mov edx,OFFSET message101
call writeString
mov dh,11            ;neck
mov dl,50
call gotoxy
mov eax, brown + (black* 16)	   
call SetTextColor
mov edx,OFFSET message89
call writeString
mov dh,11                 ;neck2
mov dl,59
call gotoxy
mov eax, yellow + (black* 16)	   
call SetTextColor
mov edx,OFFSET message102
call writeString
mov dh,12             ;shoulder
mov dl,50
call gotoxy
mov eax, brown + (black* 16)	   
call SetTextColor
mov edx,OFFSET message90
call writeString
mov dh,12                 ;shoulder2
mov dl,61
call gotoxy
mov eax, blue + (black* 16)	   
call SetTextColor
mov edx,OFFSET message103
call writeString
mov dh,13                ;arm
mov dl,50
call gotoxy
mov eax, blue + (black* 16)	   
call SetTextColor
mov edx,OFFSET message91
call writeString
mov dh,14            ;cuff
mov dl,50
call gotoxy
mov eax, cyan + (black* 16)	   
call SetTextColor
mov edx,OFFSET message92
call writeString
mov dh,14                 ;cuff2
mov dl,59
call gotoxy
mov eax, blue + (black* 16)	   
call SetTextColor
mov edx,OFFSET message104
call writeString
mov dh,15             ;hands
mov dl,50
call gotoxy
mov eax, magenta + (black* 16)	   
call SetTextColor
mov edx,OFFSET message93
call writeString
mov dh,15                 ;hands2
mov dl,58
call gotoxy
mov eax, blue + (black* 16)	   
call SetTextColor
mov edx,OFFSET message105
call writeString
mov dh,16                    ;rim
mov dl,50
call gotoxy
mov eax, cyan + (black* 16)	   
call SetTextColor
mov edx,OFFSET message94
call writeString
mov dh,17                      ;dress
mov dl,50
call gotoxy
mov eax, blue + (black* 16)	   
call SetTextColor
mov edx,OFFSET message95
call writeString
mov dh,18                    ;rim
mov dl,50
call gotoxy
mov eax, cyan + (black* 16)	   
call SetTextColor
mov edx,OFFSET message96
call writeString
mov dh,19                    ;dress
mov dl,50
call gotoxy
mov eax, blue + (black* 16)	   
call SetTextColor
mov edx,OFFSET message97
call writeString
mov dh,20                      ;rim
mov dl,50
call gotoxy
mov eax, cyan + (black* 16)	   
call SetTextColor
mov edx,OFFSET message98        
call writeString
mov dh,21                     ;shoes
mov dl,50
call gotoxy
mov eax, magenta + (black* 16)	      
call SetTextColor
mov edx,OFFSET message99
call writeString

mov eax, gray + (black* 16)         ;continue
call SetTextColor
mov dh,21
mov dl,25
call gotoxy
call waitmsg
call crlf

mov eax, white + (black* 16)	   
call SetTextColor

call clrscr

;instructions
	mov dh,0                 ;upperbound
	mov dl,0
	call gotoxy
	mov edx,offset message2
	call writeString

	mov dh,22                  ;lowerbound
	mov dl,0
	call gotoxy
	mov edx,offset message2
	call writeString
	
	mov dh,3                    ;how to play
	mov dl,35
	call gotoxy
	mov eax, lightgreen + (black* 16)	   
	call SetTextColor
	mov edx,OFFSET message3
	call writeString
	call crlf
	
	mov dh,6
	mov dl,0
	call gotoxy
	mov eax, yellow + (black* 16)	   
	call SetTextColor
	mov edx,OFFSET message4
	call writeString
	call crlf
	mov edx,OFFSET message5
	call writeString
	call crlf
	mov edx,OFFSET message6
	call writeString
	call crlf
	mov edx,OFFSET message7
	call writeString
	call crlf
	mov edx,OFFSET message8
	call writeString
	
	mov eax, gray + (black* 16)         ;continue
	call SetTextColor
	mov dh,21
	mov dl,25
	call gotoxy
	call waitmsg
	call crlf
	
	call clrscr
	mov eax, white + (black* 16)	   
	call SetTextColor
	
;story
	call clrscr          ;upperbound      
	mov dh,0
	mov dl,0
	call gotoxy
	mov edx,offset message2
	call writeString

	mov dh,22             ;lowerbound
	mov dl,0
	call gotoxy
	mov edx,offset message2
	call writeString
	
	bigcastel
	
	mov eax, lightblue + (black* 16)     ;once upon a time...
	call SetTextColor
	mov dh,10
	mov dl,4
	call gotoxy
	mov edx,offset message9
	call writeString
	
	mov eax, gray + (black* 16)       ;continue
	call SetTextColor
	mov dh,21
	mov dl,25
	call gotoxy
	call waitmsg
	
	bigcastel
	
	mov eax, lightblue + (black* 16)      ;until one day...
	call SetTextColor
	mov dh,10
	mov dl,30
	call gotoxy
	mov edx,offset message10
	call writeString
	
	mov eax, gray + (black* 16)        ;continue
	call SetTextColor
	mov dh,21
	mov dl,25
	call gotoxy
	call waitmsg
	
	bigcastel
	
	mov eax, lightblue + (black* 16)       ;a frightful scream
	call SetTextColor
	mov dh,10
	mov dl,10
	call gotoxy
	mov edx,offset message11
	call writeString
	
	mov eax, gray + (black* 16)        ;continue
	call SetTextColor
	mov dh,21
	mov dl,25
	call gotoxy
	call waitmsg
	
	bigcastel
	
	mov eax, lightcyan + (black* 16)       ;the princess...
	call SetTextColor
	mov dh,10
	mov dl,30
	call gotoxy
	mov edx,offset message12
	call writeString
	
	mov eax, gray + (black* 16)      ;continue
	call SetTextColor
	mov dh,21
	mov dl,25
	call gotoxy
	call waitmsg
	
	bigcastel
	
	mov eax, lightblue + (black* 16)       ;The King...
	call SetTextColor
	mov dh,10
	mov dl,18
	call gotoxy
	mov edx,offset message13
	call writeString
	
	mov eax, gray + (black* 16)      ;continue
	call SetTextColor
	mov dh,21
	mov dl,25
	call gotoxy
	call waitmsg
	
	bigcastel
	
	mov eax, lightblue + (black* 16)       ;go on
	call SetTextColor
	mov dh,10
	mov dl,25
	call gotoxy
	mov edx,offset message109
	call writeString
	
	mov eax, gray + (black* 16)      ;continue
	call SetTextColor
	mov dh,21
	mov dl,25
	call gotoxy
	call waitmsg

endm
.code