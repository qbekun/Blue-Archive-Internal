#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_OFFSET UNITYSDK_OFFSET(0x9A64900)
#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_OFFSET UNITYSDK_OFFSET(0x9A64CA0)

namespace System::Net
{
	inline static constexpr unsigned int AutoWebProxyScriptEngine_TypeDefinitionIndex = 29747;

	class AutoWebProxyScriptEngine : public Il2CppObject
	{
	public:
		::System::Boolean GetProxies(::System::Uri* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetProxies(::System::Uri* arg, Il2CppObject&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, Il2CppObject&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

