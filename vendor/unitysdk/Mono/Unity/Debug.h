#pragma once
#include "../../unitysdk.h"

namespace Mono::Security::Interface { class AlertDescription; }

#define MONO_UNITY_DEBUG_CHECKANDTHROW_OFFSET UNITYSDK_OFFSET(0x96C9AC0)
#define MONO_UNITY_DEBUG_CHECKANDTHROW_OFFSET UNITYSDK_OFFSET(0x96C9B70)

namespace Mono::Unity
{
	inline static constexpr unsigned int Debug_TypeDefinitionIndex = 28995;

	class Debug : public Il2CppObject
	{
	public:
		::System::Void CheckAndThrow(unitytls_errorstate* arg, ::System::String* str, ::Mono::Security::Interface::AlertDescription* arg)
		{
			((::System::Void(*)(unitytls_errorstate*, ::System::String*, ::Mono::Security::Interface::AlertDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_DEBUG_CHECKANDTHROW_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void CheckAndThrow(unitytls_errorstate* arg, unitytls_x509verify_result* arg, ::System::String* str, ::Mono::Security::Interface::AlertDescription* arg)
		{
			((::System::Void(*)(unitytls_errorstate*, unitytls_x509verify_result*, ::System::String*, ::Mono::Security::Interface::AlertDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_DEBUG_CHECKANDTHROW_OFFSET))(arg, arg, str, arg, nullptr);
		}

	};
}

