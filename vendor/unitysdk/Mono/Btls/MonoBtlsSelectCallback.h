#pragma once
#include "../../unitysdk.h"

#define MONO_BTLS_MONOBTLSSELECTCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB7230)
#define MONO_BTLS_MONOBTLSSELECTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9AB7300)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsSelectCallback_TypeDefinitionIndex = 29110;

	class MonoBtlsSelectCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSELECTCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSELECTCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

