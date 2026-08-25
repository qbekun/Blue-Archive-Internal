#pragma once
#include "unitysdk.h"

#define CLIENTTIMEWATCH_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x2046310)
#define CLIENTTIMEWATCH_GET_LASTSYNCEDSERVERTIME_OFFSET UNITYSDK_OFFSET(0x2046320)
#define CLIENTTIMEWATCH_GET_DELTATICKS_OFFSET UNITYSDK_OFFSET(0x2046350)
#define CLIENTTIMEWATCH_SET_DELTATICKS_OFFSET UNITYSDK_OFFSET(0x2046360)
#define CLIENTTIMEWATCH_GET_CLIENTNOWTIME_OFFSET UNITYSDK_OFFSET(0x2046370)
#define CLIENTTIMEWATCH_GET_CURRENTTICKS_OFFSET UNITYSDK_OFFSET(0x20463D0)
#define CLIENTTIMEWATCH_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x2043F10)
#define CLIENTTIMEWATCH_GET_CURRENTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x2046440)
#define CLIENTTIMEWATCH_UPDATE_OFFSET UNITYSDK_OFFSET(0x2046640)
#define CLIENTTIMEWATCH_REQUESTNETWORKTIMESYNC_OFFSET UNITYSDK_OFFSET(0x2046680)
#define CLIENTTIMEWATCH_SYNCSERVERDATETIMEBYTICK_OFFSET UNITYSDK_OFFSET(0x2046710)
#define CLIENTTIMEWATCH_SYNCSERVERTIMETICKS_OFFSET UNITYSDK_OFFSET(0x20467A0)
#define CLIENTTIMEWATCH_SYNCSERVERTIMETICKSFORDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2046800)
#define CLIENTTIMEWATCH_UNIXTIMESTAMPTODATETIME_OFFSET UNITYSDK_OFFSET(0x2046810)
#define CLIENTTIMEWATCH_DATETIMETOUNIXTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x2046580)
#define CLIENTTIMEWATCH_TOLOCALTIMESPAN_OFFSET UNITYSDK_OFFSET(0x20468B0)
#define CLIENTTIMEWATCH_CONVERTLOCALTIME_OFFSET UNITYSDK_OFFSET(0x2046990)
#define CLIENTTIMEWATCH_CONVERTLOCALTIME_OFFSET UNITYSDK_OFFSET(0x2046A70)
#define CLIENTTIMEWATCH_GETTIMEOFFSETSTRING_OFFSET UNITYSDK_OFFSET(0x2046AD0)
#define CLIENTTIMEWATCH_SETSERVERTIMEZONEOFFSET_OFFSET UNITYSDK_OFFSET(0x2046760)
#define CLIENTTIMEWATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x2046BF0)
#define CLIENTTIMEWATCH_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2046C50)

	inline static constexpr unsigned int ClientTimeWatch_TypeDefinitionIndex = 3265;

	class ClientTimeWatch : public ::ToyWebViewShared::Messages::NotifyFocusedNodeChanged
	{
	public:
		::System::DateTime* MaxValue; // 0x0
		::System::DateTime* UnixEpoch; // 0x8
		::System::Int64 lastSyncedServerTimeInTick; // 0x20
		::System::Int64 roundTripOffsetTicks; // 0x28
		::System::Int64 _DeltaTicks_k__BackingField; // 0x30
		::System::Int64 elapsedSinceLastSync; // 0x38
		::System::TimeSpan* ServerTimezoneOffset; // 0x40

		::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_GET_INITIALIZED_OFFSET))(nullptr);
		}

		::System::DateTime* get_LastSyncedServerTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_GET_LASTSYNCEDSERVERTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_DeltaTicks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_GET_DELTATICKS_OFFSET))(nullptr);
		}

		::System::Void set_DeltaTicks(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_SET_DELTATICKS_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_ClientNowTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_GET_CLIENTNOWTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentTicks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_GET_CURRENTTICKS_OFFSET))(nullptr);
		}

		::System::DateTime* get_CurrentTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_GET_CURRENTTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentTimestamp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_GET_CURRENTTIMESTAMP_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_UPDATE_OFFSET))(nullptr);
		}

		::System::Void RequestNetworkTimeSync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_REQUESTNETWORKTIMESYNC_OFFSET))(nullptr);
		}

		::System::Void SyncServerDateTimeByTick(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_SYNCSERVERDATETIMEBYTICK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncServerTimeTicks(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_SYNCSERVERTIMETICKS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncServerTimeTicksForDeserialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_SYNCSERVERTIMETICKSFORDESERIALIZE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* UnixTimeStampToDateTime(::System::Int32 arg)
		{
			return ((::System::DateTime*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_UNIXTIMESTAMPTODATETIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 DateTimeToUnixTimestamp(::System::DateTime* arg)
		{
			return ((::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_DATETIMETOUNIXTIMESTAMP_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* ToLocalTimeSpan()
		{
			return ((::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_TOLOCALTIMESPAN_OFFSET))(nullptr);
		}

		::System::TimeSpan* ConvertLocalTime(::System::TimeSpan* arg)
		{
			return ((::System::TimeSpan*(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_CONVERTLOCALTIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* ConvertLocalTime(::System::DateTime* arg)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_CONVERTLOCALTIME_OFFSET))(arg, nullptr);
		}

		::System::String* GetTimeOffsetString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_GETTIMEOFFSETSTRING_OFFSET))(nullptr);
		}

		::System::Void SetServerTimezoneOffset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_SETSERVERTIMEZONEOFFSET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIENTTIMEWATCH_.CCTOR_OFFSET))(nullptr);
		}

	};

