#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509StoreCtx; }

#define MONO_BTLS_MONOBTLSVERIFYCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB7110)
#define MONO_BTLS_MONOBTLSVERIFYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9AB7220)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsVerifyCallback_TypeDefinitionIndex = 29109;

	class MonoBtlsVerifyCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSVERIFYCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::Mono::Btls::MonoBtlsX509StoreCtx* arg)
		{
			return (return (::System::Int32(*)(::Mono::Btls::MonoBtlsX509StoreCtx*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSVERIFYCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

