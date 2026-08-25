#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CACHE_REQUESTCACHEMANAGER_GETBINDING_OFFSET UNITYSDK_OFFSET(0x9A93090)
#define SYSTEM_NET_CACHE_REQUESTCACHEMANAGER_LOADCONFIGSETTINGS_OFFSET UNITYSDK_OFFSET(0x9A93340)
#define SYSTEM_NET_CACHE_REQUESTCACHEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A93510)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCacheManager_TypeDefinitionIndex = 29882;

	class RequestCacheManager : public Il2CppObject
	{
	public:
		::System::Net::Cache::RequestCachingSectionInternal* s_CacheConfigSettings; // 0x0
		::System::Net::Cache::RequestCacheBinding* s_BypassCacheBinding; // 0x8
		::System::Net::Cache::RequestCacheBinding* s_DefaultGlobalBinding; // 0x10
		::System::Net::Cache::RequestCacheBinding* s_DefaultHttpBinding; // 0x18
		::System::Net::Cache::RequestCacheBinding* s_DefaultFtpBinding; // 0x20

		::System::Net::Cache::RequestCacheBinding* GetBinding(::System::String* str)
		{
			return (return (::System::Net::Cache::RequestCacheBinding*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEMANAGER_GETBINDING_OFFSET))(str, nullptr);
		}

		::System::Void LoadConfigSettings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEMANAGER_LOADCONFIGSETTINGS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

