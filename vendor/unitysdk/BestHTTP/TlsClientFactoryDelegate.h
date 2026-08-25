#pragma once
#include "../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class AbstractTlsClient; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_TLSCLIENTFACTORYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x4D8950)
#define BESTHTTP_TLSCLIENTFACTORYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x4D8960)
#define BESTHTTP_TLSCLIENTFACTORYDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D8970)
#define BESTHTTP_TLSCLIENTFACTORYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x4D8A40)

namespace BestHTTP
{
	inline static constexpr unsigned int TlsClientFactoryDelegate_TypeDefinitionIndex = 21297;

	class TlsClientFactoryDelegate : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient* Invoke(::BestHTTP::HTTPRequest* arg, Il2CppObject* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient*(*)(::BestHTTP::HTTPRequest*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TLSCLIENTFACTORYDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TLSCLIENTFACTORYDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TLSCLIENTFACTORYDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::HTTPRequest* arg, Il2CppObject* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::HTTPRequest*, Il2CppObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TLSCLIENTFACTORYDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

