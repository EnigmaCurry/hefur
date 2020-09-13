Please check git history for the list of changes

Version 1.0

 * Support to BitTorrent v2

 * Remove support for hefurctl add and remove torrent commands

 * Modernize a bit the source code

 * Upgrade bootstrap to version 4.5.2

Version 0.4

 * replace '&' by '&amp;' in stat.html

 * do not set SCHED_FIFO, it is up to the user to do it via chrt(1), or in
   systemd with ``CPUSchedulingPolicy=fifo''. Yet batch is now recommended.

 * add a control interface as a unix socket.

 * add hefurctl, a control program.

 * log an error when we fail to load a template file from the www-dir.

 * check that the torrents added by the directory scan are still on the disk,
   if not, then remove them from the list of torrents.

 * fix the length of multi-files torrents.

 * update the manual.

Version 0.3

 * disable compression for /announce and /scrape, as some clients enables
 HTTP compression but don't support it

 * add built-in log rotation and compression support

 * fix table sorting stuff

 * add table sorting for /peers

Version 0.2

 * sortable table for /stat page

 * add INSTALL file

 * add UDP support

 * add compression support for http pages

 * fix http chunked encoding overhead

Version 0.1

 * http announce and scrape support

 * /stat handler

 * /peers handler

 * white list based on recursive scan of the disk
