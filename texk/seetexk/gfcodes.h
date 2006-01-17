/*
 * Copyright (c) 1987, 1989 University of Maryland
 * Department of Computer Science.  All rights reserved.
 * Permission to copy for any purpose is hereby granted
 * so long as this copyright notice remains intact.
 */

/*
 * GF (generic font) opcodes.
 */

#define	GF_PAINT_0	0	/* paint with `d' = 0 */
				/* ... through PAINT_63, d = 63 */
#define	GF_PAINT1	64	/* paint, with a one-byte parameter */
#define	GF_PAINT2	65	/* paint, with a two-byte parameter */
#define	GF_PAINT3	66	/* paint, with a three-byte parameter */
#define	GF_BOC		67	/* beginning of character */
#define	GF_BOC1		68	/* compressed form of BOC */
#define	GF_EOC		69	/* end of character */
#define	GF_SKIP0	70	/* finish this row, begin next with white */
#define	GF_SKIP1	71	/* finish row, one byte parameter */
#define	GF_SKIP2	72
#define	GF_SKIP3	73
#define	GF_NEW_ROW_0	74	/* begin a new row, ready to blacken */
#define	GF_NEW_ROW_1	75	/* begin a new row, but one col. from left */
				/* through GF_NEW_ROW_164 */
#define	GF_XXX1		239	/* special (interpreter dependent) command */
#define	GF_XXX2		240	/* like XXX1, but two byte length parameter */
#define	GF_XXX3		241
#define	GF_XXX4		242
#define	GF_YYY		243	/* takes four byte parameter, otherwise nop */
				/* (generated by METAFONT for numspecial) */
#define	GF_NOP		244	/* no op */
#define	GF_CHAR_LOC	245	/* character locator */
#define	GF_CHAR_LOC0	246	/* abbreviated form of CHAR_LOC */
#define	GF_PRE		247	/* introduces preamble */
#define	GF_POST		248	/* introduces postamble */
#define	GF_POSTPOST	249	/* marks end of postamble */

				/* codes 250 through 255 are undefined */

#define	GF_ID		131	/* identifies this revision of GF */

#define GF_FILLER	223	/* filler bytes at end of GF file */
