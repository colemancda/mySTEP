main()
{
	extern int yyparse();
	extern void scaninit(void);
	extern int yydebug;
	yydebug=1;
	scaninit();
	return(yyparse());
}

