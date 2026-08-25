#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CACHE_REQUESTCACHEBINDING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A93680)
#define SYSTEM_NET_CACHE_REQUESTCACHEBINDING_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x9A93730)
#define SYSTEM_NET_CACHE_REQUESTCACHEBINDING_GET_VALIDATOR_OFFSET UNITYSDK_OFFSET(0x9A93740)
#define SYSTEM_NET_CACHE_REQUESTCACHEBINDING_GET_POLICY_OFFSET UNITYSDK_OFFSET(0x9A93750)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCacheBinding_TypeDefinitionIndex = 29885;

	class RequestCacheBinding : public Il2CppObject
	{
	public:
		::System::Net::Cache::RequestCache* m_RequestCache; // 0x10
		::System::Net::Cache::RequestCacheValidator* m_CacheValidator; // 0x18
		::System::Net::Cache::RequestCachePolicy* m_Policy; // 0x20

		::System::Void .ctor(::System::Net::Cache::RequestCache* arg, ::System::Net::Cache::RequestCacheValidator* arg, ::System::Net::Cache::RequestCachePolicy* arg)
		{
			((::System::Void(*)(::System::Net::Cache::RequestCache*, ::System::Net::Cache::RequestCacheValidator*, ::System::Net::Cache::RequestCachePolicy*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEBINDING_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Net::Cache::RequestCache* get_Cache()
		{
			return (return (::System::Net::Cache::RequestCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEBINDING_GET_CACHE_OFFSET))(nullptr);
		}

		::System::Net::Cache::RequestCacheValidator* get_Validator()
		{
			return (return (::System::Net::Cache::RequestCacheValidator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEBINDING_GET_VALIDATOR_OFFSET))(nullptr);
		}

		::System::Net::Cache::RequestCachePolicy* get_Policy()
		{
			return (return (::System::Net::Cache::RequestCachePolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEBINDING_GET_POLICY_OFFSET))(nullptr);
		}

	};
}

