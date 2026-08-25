#pragma once
#include "../unitysdk.h"

#define SYSTEM_CURRENTSYSTEMTIMEZONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x932E300)
#define SYSTEM_CURRENTSYSTEMTIMEZONE_GETDAYLIGHTCHANGES_OFFSET UNITYSDK_OFFSET(0x932E400)
#define SYSTEM_CURRENTSYSTEMTIMEZONE_CREATEDAYLIGHTCHANGES_OFFSET UNITYSDK_OFFSET(0x932E720)
#define SYSTEM_CURRENTSYSTEMTIMEZONE_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x932EBC0)
#define SYSTEM_CURRENTSYSTEMTIMEZONE_GETCACHEDDAYLIGHTCHANGES_OFFSET UNITYSDK_OFFSET(0x932E4E0)

namespace System
{
	inline static constexpr unsigned int CurrentSystemTimeZone_TypeDefinitionIndex = 23724;

	class CurrentSystemTimeZone : public Il2CppObject
	{
	public:
		::System::Int64 m_ticksOffset; // 0x10
		::System::String* m_standardName; // 0x18
		::System::String* m_daylightName; // 0x20
		::System::Collections::Hashtable* m_CachedDaylightChanges; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CURRENTSYSTEMTIMEZONE_.CTOR_OFFSET))(nullptr);
		}

		::System::Globalization::DaylightTime* GetDaylightChanges(::System::Int32 arg)
		{
			return (return (::System::Globalization::DaylightTime*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CURRENTSYSTEMTIMEZONE_GETDAYLIGHTCHANGES_OFFSET))(arg, nullptr);
		}

		::System::Globalization::DaylightTime* CreateDaylightChanges(::System::Int32 arg)
		{
			return (return (::System::Globalization::DaylightTime*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CURRENTSYSTEMTIMEZONE_CREATEDAYLIGHTCHANGES_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* GetUtcOffset(::System::DateTime* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CURRENTSYSTEMTIMEZONE_GETUTCOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Globalization::DaylightTime* GetCachedDaylightChanges(::System::Int32 arg)
		{
			return (return (::System::Globalization::DaylightTime*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CURRENTSYSTEMTIMEZONE_GETCACHEDDAYLIGHTCHANGES_OFFSET))(arg, nullptr);
		}

	};
}

