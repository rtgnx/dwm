#ifndef PA_CONFIG_H
#define PA_CONFIG_H

static const char *upvol[]   = {
    "/usr/bin/pactl", "set-sink-volume", "0", "+5%",     NULL
};

static const char *downvol[] = {
  "/usr/bin/pactl", "set-sink-volume", "0", "-5%",     NULL
};

static const char *mutevol[] = {
  "/usr/bin/pactl", "set-sink-mute",   "0", "toggle",  NULL
};

#endif
