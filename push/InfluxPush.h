#pragma once

#include <boost/signals2.hpp>

#include "Push.h"

class CInfluxPush : public CPush
{
public:
	CInfluxPush();
	void Start();
	void Stop();
	void UpdateActive();

private:

	void OnDeviceReceived(const int m_HwdID, const uint64_t DeviceRowIdx, const std::string &DeviceName, const unsigned char *pRXCommand);
	void DoInfluxPush();
};
