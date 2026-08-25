#pragma once
#include "../unitysdk.h"

namespace SQLite { class EnumCacheInfo; }

#define SQLITE_ENUMCACHE_GETINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SQLITE_ENUMCACHE_GETINFO_OFFSET UNITYSDK_OFFSET(0xA238D0)
#define SQLITE_ENUMCACHE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA23B20)

namespace SQLite
{
	inline static constexpr unsigned int EnumCache_TypeDefinitionIndex = 36616;

	class EnumCache : public Il2CppObject
	{
	public:
		Il2CppObject* Cache; // 0x0

		::SQLite::EnumCacheInfo* GetInfo()
		{
			return (return (::SQLite::EnumCacheInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHE_GETINFO_OFFSET))(nullptr);
		}

		::SQLite::EnumCacheInfo* GetInfo(::System::Type* arg)
		{
			return (return (::SQLite::EnumCacheInfo*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHE_GETINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

