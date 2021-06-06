# X Application Project

Howdy folks! This is the source code I used to compile XAP. I had to modify it a bit since some things don't work nowadays. I don't actually remember exactly what I did, but you can probably just run a diff and check what's different from the latest XAP release.

If you wanna compile it, DO NOT RUN the standard configure, make, and make-install. I edited the Makefile directly, so running configure will ruin that. Instead, just do make and make-install. If you just want the X Window Finder, you can run make xwf. I've only tested this on Slackware64-Current, as that's what I use. It probably works fine on other Linux distributions as long as they're x64 and have GTK-1.2 and GLIB-1.2 installed (you can use gtk-config to check).
