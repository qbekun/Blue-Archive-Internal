#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CACHE_REQUESTCACHINGSECTIONINTERNAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A93500)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCachingSectionInternal_TypeDefinitionIndex = 29884;

	class RequestCachingSectionInternal : public Il2CppObject
	{
	public:
		::System::Boolean DisableAllCaching; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHINGSECTIONINTERNAL_.CTOR_OFFSET))(nullptr);
		}

	};
}

