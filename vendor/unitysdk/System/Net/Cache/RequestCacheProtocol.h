#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CACHE_REQUESTCACHEPROTOCOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A937F0)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCacheProtocol_TypeDefinitionIndex = 29889;

	class RequestCacheProtocol : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEPROTOCOL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

