#define CHANNELS 2

typedef int (*t_callback)(int, float *);

extern jack_client_t *jack_start(t_callback callback);

