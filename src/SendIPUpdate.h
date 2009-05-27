#ifndef SEND_IP_UPDATE_H__
#define SEND_IP_UPDATE_H__

enum VersionUpdateCheckType {
	UpdateCheckInstall,
	UpdateCheckUninstall,
	UpdateCheckVersionCheck
};

enum IpUpdateResult {
	IpUpdateOk,
	IpUpdateNotYours,
	IpUpdateBadAuth,
	IpUpdateNotAvailable
};

char* SendIpUpdate();
IpUpdateResult IpUpdateResultFromString(const char *s);
char *GetUpdateUrl(const TCHAR *version, VersionUpdateCheckType type);

#endif
