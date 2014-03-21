#ifndef APIMANAGER_H
#define APIMANAGER_H

#include <string>
#include <map>

typedef std::map<std::string, std::string> ApiParamMap;

class ApiManager
{
public:
	ApiManager();

	bool pairDevice();
	bool login();
	bool isLoggedIn() { return !m_sessionId.empty(); }
	std::string getPlaylist();
	std::string getEpg(); //TODO timerange
	std::string getPvr();
	std::string getRecordingUrl(const std::string &recId);

private:
	std::string urlEncode(const std::string &str);
	std::string buildQueryString(ApiParamMap paramMap);
	std::string readPairFile();
	void createPairFile(const std::string &content);
	std::string apiCall(const std::string &function, ApiParamMap paramsMap);

	static const std::string API_URL;
	static const std::string LOG_PREFIX;
	static const std::string PAIR_FILE;
	std::string m_deviceId;
	std::string m_password;
	std::string m_sessionId;
};

#endif // APIMANAGER_H
