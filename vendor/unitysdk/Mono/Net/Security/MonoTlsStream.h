#pragma once
#include "../../../unitysdk.h"

namespace Mono::Net::Security { class MobileTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }

#define MONO_NET_SECURITY_MONOTLSSTREAM_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x96D9D60)
#define MONO_NET_SECURITY_MONOTLSSTREAM_GET_EXCEPTIONSTATUS_OFFSET UNITYSDK_OFFSET(0x96D9D70)
#define MONO_NET_SECURITY_MONOTLSSTREAM_GET_CERTIFICATEVALIDATIONFAILED_OFFSET UNITYSDK_OFFSET(0x96D9D80)
#define MONO_NET_SECURITY_MONOTLSSTREAM_SET_CERTIFICATEVALIDATIONFAILED_OFFSET UNITYSDK_OFFSET(0x96D9D90)
#define MONO_NET_SECURITY_MONOTLSSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D9DA0)
#define MONO_NET_SECURITY_MONOTLSSTREAM_CREATESTREAM_OFFSET UNITYSDK_OFFSET(0x96DA030)
#define MONO_NET_SECURITY_MONOTLSSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96DA160)
#define MONO_NET_SECURITY_MONOTLSSTREAM_CLOSESSLSTREAM_OFFSET UNITYSDK_OFFSET(0x96DA170)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MonoTlsStream_TypeDefinitionIndex = 29081;

	class MonoTlsStream : public Il2CppObject
	{
	public:
		::Mono::Net::Security::MobileTlsProvider* provider; // 0x10
		::System::Net::Sockets::NetworkStream* networkStream; // 0x18
		::System::Net::HttpWebRequest* request; // 0x20
		::Mono::Security::Interface::MonoTlsSettings* settings; // 0x28
		::System::Net::Security::SslStream* sslStream; // 0x30
		::System::Object* sslStreamLock; // 0x38
		::System::Net::WebExceptionStatus* status; // 0x40
		::System::Boolean _CertificateValidationFailed_k__BackingField; // 0x44

		::System::Net::HttpWebRequest* get_Request()
		{
			return (return (::System::Net::HttpWebRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSSTREAM_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Net::WebExceptionStatus* get_ExceptionStatus()
		{
			return (return (::System::Net::WebExceptionStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSSTREAM_GET_EXCEPTIONSTATUS_OFFSET))(nullptr);
		}

		::System::Boolean get_CertificateValidationFailed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSSTREAM_GET_CERTIFICATEVALIDATIONFAILED_OFFSET))(nullptr);
		}

		::System::Void set_CertificateValidationFailed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSSTREAM_SET_CERTIFICATEVALIDATIONFAILED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Net::HttpWebRequest* arg, ::System::Net::Sockets::NetworkStream* arg)
		{
			((::System::Void(*)(::System::Net::HttpWebRequest*, ::System::Net::Sockets::NetworkStream*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CreateStream(::System::Net::WebConnectionTunnel* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::WebConnectionTunnel*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSSTREAM_CREATESTREAM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSSTREAM_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void CloseSslStream()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSSTREAM_CLOSESSLSTREAM_OFFSET))(nullptr);
		}

	};
}

