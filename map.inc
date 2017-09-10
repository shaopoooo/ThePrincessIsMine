.data
map macro
call clrscr

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

;tree
mov dh,2
mov dl,10
call gotoxy
mov eax, green + (black* 16)	   
call SetTextColor
mov edx,offset message39
call writeString
mov dh,3
mov dl,10
call gotoxy
mov edx,offset message40
call writeString
mov dh,3
mov dl,12
call gotoxy
mov eax, white + (black* 16)	   
call SetTextColor
mov edx,offset message43
call writeString
mov dh,4
mov dl,10
call gotoxy
mov eax, green + (black* 16)	   
call SetTextColor
mov edx,offset message41
call writeString
mov dh,5
mov dl,10
call gotoxy
mov eax, brown + (black* 16)	   
call SetTextColor
mov edx,offset message42
call writeString

mov dh,1
mov dl,5
call gotoxy
mov eax, green + (black* 16)	   
call SetTextColor
mov edx,offset message39
call writeString
mov dh,2
mov dl,5
call gotoxy
mov edx,offset message40
call writeString
mov dh,2
mov dl,7
call gotoxy
mov eax, white + (black* 16)	   
call SetTextColor
mov edx,offset message43
call writeString
mov dh,3
mov dl,5
call gotoxy
mov eax, green + (black* 16)	   
call SetTextColor
mov edx,offset message41
call writeString
mov dh,3
mov dl,7
call gotoxy
mov eax, red + (black* 16)	   
call SetTextColor
mov edx,offset message54
call writeString
mov dh,4
mov dl,5
call gotoxy
mov eax, brown + (black* 16)	   
call SetTextColor
mov edx,offset message42
call writeString


mov dh,6
mov dl,3
call gotoxy
mov eax, green + (black* 16)	   
call SetTextColor
mov edx,offset message39
call writeString
mov dh,7
mov dl,3
call gotoxy
mov edx,offset message40
call writeString
mov dh,7
mov dl,5
call gotoxy
mov eax, white + (black* 16)	   
call SetTextColor
mov edx,offset message43
call writeString
mov dh,8
mov dl,3
call gotoxy
mov eax, green + (black* 16)	   
call SetTextColor
mov edx,offset message41
call writeString
mov dh,9
mov dl,3
call gotoxy
mov eax, brown + (black* 16)	   
call SetTextColor
mov edx,offset message42
call writeString

mov dh,5
mov dl,15
call gotoxy
mov eax, green + (black* 16)	   
call SetTextColor
mov edx,offset message39
call writeString
mov dh,6
mov dl,15
call gotoxy
mov edx,offset message40
call writeString
mov dh,6
mov dl,17
call gotoxy
mov eax, white + (black* 16)	   
call SetTextColor
mov edx,offset message43
call writeString
mov dh,7
mov dl,15
call gotoxy
mov eax, green + (black* 16)	   
call SetTextColor
mov edx,offset message41
call writeString
mov dh,8
mov dl,15
call gotoxy
mov eax, brown + (black* 16)	   
call SetTextColor
mov edx,offset message42
call writeString

mov dh,11
mov dl,14
call gotoxy
mov eax, green + (black* 16)	   
call SetTextColor
mov edx,offset message39
call writeString
mov dh,12
mov dl,14
call gotoxy
mov edx,offset message40
call writeString
mov dh,12
mov dl,16
call gotoxy
mov eax, white + (black* 16)	   
call SetTextColor
mov edx,offset message43
call writeString
mov dh,13
mov dl,14
call gotoxy
mov eax, green + (black* 16)	   
call SetTextColor
mov edx,offset message41
call writeString
mov dh,14
mov dl,14
call gotoxy
mov eax, brown + (black* 16)	   
call SetTextColor
mov edx,offset message42
call writeString

mov dh,12
mov dl,3
call gotoxy
mov eax, green + (black* 16)	   
call SetTextColor
mov edx,offset message39
call writeString
mov dh,13
mov dl,3
call gotoxy
mov edx,offset message40
call writeString
mov dh,13
mov dl,5
call gotoxy
mov eax, white + (black* 16)	   
call SetTextColor
mov edx,offset message43
call writeString
mov dh,14
mov dl,3
call gotoxy
mov eax, green + (black* 16)	   
call SetTextColor
mov edx,offset message41
call writeString
mov dh,15
mov dl,3
call gotoxy
mov eax, brown + (black* 16)	   
call SetTextColor
mov edx,offset message42
call writeString

mov dh,13
mov dl,9
call gotoxy
mov eax, green + (black* 16)	   
call SetTextColor
mov edx,offset message39
call writeString
mov dh,14
mov dl,9
call gotoxy
mov edx,offset message40
call writeString
mov dh,14
mov dl,11
call gotoxy
mov eax, white + (black* 16)	   
call SetTextColor
mov edx,offset message43
call writeString
mov dh,15
mov dl,9
call gotoxy
mov eax, green + (black* 16)	   
call SetTextColor
mov edx,offset message41
call writeString
mov dh,16
mov dl,9
call gotoxy
mov eax, brown + (black* 16)	   
call SetTextColor
mov edx,offset message42
call writeString

mov dh,15
mov dl,15
call gotoxy
mov eax, green + (black* 16)	   
call SetTextColor
mov edx,offset message39
call writeString
mov dh,16
mov dl,15
call gotoxy
mov edx,offset message40
call writeString
mov dh,16
mov dl,17
call gotoxy
mov eax, white + (black* 16)	   
call SetTextColor
mov edx,offset message43
call writeString
mov dh,17
mov dl,15
call gotoxy
mov eax, green + (black* 16)	   
call SetTextColor
mov edx,offset message41
call writeString
mov dh,18
mov dl,15
call gotoxy
mov eax, brown + (black* 16)	   
call SetTextColor
mov edx,offset message42
call writeString

;road
mov dh,10
mov dl,0
call gotoxy
mov eax, white + (yellow* 16)	   
call SetTextColor
mov edx,offset message44
call writeString

mov dh,9
mov dl,24
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,8
mov dl,24
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,7
mov dl,24
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,6
mov dl,24
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,5
mov dl,24
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,4
mov dl,24
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString

mov dh,3
mov dl,26
call gotoxy
mov eax, white + (yellow* 16)	   
call SetTextColor
mov edx,offset message44
call writeString

mov dh,4
mov dl,48
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,5
mov dl,48
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,6
mov dl,48
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,7
mov dl,48
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,8
mov dl,48
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,9
mov dl,48
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,10
mov dl,48
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,11
mov dl,48
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,12
mov dl,48
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,13
mov dl,48
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,14
mov dl,48
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,15
mov dl,48
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,16
mov dl,48
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,17
mov dl,48
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,18
mov dl,48
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,19
mov dl,48
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString

mov dh,20
mov dl,50
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,20
mov dl,52
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,20
mov dl,46
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,20
mov dl,44
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,20
mov dl,42
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,20
mov dl,40
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message53
call writeString
mov dh,20
mov dl,16
call gotoxy
mov eax, red + (yellow* 16)	   
call SetTextColor
mov edx,offset message44
call writeString

;entrance spot
mov dh,10       ;start
mov dl,10
call gotoxy
mov eax, lightblue + (lightgreen* 16)	   
call SetTextColor
mov edx,offset message45
call writeString

mov dh,10       ;2
mov dl,24
call gotoxy
mov eax, red + (brown* 16)	   
call SetTextColor
mov edx,offset message53
call writeString

mov dh,3      ;3
mov dl,24
call gotoxy
mov edx,offset message53
call writeString

mov dh,3      ;4
mov dl,48
call gotoxy
mov edx,offset message53
call writeString

mov dh,20      ;crossroad
mov dl,48
call gotoxy
mov edx,offset message53
call writeString

mov dh,20      ;shop
mov dl,14
call gotoxy
mov eax, red + (blue* 16)	   
call SetTextColor
mov edx,offset message53
call writeString

mov dh,20      ;boss
mov dl,53
call gotoxy
mov eax, red + (magenta* 16)	   
call SetTextColor
mov edx,offset message53
call writeString

;shop
mov dh,17
mov dl,3
call gotoxy
mov eax, lightblue + (black* 16)	   
call SetTextColor
mov edx,offset message55
call writeString
mov dh,18
mov dl,3
call gotoxy
mov eax, lightblue + (black* 16)	   
call SetTextColor
mov edx,offset message56
call writeString
mov dh,19
mov dl,3
call gotoxy
mov eax, lightblue + (black* 16)	   
call SetTextColor
mov edx,offset message57
call writeString
mov dh,20
mov dl,3
call gotoxy
mov eax, lightblue + (black* 16)	   
call SetTextColor
mov edx,offset message58
call writeString
mov dh,20
mov dl,7
call gotoxy
mov eax, lightcyan + (black* 16)	   
call SetTextColor
mov edx,offset message59
call writeString

;smallcastel
mov dh,15
mov dl,55
call gotoxy
mov eax, lightmagenta + (black* 16)	   
call SetTextColor
mov edx,offset message46
call writeString
mov dh,16
mov dl,55
call gotoxy
mov edx,offset message47
call writeString
mov dh,17
mov dl,55
call gotoxy
mov edx,offset message48
call writeString
mov dh,18
mov dl,55
call gotoxy
mov edx,offset message49
call writeString
mov dh,19
mov dl,55
call gotoxy
mov edx,offset message50
call writeString
mov dh,20
mov dl,55
call gotoxy
mov edx,offset message51
call writeString
mov dh,21
mov dl,55
call gotoxy
mov edx,offset message52
call writeString

;dragon
mov dh,5
mov dl,30
call gotoxy
mov eax, gray + (black* 16)	   
call SetTextColor
mov edx,offset message60
call writeString
mov dh,6
mov dl,30
call gotoxy
mov edx,offset message61
call writeString
mov dh,7
mov dl,30
call gotoxy
mov edx,offset message62
call writeString
mov dh,8
mov dl,30
call gotoxy
mov edx,offset message63
call writeString
mov dh,9
mov dl,30
call gotoxy
mov edx,offset message64
call writeString
mov dh,10
mov dl,30
call gotoxy
mov edx,offset message65
call writeString
mov dh,11
mov dl,30
call gotoxy
mov edx,offset message66
call writeString
mov dh,12
mov dl,30
call gotoxy
mov edx,offset message67
call writeString
mov dh,13
mov dl,30
call gotoxy
mov edx,offset message68
call writeString
mov dh,14
mov dl,30
call gotoxy
mov edx,offset message69
call writeString
mov dh,15
mov dl,30
call gotoxy
mov edx,offset message70
call writeString
mov dh,16
mov dl,30
call gotoxy
mov edx,offset message71
call writeString

;instruction
mov eax, white + (black* 16)	   
call SetTextColor
mov dh,1
mov dl,55
call gotoxy
mov edx,offset message72
call writeString
mov dh,3
mov dl,59
call gotoxy
mov edx,offset message73
call writeString
mov dh,4
mov dl,59
call gotoxy
mov edx,offset message74
call writeString
mov dh,5
mov dl,59
call gotoxy
mov edx,offset message75
call writeString
mov dh,6
mov dl,59
call gotoxy
mov edx,offset message76
call writeString
mov dh,7
mov dl,59
call gotoxy
mov edx,offset message77
call writeString
mov dh,9
mov dl,53
call gotoxy
mov edx,offset message78
call writeString
mov dh,10
mov dl,53
call gotoxy
mov edx,offset message79
call writeString

mov eax, white + (black* 16)	   
call SetTextColor

endm
.code