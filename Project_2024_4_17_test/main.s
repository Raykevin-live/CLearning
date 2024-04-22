	.file	"main.c"
 # GNU C17 (x86_64-posix-seh-rev1, Built by MinGW-W64 project) version 11.2.0 (x86_64-w64-mingw32)
 #	compiled by GNU C version 11.2.0, GMP version 6.2.1, MPFR version 4.1.0, MPC version 1.2.1, isl version isl-0.24-GMP

 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed: -mtune=core2 -march=nocona -finput-charset=UTF-8 -fexec-charset=gbk -fstack-protector-strong
	.text
	.def	scanf;	.scl	3;	.type	32;	.endef
	.seh_proc	scanf
scanf:
	pushq	%rbp	 #
	.seh_pushreg	%rbp
	pushq	%rbx	 #
	.seh_pushreg	%rbx
	subq	$88, %rsp	 #,
	.seh_stackalloc	88
	leaq	80(%rsp), %rbp	 #,
	.seh_setframe	%rbp, 80
	.seh_endprologue
	movq	%rcx, -40(%rbp)	 # __format, __format
	movq	%rdx, 40(%rbp)	 #,
	movq	%r8, 48(%rbp)	 #,
	movq	%r9, 56(%rbp)	 #,
 # D:/red panda/RedPanda-Cpp/MinGW64/x86_64-w64-mingw32/include/stdio.h:302: {
	movq	.refptr.__stack_chk_guard(%rip), %rax	 #, tmp86
	movq	(%rax), %rbx	 # __stack_chk_guard, tmp93
	movq	%rbx, -8(%rbp)	 # tmp93, D.3249
	xorl	%ebx, %ebx	 # tmp93
 # D:/red panda/RedPanda-Cpp/MinGW64/x86_64-w64-mingw32/include/stdio.h:304:   __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
	leaq	40(%rbp), %rax	 #, tmp87
	movq	%rax, -16(%rbp)	 # tmp87, MEM[(char * *)&__local_argv]
 # D:/red panda/RedPanda-Cpp/MinGW64/x86_64-w64-mingw32/include/stdio.h:305:   __retval = __mingw_vfscanf( stdin, __format, __local_argv );
	movq	-16(%rbp), %rbx	 # __local_argv, __local_argv.0_1
	movl	$0, %ecx	 #,
	movq	__imp___acrt_iob_func(%rip), %rax	 #, tmp88
	call	*%rax	 # tmp88
	movq	%rax, %rcx	 #, _2
	movq	-40(%rbp), %rax	 # __format, tmp89
	movq	%rbx, %r8	 # __local_argv.0_1,
	movq	%rax, %rdx	 # tmp89,
	call	__mingw_vfscanf	 #
	movl	%eax, -20(%rbp)	 # tmp90, __retval
 # D:/red panda/RedPanda-Cpp/MinGW64/x86_64-w64-mingw32/include/stdio.h:307:   return __retval;
	movl	-20(%rbp), %eax	 # __retval, _10
	movl	%eax, %edx	 # _10, <retval>
 # D:/red panda/RedPanda-Cpp/MinGW64/x86_64-w64-mingw32/include/stdio.h:308: }
	movq	.refptr.__stack_chk_guard(%rip), %rax	 #, tmp92
	movq	-8(%rbp), %rbx	 # D.3249, tmp94
	subq	(%rax), %rbx	 # __stack_chk_guard, tmp94
	je	.L3	 #,
	call	__stack_chk_fail	 #
.L3:
	movl	%edx, %eax	 # <retval>,
	addq	$88, %rsp	 #,
	popq	%rbx	 #
	popq	%rbp	 #
	ret	
	.seh_endproc
	.def	printf;	.scl	3;	.type	32;	.endef
	.seh_proc	printf
printf:
	pushq	%rbp	 #
	.seh_pushreg	%rbp
	pushq	%rbx	 #
	.seh_pushreg	%rbx
	subq	$88, %rsp	 #,
	.seh_stackalloc	88
	leaq	80(%rsp), %rbp	 #,
	.seh_setframe	%rbp, 80
	.seh_endprologue
	movq	%rcx, -40(%rbp)	 # __format, __format
	movq	%rdx, 40(%rbp)	 #,
	movq	%r8, 48(%rbp)	 #,
	movq	%r9, 56(%rbp)	 #,
 # D:/red panda/RedPanda-Cpp/MinGW64/x86_64-w64-mingw32/include/stdio.h:369: {
	movq	.refptr.__stack_chk_guard(%rip), %rax	 #, tmp86
	movq	(%rax), %rbx	 # __stack_chk_guard, tmp93
	movq	%rbx, -8(%rbp)	 # tmp93, D.3254
	xorl	%ebx, %ebx	 # tmp93
 # D:/red panda/RedPanda-Cpp/MinGW64/x86_64-w64-mingw32/include/stdio.h:371:   __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
	leaq	40(%rbp), %rax	 #, tmp87
	movq	%rax, -16(%rbp)	 # tmp87, MEM[(char * *)&__local_argv]
 # D:/red panda/RedPanda-Cpp/MinGW64/x86_64-w64-mingw32/include/stdio.h:372:   __retval = __mingw_vfprintf( stdout, __format, __local_argv );
	movq	-16(%rbp), %rbx	 # __local_argv, __local_argv.1_1
	movl	$1, %ecx	 #,
	movq	__imp___acrt_iob_func(%rip), %rax	 #, tmp88
	call	*%rax	 # tmp88
	movq	%rax, %rcx	 #, _2
	movq	-40(%rbp), %rax	 # __format, tmp89
	movq	%rbx, %r8	 # __local_argv.1_1,
	movq	%rax, %rdx	 # tmp89,
	call	__mingw_vfprintf	 #
	movl	%eax, -20(%rbp)	 # tmp90, __retval
 # D:/red panda/RedPanda-Cpp/MinGW64/x86_64-w64-mingw32/include/stdio.h:374:   return __retval;
	movl	-20(%rbp), %eax	 # __retval, _10
	movl	%eax, %edx	 # _10, <retval>
 # D:/red panda/RedPanda-Cpp/MinGW64/x86_64-w64-mingw32/include/stdio.h:375: }
	movq	.refptr.__stack_chk_guard(%rip), %rax	 #, tmp92
	movq	-8(%rbp), %rbx	 # D.3254, tmp94
	subq	(%rax), %rbx	 # __stack_chk_guard, tmp94
	je	.L6	 #,
	call	__stack_chk_fail	 #
.L6:
	movl	%edx, %eax	 # <retval>,
	addq	$88, %rsp	 #,
	popq	%rbx	 #
	popq	%rbp	 #
	ret	
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "\307\353\312\344\310\353\303\334\302\353:>\0"
.LC1:
	.ascii "%s\0"
.LC2:
	.ascii "\307\353\310\267\310\317\243\250Y/N\243\251:>\0"
.LC3:
	.ascii "\310\267\310\317\263\311\271\246\12\0"
.LC4:
	.ascii "\267\305\306\372\310\267\310\317\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp	 #
	.seh_pushreg	%rbp
	movq	%rsp, %rbp	 #,
	.seh_setframe	%rbp, 0
	subq	$80, %rsp	 #,
	.seh_stackalloc	80
	.seh_endprologue
 # D:/redpanda_code/Project_2024_4_17_test/main.c:4: {
	call	__main	 #
	movq	.refptr.__stack_chk_guard(%rip), %rax	 #, tmp84
	movq	(%rax), %rdx	 # __stack_chk_guard, tmp95
	movq	%rdx, -8(%rbp)	 # tmp95, D.3255
	xorl	%edx, %edx	 # tmp95
 # D:/redpanda_code/Project_2024_4_17_test/main.c:5: 	int ret = 0;
	movl	$0, -40(%rbp)	 #, ret
 # D:/redpanda_code/Project_2024_4_17_test/main.c:6: 	int ch = 0;
	movl	$0, -36(%rbp)	 #, ch
 # D:/redpanda_code/Project_2024_4_17_test/main.c:7: 	char password[20] = {0};
	movq	$0, -32(%rbp)	 #, password
	movq	$0, -24(%rbp)	 #, password
	movl	$0, -16(%rbp)	 #, password
 # D:/redpanda_code/Project_2024_4_17_test/main.c:8: 	printf("请输入密码:>");
	leaq	.LC0(%rip), %rax	 #, tmp85
	movq	%rax, %rcx	 # tmp85,
	call	printf	 #
 # D:/redpanda_code/Project_2024_4_17_test/main.c:9: 	scanf("%s", password);//scanf 输入之后会放到缓冲区，等待数字被读取,此时空格前的部分被放到password数组里
	leaq	-32(%rbp), %rax	 #, tmp86
	movq	%rax, %rdx	 # tmp86,
	leaq	.LC1(%rip), %rax	 #, tmp87
	movq	%rax, %rcx	 # tmp87,
	call	scanf	 #
 # D:/redpanda_code/Project_2024_4_17_test/main.c:12: 	while((ch = getchar()) != '\n')
	nop	
.L8:
 # D:/redpanda_code/Project_2024_4_17_test/main.c:12: 	while((ch = getchar()) != '\n')
	call	getchar	 #
	movl	%eax, -36(%rbp)	 # tmp88, ch
 # D:/redpanda_code/Project_2024_4_17_test/main.c:12: 	while((ch = getchar()) != '\n')
	cmpl	$10, -36(%rbp)	 #, ch
	jne	.L8	 #,
 # D:/redpanda_code/Project_2024_4_17_test/main.c:18: 	printf("请确认（Y/N）:>");//最后剩余一个"\n"，如果不做读取处理会直接被printf函数给读取
	leaq	.LC2(%rip), %rax	 #, tmp89
	movq	%rax, %rcx	 # tmp89,
	call	printf	 #
 # D:/redpanda_code/Project_2024_4_17_test/main.c:20: 	ret = getchar();
	call	getchar	 #
	movl	%eax, -40(%rbp)	 # tmp90, ret
 # D:/redpanda_code/Project_2024_4_17_test/main.c:22: 	if(ret == 'Y')
	cmpl	$89, -40(%rbp)	 #, ret
	jne	.L9	 #,
 # D:/redpanda_code/Project_2024_4_17_test/main.c:24: 		printf("确认成功\n");
	leaq	.LC3(%rip), %rax	 #, tmp91
	movq	%rax, %rcx	 # tmp91,
	call	printf	 #
	jmp	.L10	 #
.L9:
 # D:/redpanda_code/Project_2024_4_17_test/main.c:28: 		printf("放弃确认\n");
	leaq	.LC4(%rip), %rax	 #, tmp92
	movq	%rax, %rcx	 # tmp92,
	call	printf	 #
.L10:
 # D:/redpanda_code/Project_2024_4_17_test/main.c:30: 	return 0;
	movl	$0, %eax	 #, _16
 # D:/redpanda_code/Project_2024_4_17_test/main.c:31: }
	movl	%eax, %edx	 # _16, <retval>
	movq	.refptr.__stack_chk_guard(%rip), %rax	 #, tmp94
	movq	-8(%rbp), %rcx	 # D.3255, tmp96
	subq	(%rax), %rcx	 # __stack_chk_guard, tmp96
	je	.L12	 #,
	call	__stack_chk_fail	 #
.L12:
	movl	%edx, %eax	 # <retval>,
	addq	$80, %rsp	 #,
	popq	%rbp	 #
	ret	
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev1, Built by MinGW-W64 project) 11.2.0"
	.def	__mingw_vfscanf;	.scl	2;	.type	32;	.endef
	.def	__stack_chk_fail;	.scl	2;	.type	32;	.endef
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
	.def	getchar;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr.__stack_chk_guard, "dr"
	.globl	.refptr.__stack_chk_guard
	.linkonce	discard
.refptr.__stack_chk_guard:
	.quad	__stack_chk_guard
