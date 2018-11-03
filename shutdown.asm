bits    16
  
  section .text 
  global shutasm
  global restartasm
restartasm:
  mov al, 0xFE
  out 0x64, al
  

shutasm: 
  xor  bx, bx
  mov  ax, 0x5301
  int  0x15
    
  xor  bx, bx
  mov  cx, 0x0102
  mov  ax, 0x530E
  int  0x15
    
  mov  cx, 0x0003
  mov  bx, 0x0001
  mov  ax, 0x5307
  int  0x15

  

  
  
    