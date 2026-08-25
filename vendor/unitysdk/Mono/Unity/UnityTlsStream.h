#pragma once
#include "../../unitysdk.h"

namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace Mono::Net::Security { class MobileTlsProvider; }
namespace Mono::Net::Security { class MobileTlsContext; }
namespace Mono::Net::Security { class MonoSslAuthenticationOptions; }

#define MONO_UNITY_UNITYTLSSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CF770)
#define MONO_UNITY_UNITYTLSSTREAM_CREATECONTEXT_OFFSET UNITYSDK_OFFSET(0x96D0630)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTlsStream_TypeDefinitionIndex = 29051;

	class UnityTlsStream : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::IO::Stream* arg, ::System::Boolean arg, ::System::Net::Security::SslStream* arg, ::Mono::Security::Interface::MonoTlsSettings* arg, ::Mono::Net::Security::MobileTlsProvider* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Boolean, ::System::Net::Security::SslStream*, ::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Net::Security::MobileTlsProvider*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSSTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Mono::Net::Security::MobileTlsContext* CreateContext(::Mono::Net::Security::MonoSslAuthenticationOptions* arg)
		{
			return (return (::Mono::Net::Security::MobileTlsContext*(*)(::Mono::Net::Security::MonoSslAuthenticationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSSTREAM_CREATECONTEXT_OFFSET))(arg, nullptr);
		}

	};
}

