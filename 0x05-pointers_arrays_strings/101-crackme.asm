
101-crackme:	file format elf64-x86-64

Disassembly of section .init:

0000000000400400 <_init>:
  400400: 48 83 ec 08                  	subq	$8, %rsp
  400404: 48 8b 05 ed 0b 20 00         	movq	2100205(%rip), %rax     # 0x600ff8 <puts@@GLIBC_2.2.5+0x600ff8>
  40040b: 48 85 c0                     	testq	%rax, %rax
  40040e: 74 05                        	je	0x400415 <_init+0x15>
  400410: e8 4b 00 00 00               	callq	0x400460 <puts@@GLIBC_2.2.5+0x400460>
  400415: 48 83 c4 08                  	addq	$8, %rsp
  400419: c3                           	retq

Disassembly of section .plt:

0000000000400420 <.plt>:
  400420: ff 35 e2 0b 20 00            	pushq	2100194(%rip)           # 0x601008 <_GLOBAL_OFFSET_TABLE_+0x8>
  400426: ff 25 e4 0b 20 00            	jmpq	*2100196(%rip)          # 0x601010 <_GLOBAL_OFFSET_TABLE_+0x10>
  40042c: 0f 1f 40 00                  	nopl	(%rax)

0000000000400430 <puts@plt>:
  400430: ff 25 e2 0b 20 00            	jmpq	*2100194(%rip)          # 0x601018 <_GLOBAL_OFFSET_TABLE_+0x18>
  400436: 68 00 00 00 00               	pushq	$0
  40043b: e9 e0 ff ff ff               	jmp	0x400420 <.plt>

0000000000400440 <printf@plt>:
  400440: ff 25 da 0b 20 00            	jmpq	*2100186(%rip)          # 0x601020 <_GLOBAL_OFFSET_TABLE_+0x20>
  400446: 68 01 00 00 00               	pushq	$1
  40044b: e9 d0 ff ff ff               	jmp	0x400420 <.plt>

0000000000400450 <__libc_start_main@plt>:
  400450: ff 25 d2 0b 20 00            	jmpq	*2100178(%rip)          # 0x601028 <_GLOBAL_OFFSET_TABLE_+0x28>
  400456: 68 02 00 00 00               	pushq	$2
  40045b: e9 c0 ff ff ff               	jmp	0x400420 <.plt>

Disassembly of section .plt.got:

0000000000400460 <.plt.got>:
  400460: ff 25 92 0b 20 00            	jmpq	*2100114(%rip)          # 0x600ff8 <puts@@GLIBC_2.2.5+0x600ff8>
  400466: 66 90                        	nop

Disassembly of section .text:

0000000000400470 <_start>:
  400470: 31 ed                        	xorl	%ebp, %ebp
  400472: 49 89 d1                     	movq	%rdx, %r9
  400475: 5e                           	popq	%rsi
  400476: 48 89 e2                     	movq	%rsp, %rdx
  400479: 48 83 e4 f0                  	andq	$-16, %rsp
  40047d: 50                           	pushq	%rax
  40047e: 54                           	pushq	%rsp
  40047f: 49 c7 c0 90 06 40 00         	movq	$4195984, %r8           # imm = 0x400690
  400486: 48 c7 c1 20 06 40 00         	movq	$4195872, %rcx          # imm = 0x400620
  40048d: 48 c7 c7 9d 05 40 00         	movq	$4195741, %rdi          # imm = 0x40059D
  400494: e8 b7 ff ff ff               	callq	0x400450 <__libc_start_main@plt>
  400499: f4                           	hlt
  40049a: 66 0f 1f 44 00 00            	nopw	(%rax,%rax)

00000000004004a0 <deregister_tm_clones>:
  4004a0: b8 47 10 60 00               	movl	$6295623, %eax          # imm = 0x601047
  4004a5: 55                           	pushq	%rbp
  4004a6: 48 2d 40 10 60 00            	subq	$6295616, %rax          # imm = 0x601040
  4004ac: 48 83 f8 0e                  	cmpq	$14, %rax
  4004b0: 48 89 e5                     	movq	%rsp, %rbp
  4004b3: 76 1b                        	jbe	0x4004d0 <deregister_tm_clones+0x30>
  4004b5: b8 00 00 00 00               	movl	$0, %eax
  4004ba: 48 85 c0                     	testq	%rax, %rax
  4004bd: 74 11                        	je	0x4004d0 <deregister_tm_clones+0x30>
  4004bf: 5d                           	popq	%rbp
  4004c0: bf 40 10 60 00               	movl	$6295616, %edi          # imm = 0x601040
  4004c5: ff e0                        	jmpq	*%rax
  4004c7: 66 0f 1f 84 00 00 00 00 00   	nopw	(%rax,%rax)
  4004d0: 5d                           	popq	%rbp
  4004d1: c3                           	retq
  4004d2: 0f 1f 40 00                  	nopl	(%rax)
  4004d6: 66 2e 0f 1f 84 00 00 00 00 00	nopw	%cs:(%rax,%rax)

00000000004004e0 <register_tm_clones>:
  4004e0: be 40 10 60 00               	movl	$6295616, %esi          # imm = 0x601040
  4004e5: 55                           	pushq	%rbp
  4004e6: 48 81 ee 40 10 60 00         	subq	$6295616, %rsi          # imm = 0x601040
  4004ed: 48 c1 fe 03                  	sarq	$3, %rsi
  4004f1: 48 89 e5                     	movq	%rsp, %rbp
  4004f4: 48 89 f0                     	movq	%rsi, %rax
  4004f7: 48 c1 e8 3f                  	shrq	$63, %rax
  4004fb: 48 01 c6                     	addq	%rax, %rsi
  4004fe: 48 d1 fe                     	sarq	%rsi
  400501: 74 15                        	je	0x400518 <register_tm_clones+0x38>
  400503: b8 00 00 00 00               	movl	$0, %eax
  400508: 48 85 c0                     	testq	%rax, %rax
  40050b: 74 0b                        	je	0x400518 <register_tm_clones+0x38>
  40050d: 5d                           	popq	%rbp
  40050e: bf 40 10 60 00               	movl	$6295616, %edi          # imm = 0x601040
  400513: ff e0                        	jmpq	*%rax
  400515: 0f 1f 00                     	nopl	(%rax)
  400518: 5d                           	popq	%rbp
  400519: c3                           	retq
  40051a: 66 0f 1f 44 00 00            	nopw	(%rax,%rax)

0000000000400520 <__do_global_dtors_aux>:
  400520: 80 3d 19 0b 20 00 00         	cmpb	$0, 2099993(%rip)       # 0x601040 <completed.7585>
  400527: 75 11                        	jne	0x40053a <__do_global_dtors_aux+0x1a>
  400529: 55                           	pushq	%rbp
  40052a: 48 89 e5                     	movq	%rsp, %rbp
  40052d: e8 6e ff ff ff               	callq	0x4004a0 <deregister_tm_clones>
  400532: 5d                           	popq	%rbp
  400533: c6 05 06 0b 20 00 01         	movb	$1, 2099974(%rip)       # 0x601040 <completed.7585>
  40053a: f3 c3                        	rep		retq
  40053c: 0f 1f 40 00                  	nopl	(%rax)

0000000000400540 <frame_dummy>:
  400540: bf 20 0e 60 00               	movl	$6295072, %edi          # imm = 0x600E20
  400545: 48 83 3f 00                  	cmpq	$0, (%rdi)
  400549: 75 05                        	jne	0x400550 <frame_dummy+0x10>
  40054b: eb 93                        	jmp	0x4004e0 <register_tm_clones>
  40054d: 0f 1f 00                     	nopl	(%rax)
  400550: b8 00 00 00 00               	movl	$0, %eax
  400555: 48 85 c0                     	testq	%rax, %rax
  400558: 74 f1                        	je	0x40054b <frame_dummy+0xb>
  40055a: 55                           	pushq	%rbp
  40055b: 48 89 e5                     	movq	%rsp, %rbp
  40055e: ff d0                        	callq	*%rax
  400560: 5d                           	popq	%rbp
  400561: e9 7a ff ff ff               	jmp	0x4004e0 <register_tm_clones>

0000000000400566 <checksum>:
  400566: 55                           	pushq	%rbp
  400567: 48 89 e5                     	movq	%rsp, %rbp
  40056a: 48 89 7d e8                  	movq	%rdi, -24(%rbp)
  40056e: 48 c7 45 f8 00 00 00 00      	movq	$0, -8(%rbp)
  400576: eb 14                        	jmp	0x40058c <checksum+0x26>
  400578: 48 8b 45 e8                  	movq	-24(%rbp), %rax
  40057c: 0f b6 00                     	movzbl	(%rax), %eax
  40057f: 48 0f be c0                  	movsbq	%al, %rax
  400583: 48 01 45 f8                  	addq	%rax, -8(%rbp)
  400587: 48 83 45 e8 01               	addq	$1, -24(%rbp)
  40058c: 48 8b 45 e8                  	movq	-24(%rbp), %rax
  400590: 0f b6 00                     	movzbl	(%rax), %eax
  400593: 84 c0                        	testb	%al, %al
  400595: 75 e1                        	jne	0x400578 <checksum+0x12>
  400597: 48 8b 45 f8                  	movq	-8(%rbp), %rax
  40059b: 5d                           	popq	%rbp
  40059c: c3                           	retq

000000000040059d <main>:
  40059d: 55                           	pushq	%rbp
  40059e: 48 89 e5                     	movq	%rsp, %rbp
  4005a1: 48 83 ec 20                  	subq	$32, %rsp
  4005a5: 89 7d ec                     	movl	%edi, -20(%rbp)
  4005a8: 48 89 75 e0                  	movq	%rsi, -32(%rbp)
  4005ac: 83 7d ec 02                  	cmpl	$2, -20(%rbp)
  4005b0: 74 20                        	je	0x4005d2 <main+0x35>
  4005b2: 48 8b 45 e0                  	movq	-32(%rbp), %rax
  4005b6: 48 8b 00                     	movq	(%rax), %rax
  4005b9: 48 89 c6                     	movq	%rax, %rsi
  4005bc: bf a4 06 40 00               	movl	$4196004, %edi          # imm = 0x4006A4
  4005c1: b8 00 00 00 00               	movl	$0, %eax
  4005c6: e8 75 fe ff ff               	callq	0x400440 <printf@plt>
  4005cb: b8 01 00 00 00               	movl	$1, %eax
  4005d0: eb 41                        	jmp	0x400613 <main+0x76>
  4005d2: 48 8b 45 e0                  	movq	-32(%rbp), %rax
  4005d6: 48 83 c0 08                  	addq	$8, %rax
  4005da: 48 8b 00                     	movq	(%rax), %rax
  4005dd: 48 89 c7                     	movq	%rax, %rdi
  4005e0: e8 81 ff ff ff               	callq	0x400566 <checksum>
  4005e5: 48 89 45 f8                  	movq	%rax, -8(%rbp)
  4005e9: 48 81 7d f8 d4 0a 00 00      	cmpq	$2772, -8(%rbp)         # imm = 0xAD4
  4005f1: 74 11                        	je	0x400604 <main+0x67>
  4005f3: bf b8 06 40 00               	movl	$4196024, %edi          # imm = 0x4006B8
  4005f8: e8 33 fe ff ff               	callq	0x400430 <puts@plt>
  4005fd: b8 01 00 00 00               	movl	$1, %eax
  400602: eb 0f                        	jmp	0x400613 <main+0x76>
  400604: bf c7 06 40 00               	movl	$4196039, %edi          # imm = 0x4006C7
  400609: e8 22 fe ff ff               	callq	0x400430 <puts@plt>
  40060e: b8 00 00 00 00               	movl	$0, %eax
  400613: c9                           	leave
  400614: c3                           	retq
  400615: 66 2e 0f 1f 84 00 00 00 00 00	nopw	%cs:(%rax,%rax)
  40061f: 90                           	nop

0000000000400620 <__libc_csu_init>:
  400620: 41 57                        	pushq	%r15
  400622: 41 56                        	pushq	%r14
  400624: 41 89 ff                     	movl	%edi, %r15d
  400627: 41 55                        	pushq	%r13
  400629: 41 54                        	pushq	%r12
  40062b: 4c 8d 25 de 07 20 00         	leaq	2099166(%rip), %r12     # 0x600e10 <__init_array_start>
  400632: 55                           	pushq	%rbp
  400633: 48 8d 2d de 07 20 00         	leaq	2099166(%rip), %rbp     # 0x600e18 <__do_global_dtors_aux_fini_array_entry>
  40063a: 53                           	pushq	%rbx
  40063b: 49 89 f6                     	movq	%rsi, %r14
  40063e: 49 89 d5                     	movq	%rdx, %r13
  400641: 4c 29 e5                     	subq	%r12, %rbp
  400644: 48 83 ec 08                  	subq	$8, %rsp
  400648: 48 c1 fd 03                  	sarq	$3, %rbp
  40064c: e8 af fd ff ff               	callq	0x400400 <_init>
  400651: 48 85 ed                     	testq	%rbp, %rbp
  400654: 74 20                        	je	0x400676 <__libc_csu_init+0x56>
  400656: 31 db                        	xorl	%ebx, %ebx
  400658: 0f 1f 84 00 00 00 00 00      	nopl	(%rax,%rax)
  400660: 4c 89 ea                     	movq	%r13, %rdx
  400663: 4c 89 f6                     	movq	%r14, %rsi
  400666: 44 89 ff                     	movl	%r15d, %edi
  400669: 41 ff 14 dc                  	callq	*(%r12,%rbx,8)
  40066d: 48 83 c3 01                  	addq	$1, %rbx
  400671: 48 39 eb                     	cmpq	%rbp, %rbx
  400674: 75 ea                        	jne	0x400660 <__libc_csu_init+0x40>
  400676: 48 83 c4 08                  	addq	$8, %rsp
  40067a: 5b                           	popq	%rbx
  40067b: 5d                           	popq	%rbp
  40067c: 41 5c                        	popq	%r12
  40067e: 41 5d                        	popq	%r13
  400680: 41 5e                        	popq	%r14
  400682: 41 5f                        	popq	%r15
  400684: c3                           	retq
  400685: 90                           	nop
  400686: 66 2e 0f 1f 84 00 00 00 00 00	nopw	%cs:(%rax,%rax)

0000000000400690 <__libc_csu_fini>:
  400690: f3 c3                        	rep		retq

Disassembly of section .fini:

0000000000400694 <_fini>:
  400694: 48 83 ec 08                  	subq	$8, %rsp
  400698: 48 83 c4 08                  	addq	$8, %rsp
  40069c: c3                           	retq
