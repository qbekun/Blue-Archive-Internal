#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::Interface { class Alert; }
namespace Mono::Security::Interface { class AlertDescription; }

#define MONO_SECURITY_INTERFACE_TLSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x910CBF0)
#define MONO_SECURITY_INTERFACE_TLSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x910CCC0)
#define MONO_SECURITY_INTERFACE_TLSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x910CD30)
#define MONO_SECURITY_INTERFACE_TLSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x910CDC0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int TlsException_TypeDefinitionIndex = 35801;

	class TlsException : public Il2CppObject
	{
	public:
		::Mono::Security::Interface::Alert* alert; // 0x90

		::System::Void .ctor(::Mono::Security::Interface::Alert* arg)
		{
			((::System::Void(*)(::Mono::Security::Interface::Alert*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_TLSEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Mono::Security::Interface::Alert* arg, ::System::String* str)
		{
			((::System::Void(*)(::Mono::Security::Interface::Alert*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_TLSEXCEPTION_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::Mono::Security::Interface::AlertDescription* arg)
		{
			((::System::Void(*)(::Mono::Security::Interface::AlertDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_TLSEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Mono::Security::Interface::AlertDescription* arg, ::System::String* str)
		{
			((::System::Void(*)(::Mono::Security::Interface::AlertDescription*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_TLSEXCEPTION_.CTOR_OFFSET))(arg, str, nullptr);
		}

	};
}

