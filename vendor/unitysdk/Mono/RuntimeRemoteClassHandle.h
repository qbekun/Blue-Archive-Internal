#pragma once
#include "../unitysdk.h"

namespace Mono { class RuntimeClassHandle; }

#define MONO_RUNTIMEREMOTECLASSHANDLE_GET_PROXYCLASS_OFFSET UNITYSDK_OFFSET(0x9120F00)

namespace Mono
{
	inline static constexpr unsigned int RuntimeRemoteClassHandle_TypeDefinitionIndex = 23571;

	class RuntimeRemoteClassHandle : public Il2CppObject
	{
	public:
		::System::Object** value; // 0x10

		::Mono::RuntimeClassHandle* get_ProxyClass()
		{
			return (return (::Mono::RuntimeClassHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEREMOTECLASSHANDLE_GET_PROXYCLASS_OFFSET))(nullptr);
		}

	};
}

