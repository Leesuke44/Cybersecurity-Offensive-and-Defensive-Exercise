02_entropyinreseed, @object
	.size	kat2302_entropyinreseed, 32
kat2302_entropyinreseed:
	.string	"\305\373W\231\nTN6^\2241\213\340%\270"
	.ascii	"\035\244e?0\231a\274\277X\346\0323}\264\022"
	.type	kat2302_persstr, @object
	.size	kat2302_persstr, 1
kat2302_persstr:
	.zero	1
	.type	kat2302_nonce, @object
	.size	kat2302_nonce, 1
kat2302_nonce:
	.zero	1
	.align 32
	.type	kat2302_entropyin, @object
	.size	kat2302_entropyin, 32
kat2302_entropyin:
	.ascii	"\375\306\225\212O=\020\037\251\236\317j\306\002\277\246v\241"
	.ascii	"\341\375V\325\254\364\3453\231m\261tc\277"
	.section	.data.rel.ro.local
	.align 32
	.type	kat2301, @object
	.size	kat2301, 64
kat2301:
	.long	1
	.long	1
	.long	904
	.zero	4
	.quad	32
	.quad	0
	.quad	0
	.quad	32
	.quad	64
	.quad	kat2301_t
	.align 32
	.type	kat2301_t, @object
	.size	kat2301_t, 72
kat2301_t:
	.quad	5
	.quad	kat2301_entropyin
	.quad	kat2301_nonce
	.quad	kat2301_persstr
	.quad	kat2301_entropyinreseed
	.quad	kat2301_addinreseed
	.quad	kat2301_addin0
	.quad	kat2301_addin1
	.quad	kat2301_retbits
	.section	.rodata
	.align 32
	.type	kat2301_retbits, @object
	.size	kat2301_retbits, 64
kat2301_re