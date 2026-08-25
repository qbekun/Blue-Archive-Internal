#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CACHE_REQUESTCACHEPOLICY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A93600)
#define SYSTEM_NET_CACHE_REQUESTCACHEPOLICY_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9A93760)
#define SYSTEM_NET_CACHE_REQUESTCACHEPOLICY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9A93770)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCachePolicy_TypeDefinitionIndex = 29887;

	class RequestCachePolicy : public Il2CppObject
	{
	public:
		::System::Net::Cache::RequestCacheLevel* m_Level; // 0x10

		::System::Void .ctor(::System::Net::Cache::RequestCacheLevel* arg)
		{
			((::System::Void(*)(::System::Net::Cache::RequestCacheLevel*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEPOLICY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Net::Cache::RequestCacheLevel* get_Level()
		{
			return (return (::System::Net::Cache::RequestCacheLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEPOLICY_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEPOLICY_TOSTRING_OFFSET))(nullptr);
		}

	};
}

