#include "config.h"
#include "fsmonitor-ipc.h"

const char *fsmonitor_ipc__get_path(struct repository *r) {
	static char *ret;
	if (!ret)
		ret = git_pathdup("fsmonitor--daemon.ipc");
	return ret;
}
