#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CACHE_REQUESTCACHE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A93000)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCache_TypeDefinitionIndex = 29881;

	class RequestCache : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* LineSplits; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

