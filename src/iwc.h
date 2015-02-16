#ifndef _IWC_H
#define _IWC_H

void iwc_count_bytes(int buflen, int *bytes);
void iwc_count_lines(int buflen, int *lines);
void iwc_count_words(int buflen, int *words);

int iwc_counts(int fileno, int *bytes, int *lines, int *words);

void iwc_print_counter(int *bytes, int *lines, int *words, char eol);
void iwc_print_total_counter(int *bytes, int *lines, int *words);

#endif
