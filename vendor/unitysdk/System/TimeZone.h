#pragma once
#include "../unitysdk.h"

#define SYSTEM_TIMEZONE_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x937A730)
#define SYSTEM_TIMEZONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x937A7E0)
#define SYSTEM_TIMEZONE_GET_CURRENTTIMEZONE_OFFSET UNITYSDK_OFFSET(0x937A7F0)
#define SYSTEM_TIMEZONE_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TIMEZONE_GETDAYLIGHTCHANGES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TIMEZONE_CALCULATEUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x937A9B0)

namespace System
{
	inline static constexpr unsigned int TimeZone_TypeDefinitionIndex = 23844;

	class TimeZone : public Il2CppObject
	{
	public:
		::System::TimeZone* currentTimeZone; // 0x0
		::System::Object* s_InternalSyncObject; // 0x8

		::System::Object* get_InternalSyncObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONE_GET_INTERNALSYNCOBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONE_.CTOR_OFFSET))(nullptr);
		}

		::System::TimeZone* get_CurrentTimeZone()
		{
			return (return (::System::TimeZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONE_GET_CURRENTTIMEZONE_OFFSET))(nullptr);
		}

		::System::TimeSpan* GetUtcOffset(::System::DateTime* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONE_GETUTCOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Globalization::DaylightTime* GetDaylightChanges(::System::Int32 arg)
		{
			return (return (::System::Globalization::DaylightTime*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONE_GETDAYLIGHTCHANGES_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* CalculateUtcOffset(::System::DateTime* arg, ::System::Globalization::DaylightTime* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::DateTime*, ::System::Globalization::DaylightTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONE_CALCULATEUTCOFFSET_OFFSET))(arg, arg, nullptr);
		}

	};
}

