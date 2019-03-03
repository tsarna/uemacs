#ifndef VERSION_H_
#define VERSION_H_

#if TMACS

#define PROGRAM_NAME "tmacs"
#define PROGRAM_NAME_LONG "TMACS"

#define	VERSION	"1.1.0"

#else

#define PROGRAM_NAME "em"
#define PROGRAM_NAME_LONG "uEmacs/Pk"

#define	VERSION	"4.0.15"

#endif

/* Print the version string. */
void version(void);

#endif  /* VERSION_H_ */
