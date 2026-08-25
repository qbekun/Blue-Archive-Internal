#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_TLSSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B8F1B0)
#define SYSTEM_NET_TLSSTREAM_AUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x9B8F2A0)
#define SYSTEM_NET_TLSSTREAM_BEGINAUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x9B8F410)
#define SYSTEM_NET_TLSSTREAM_ENDAUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x9B8F5A0)
#define SYSTEM_NET_TLSSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x9B8F5D0)
#define SYSTEM_NET_TLSSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x9B8F620)
#define SYSTEM_NET_TLSSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x9B8F650)
#define SYSTEM_NET_TLSSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x9B8F680)
#define SYSTEM_NET_TLSSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x9B8F6B0)
#define SYSTEM_NET_TLSSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x9B8F700)
#define SYSTEM_NET_TLSSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x9B8F730)

namespace System::Net
{
	inline static constexpr unsigned int TlsStream_TypeDefinitionIndex = 29642;

	class TlsStream : public Il2CppObject
	{
	public:
		::System::Net::Security::SslStream* _sslStream; // 0x48
		::System::String* _host; // 0x50
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _clientCertificates; // 0x58

		::System::Void .ctor(::System::Net::Sockets::NetworkStream* arg, ::System::Net::Sockets::Socket* arg, ::System::String* str, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::NetworkStream*, ::System::Net::Sockets::Socket*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TLSSTREAM_.CTOR_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void AuthenticateAsClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TLSSTREAM_AUTHENTICATEASCLIENT_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginAuthenticateAsClient(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TLSSTREAM_BEGINAUTHENTICATEASCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndAuthenticateAsClient(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TLSSTREAM_ENDAUTHENTICATEASCLIENT_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TLSSTREAM_BEGINWRITE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndWrite(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TLSSTREAM_ENDWRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TLSSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TLSSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TLSSTREAM_BEGINREAD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndRead(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TLSSTREAM_ENDREAD_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TLSSTREAM_CLOSE_OFFSET))(nullptr);
		}

	};
}

