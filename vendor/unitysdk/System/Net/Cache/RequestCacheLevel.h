#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCacheLevel_TypeDefinitionIndex = 29886;

	class RequestCacheLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Cache::RequestCacheLevel* Default; // 0x0
		::System::Net::Cache::RequestCacheLevel* BypassCache; // 0x0
		::System::Net::Cache::RequestCacheLevel* CacheOnly; // 0x0
		::System::Net::Cache::RequestCacheLevel* CacheIfAvailable; // 0x0
		::System::Net::Cache::RequestCacheLevel* Revalidate; // 0x0
		::System::Net::Cache::RequestCacheLevel* Reload; // 0x0
		::System::Net::Cache::RequestCacheLevel* NoCacheNoStore; // 0x0

	};
}

