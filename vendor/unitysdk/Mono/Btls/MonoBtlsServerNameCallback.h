#pragma once
#include "../../unitysdk.h"

#define MONO_BTLS_MONOBTLSSERVERNAMECALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB7310)
#define MONO_BTLS_MONOBTLSSERVERNAMECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9AB73D0)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsServerNameCallback_TypeDefinitionIndex = 29111;

	class MonoBtlsServerNameCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSERVERNAMECALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSERVERNAMECALLBACK_INVOKE_OFFSET))(nullptr);
		}

	};
}

