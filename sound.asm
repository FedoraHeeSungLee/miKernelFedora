
global soundstart
global soundend
soundstart:

	mov ax, 4063;re
	mov bx, 0
	call os_speaker_tone

soundend:
	call os_speaker_off


os_speaker_tone:
	pusha

	mov cx, ax			; Store note value for now

	mov al, 182
	out 43h, al
	mov ax, cx			; Set up frequency
	out 42h, al
	mov al, ah
	out 42h, al

	in al, 61h			; Switch PC speaker on
	or al, 03h
	out 61h, al

	popa
	ret

os_speaker_off:
	pusha

	in al, 61h
	and al, 0FCh
	out 61h, al

	popa
	ret


	



