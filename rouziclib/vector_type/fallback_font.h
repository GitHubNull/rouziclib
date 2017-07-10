const char *fallback_font[] = {
"glyph ' '\n",
"	bounds -1 1\n",

"glyph '!'\n",
"	copy '.'\n",
"	p1	0	6\n",
"	p2	0	2\n",
"	lines p1 p2\n",

"glyph '\"'\n",
"	rect	p1	-0;6 4;6	0;6 6\n",
"	lines p1 p3\n",
"	lines p2 p4\n",

"glyph '#'\n",
"	copy '\"'\n",
"	scale	1;4 2;8	0 6.6\n",
"	copy '='\n",
"	shearX	0;4	0 3\n",

"glyph '$'\n",
"	copy 'S'\n",
"	p1	0	7\n",
"	p2	0	-1\n",
"	lines p1 p2\n",

"glyph '%'\n",
"	subglyph .\n",
"	copy '.'\n",
"	scale 2\n",
"	subend\n",

"	p1	-2	0;6\n",
"	p2	2	5;6\n",
"	lines p1 p2\n",
"	copy '%' .\n",
"	move last -1	3;6\n",
"	copy '%' .\n",
"	move last 1	0;6\n",

"glyph '&'\n",
"	p1	2	0\n",
"	p2	-1;4	4;8\n",
"	p3	-1;4	6\n",
"	p4	0;7	6\n",
"	p5	0;7	4;8\n",
"	p6	-2	2;6\n",
"	p7	-2	0\n",
"	p8	0	0\n",
"	p9	2	2\n",
"	lines p1 p2 p3 p4 p5 p6 p7 p8 p9\n",

"glyph '''\n",
"	p1	0	6\n",
"	p2	0	4;6\n",
"	lines p1 p2\n",

"glyph '('\n",
"	p1	0;8	6\n",
"	p2	-0;8	4;8\n",
"	mirror	h 3	p1 p2	p3\n",
"	lines p1 p2 p4 p3\n",

"glyph ')'\n",
"	copy '('\n",
"	scale	-1	1\n",

"glyph '*'\n",
"	circle	p1 p6	6 1;5	0 4;4	0\n",
"	lines p1 p4\n",
"	lines p2 p5\n",
"	lines p3 p6\n",

"glyph '+'\n",
"	copy '|'\n",
"	scale 0;6 0;6	0 3\n",
"	copy '-'\n",

"glyph ','\n",
"	p1	0;3	0;6\n",
"	p2	-0;6	-1\n",
"	lines p1 p2\n",

"glyph '-'\n",
"	p1	-1;6	3\n",
"	p2	1;6	3\n",
"	lines p1 p2\n",

"glyph '.'\n",
"	p1	0	0\n",
"	p2	-0;6	0;6\n",
"	p3	0	1\n",
"	p4	0;6	0;6\n",
"	lines p1 p2 p3 p4 p1\n",

"glyph '/'\n",
"	p1	-1;6	0\n",
"	p2	1;6	6\n",
"	lines p1 p2\n",

"glyph '0'\n",
"	copy 'O'\n",
"	p1	2	5\n",
"	p2	-2	1\n",
"	lines p1 p2\n",

"glyph '1'\n",
"	copy '|'\n",

"glyph '2'\n",
"	rect	p1	-2 3	2 6\n",
"	rect	p5	-2 0	2 1\n",
"	lines	p3 p4 p2 p1 p5 p6\n",

"glyph '3'\n",
"	copy 'E'\n",
"	scale	-1 1\n",

"glyph '4'\n",
"	p1	1	0\n",
"	p2	1	6\n",
"	p3	-2	2\n",
"	p4	2	2\n",
"	lines p1 p2 p3 p4\n",

"glyph '5'\n",
"	copy '2'\n",
"	scale	-1 1\n",

"glyph '6'\n",
"	rect	p1	-2 3	2 6\n",
"	rect	p5	-2 0	2 1\n",
"	lines	p4 p3 p5 p6 p2 p1\n",

"glyph '7'\n",
"	p1	-2	6\n",
"	p2	2	6\n",
"	p3	-1	0\n",
"	lines p1 p2 p3\n",

"glyph '8'\n",
"	copy '_'\n",
"	move 0 3\n",
"	copy 'O'\n",

"glyph '9'\n",
"	copy '6'\n",
"	scale	-1 -1	0 3\n",

"glyph ':'\n",
"	copy '.'\n",
"	move 0 2;6\n",
"	copy '.'\n",

"glyph ';'\n",
"	copy '.'\n",
"	move 0 2;6\n",
"	copy ','\n",

"glyph '<'\n",
"	p1	1;6	0;6\n",
"	p2	-1;6	3\n",
"	p3	1;6	5;6\n",
"	lines p1 p2 p3\n",

"glyph '='\n",
"	rect	p1	-1;6 2;3	1;6 3;9\n",
"	lines p1 p2\n",
"	lines p3 p4\n",

"glyph '>'\n",
"	copy '<'\n",
"	scale	-1	1\n",

"glyph '?'\n",
"	copy '.'\n",
"	p1	-1;4	4;8\n",
"	p2	-0	6\n",
"	p3	1;4	4;8\n",
"	p4	0	3;4\n",
"	p5	0	2;3\n",
"	lines p1 p2 p3 p4 p5\n",

"glyph '@'\n",
"	rect	p1	-1;3 0;6	1;3 4\n",
"	p5	3	0;6\n",
"	rect	p6	-3 -1;6	3 6\n",
"	lines p2 p4 p3 p1 p5 p9 p8 p6 p7\n",

"glyph 'A'\n",
"	copy 'V'\n",
"	scale	-1 -1	0 3\n",
"	copy '-'\n",
"	scale last 0;9;7\n",

"glyph 'B'\n",
"	rect	p1	-2 3	1 6\n",
"	rect	p5	-2 0	2 3\n",
"	lines p2 p4 p3 p5 p6 p8 p7\n",

"glyph 'C'\n",
"	rect	p1	-2 0	2 6\n",
"	lines p4 p3 p1 p2\n",

"glyph 'D'\n",
"	p1	-2	6\n",
"	p2	0	6\n",
"	p3	2	4\n",
"	mirror	h 3	p1 p3	p4\n",
"	lines p1 p2 p3 p6 p5 p4 p1\n",

"glyph 'E'\n",
"	copy 'F'\n",
"	copy '_'\n",

"glyph 'F'\n",
"	copy '-'\n",
"	move	-0;6\n",
"	copy 'L'\n",
"	scale	1 -1	0 3\n",

"glyph 'G'\n",
"	copy 'C'\n",
"	p1	2	3\n",
"	p2	0	3\n",
"	lines p-2 p1 p2\n",

"glyph 'H'\n",
"	copy '_'\n",
"	move 0 3\n",
"	rect	p1	-2 0	2 6\n",
"	lines p1 p3\n",
"	lines p2 p4\n",

"glyph 'I'\n",
"	copy 'H'\n",
"	rotate	3	0 3\n",
"	scale	0;4 1;6	0 3\n",

"glyph 'J'\n",
"	copy 'U'\n",
"	p-1	-2	2\n",

"glyph 'K'\n",
"	copy '|'\n",
"	move -1;6\n",
"	copy '<'\n",
"	scale last	1 1.2	0 3\n",

"glyph 'L'\n",
"	rect	p1	-2 0	2 6\n",
"	lines p3 p1 p2\n",
"	bounds -2 1;6\n",

"glyph 'M'\n",
"	rect	p1	-2 0	2 6\n",
"	p5	0	2\n",
"	lines p1 p3 p5 p4 p2\n",

"glyph 'N'\n",
"	rect	p1	-2 0	2 6\n",
"	lines p1 p3 p2 p4\n",

"glyph 'O'\n",
"	rect	p1	-2 0	2 6\n",
"	lines p1 p2 p4 p3 p1\n",

"glyph 'P'\n",
"	copy '|'\n",
"	move -2\n",
"	rect	p1	-2 3	2 6\n",
"	lines p3 p4 p2 p1\n",

"glyph 'Q'\n",
"	copy 'O'\n",
"	p1	0	2\n",
"	p2	2;6	-0;6\n",
"	lines p1 p2\n",
"	bounds -2 2\n",

"glyph 'R'\n",
"	copy 'P'\n",
"	p1	0	3\n",
"	p2	2	0\n",
"	lines p1 p2\n",

"glyph 'S'\n",
"	copy '5'\n",

"glyph 'T'\n",
"	copy '_'\n",
"	copy '|'\n",
"	scale	1 -1	0 3\n",
"	bounds -1;6 1;6\n",

"glyph 'U'\n",
"	rect	p1	-2 0	2 6\n",
"	lines p3 p1 p2 p4\n",

"glyph 'V'\n",
"	p1	-2	6\n",
"	p2	0	0\n",
"	p3	2	6\n",
"	lines p1 p2 p3\n",
"	bounds -1;6 1;6\n",

"glyph 'W'\n",
"	p1	-2	6\n",
"	p2	-1	0\n",
"	p3	0	3\n",
"	mirror	v0	p1 p2	p4\n",
"	lines p1 p2 p3 p5 p4\n",

"glyph 'X'\n",
"	rect	p1	-2 0	2 6\n",
"	lines p1 p4\n",
"	lines p2 p3\n",

"glyph 'Y'\n",
"	copy 'V'\n",
"	move	0 6\n",
"	copy '|'\n",
"	scale	1 0;6\n",

"glyph 'Z'\n",
"	rect	p1	-2 0	2 6\n",
"	lines p3 p4 p1 p2\n",

"glyph '['\n",
"	copy ']'\n",
"	scale	-1	1\n",

"glyph '\\'\n",
"	copy '/'\n",
"	scale	-1	1\n",

"glyph ']'\n",
"	rect	p1	-0;8 0	0;8 6\n",
"	lines p1 p2 p4 p3\n",

"glyph '_'\n",
"	p1	-2	0\n",
"	p2	2	0\n",
"	lines p1 p2\n",

"glyph '`'\n",
"	p1	-0;6	6\n",
"	p2	0;6	4;6\n",
"	lines p1 p2\n",

"glyph '|'\n",
"	p1	0	0\n",
"	p2	0	6\n",
"	lines p1 p2\n",

"glyph 2610\n",
"	rect	p1	-3 0	3 6\n",
"	lines p1 p2 p4 p3 p1\n",

"glyph 2611\n",
"	copy 2610\n",
"	p1	-1;3	3\n",
"	p2	-0;3	2\n",
"	p3	1;3	4;6\n",
"	lines p1 p2 p3\n",
"	scale loc	1;6 1;6	0 3\n",

"glyph F2612\n",
"	copy 2610\n",
"	copy '-'\n",

"glyph F003A\n",
"	copy '1'\n",
"	move -3;6 0\n",
"	copy '0'\n",
"	move 1;3 0\n",

"glyph F003B\n",
"	copy '1'\n",
"	move -3 0\n",
"	copy '1'\n",
"	move 1;6 0\n",

"glyph F003C\n",
"	copy '1'\n",
"	move -3;6 0\n",
"	copy '2'\n",
"	move 1;3 0\n",

NULL };
