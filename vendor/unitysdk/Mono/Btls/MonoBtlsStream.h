#pragma once
#include "../../unitysdk.h"

namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace Mono::Net::Security { class MobileTlsProvider; }
namespace Mono::Net::Security { class MobileTlsContext; }
namespace Mono::Net::Security { class MonoSslAuthenticationOptions; }

#define MONO_BTLS_MONOBTLSSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ABD320)
#define MONO_BTLS_MONOBTLSSTREAM_CREATECONTEXT_OFFSET UNITYSDK_OFFSET(0x9ABD3B0)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsStream_TypeDefinitionIndex = 29122;

	class MonoBtlsStream : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::IO::Stream* arg, ::System::Boolean arg, ::System::Net::Security::SslStream* arg, ::Mono::Security::Interface::MonoTlsSettings* arg, ::Mono::Net::Security::MobileTlsProvider* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Boolean, ::System::Net::Security::SslStream*, ::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Net::Security::MobileTlsProvider*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Mono::Net::Security::MobileTlsContext* CreateContext(::Mono::Net::Security::MonoSslAuthenticationOptions* arg)
		{
			return (return (::Mono::Net::Security::MobileTlsContext*(*)(::Mono::Net::Security::MonoSslAuthenticationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSTREAM_CREATECONTEXT_OFFSET))(arg, nullptr);
		}

	};
}

