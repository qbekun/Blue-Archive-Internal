#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsSslError; }

#define MONO_BTLS_MONOBTLSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96E0580)
#define MONO_BTLS_MONOBTLSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96DE7E0)
#define MONO_BTLS_MONOBTLSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96DEB20)
#define MONO_BTLS_MONOBTLSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96E05D0)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsException_TypeDefinitionIndex = 29101;

	class MonoBtlsException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Mono::Btls::MonoBtlsSslError* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsSslError*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

