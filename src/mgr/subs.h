void set_covered(WINDOW *check);
void un_covered(void);
void expose(WINDOW *win);
int bury(WINDOW *win);
void hide(WINDOW *win);
void repair(WINDOW *clip);
void save_win(WINDOW *win);
void clip_win(WINDOW *win, WINDOW *clip);
void restore_win(WINDOW *win);
int move_mouse(BITMAP *screen, int mouse, int *x, int *y, int how);
int parse(char *line, char **fields);
char *trans(char *s);
void set_console(WINDOW *win, int on);
void suspend(void);
void alignwin(BITMAP *screen, int *x, int *dx, int slop);
int cursor_ok(BITMAP *map);
void cursor_on(void);
void cursor_off(void);
int systemcmd(char *command);
