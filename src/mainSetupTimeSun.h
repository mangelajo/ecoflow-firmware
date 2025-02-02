#ifndef MAINSETUPTIMESUN
#define MAINSETUPTIMESUN
#include "mainDefines.h"
#include "WiFi.h"

void fncMainSetupTimeSun()
{
    if (WiFi.status() != WL_CONNECTED)
    {
        //setup(String ntpServer, int ntpTimeZone, int ntpTimeZoneDayLight, long gpsLatitude, long gpsLongitude)
        
        g_TimeRtcNtp.setup("pool.ntp.org",g_NetworkConfig.get_NtpTimeZone(),g_NetworkConfig.get_NtpTimeZoneDayLight(),g_NetworkConfig.get_GpsLatitude(), g_NetworkConfig.get_GpsLongitude());
        g_TimeRtcNtp.fncReadNowNTP();
         g_TimeRtcNtp.debugSerial();
        }
}
#endif