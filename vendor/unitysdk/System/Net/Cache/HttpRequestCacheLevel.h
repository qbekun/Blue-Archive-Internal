#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Cache
{
	inline static constexpr unsigned int HttpRequestCacheLevel_TypeDefinitionIndex = 29888;

	class HttpRequestCacheLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Cache::HttpRequestCacheLevel* Default; // 0x0
		::System::Net::Cache::HttpRequestCacheLevel* BypassCache; // 0x0
		::System::Net::Cache::HttpRequestCacheLevel* CacheOnly; // 0x0
		::System::Net::Cache::HttpRequestCacheLevel* CacheIfAvailable; // 0x0
		::System::Net::Cache::HttpRequestCacheLevel* Revalidate; // 0x0
		::System::Net::Cache::HttpRequestCacheLevel* Reload; // 0x0
		::System::Net::Cache::HttpRequestCacheLevel* NoCacheNoStore; // 0x0
		::System::Net::Cache::HttpRequestCacheLevel* CacheOrNextCacheOnly; // 0x0
		::System::Net::Cache::HttpRequestCacheLevel* Refresh; // 0x0

	};
}

