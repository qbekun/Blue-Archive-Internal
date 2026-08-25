#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CACHE_REQUESTCACHEVALIDATOR_CREATEVALIDATOR_OFFSET UNITYSDK_OFFSET(0x9A936E0)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCacheValidator_TypeDefinitionIndex = 29883;

	class RequestCacheValidator : public Il2CppObject
	{
	public:
		::System::Object* CreateValidator()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEVALIDATOR_CREATEVALIDATOR_OFFSET))(nullptr);
		}

	};
}

