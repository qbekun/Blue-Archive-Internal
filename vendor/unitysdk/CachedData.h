#pragma once
#include "unitysdk.h"

#define CACHEDDATA_GETCURRENTONEYEARLOCAL_OFFSET UNITYSDK_OFFSET(0x9272CA0)
#define CACHEDDATA_GETONEYEARLOCALFROMUTC_OFFSET UNITYSDK_OFFSET(0x9268C80)
#define CACHEDDATA_CREATELOCAL_OFFSET UNITYSDK_OFFSET(0x9272E80)
#define CACHEDDATA_GET_LOCAL_OFFSET UNITYSDK_OFFSET(0x926DEA0)
#define CACHEDDATA_GETCORRESPONDINGKIND_OFFSET UNITYSDK_OFFSET(0x926DF40)
#define CACHEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9272C60)

	inline static constexpr unsigned int CachedData_TypeDefinitionIndex = 23667;

	class CachedData : public Il2CppObject
	{
	public:
		OffsetAndRule* _oneYearLocalFromUtc; // 0x10
		::System::TimeZoneInfo* _localTimeZone; // 0x18
		Il2CppObject* _systemTimeZones; // 0x20
		Il2CppObject* _readOnlySystemTimeZones; // 0x28
		::System::Boolean _allSystemTimeZonesRead; // 0x30

		::System::TimeZoneInfo* GetCurrentOneYearLocal()
		{
			return (return (::System::TimeZoneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHEDDATA_GETCURRENTONEYEARLOCAL_OFFSET))(nullptr);
		}

		OffsetAndRule* GetOneYearLocalFromUtc(::System::Int32 arg)
		{
			return (return (OffsetAndRule*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CACHEDDATA_GETONEYEARLOCALFROMUTC_OFFSET))(arg, nullptr);
		}

		::System::TimeZoneInfo* CreateLocal()
		{
			return (return (::System::TimeZoneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHEDDATA_CREATELOCAL_OFFSET))(nullptr);
		}

		::System::TimeZoneInfo* get_Local()
		{
			return (return (::System::TimeZoneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHEDDATA_GET_LOCAL_OFFSET))(nullptr);
		}

		::System::DateTimeKind* GetCorrespondingKind(::System::TimeZoneInfo* arg)
		{
			return (return (::System::DateTimeKind*(*)(::System::TimeZoneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CACHEDDATA_GETCORRESPONDINGKIND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHEDDATA_.CTOR_OFFSET))(nullptr);
		}

	};

