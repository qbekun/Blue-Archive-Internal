#pragma once
#include "../../../unitysdk.h"

namespace Mono::Net::Security { class MobileTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace Mono::Security::Interface { class MonoTlsProvider; }

#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_IMPL_OFFSET UNITYSDK_OFFSET(0x9AAF720)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_INTERNALTARGETHOST_OFFSET UNITYSDK_OFFSET(0x9AAF800)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GETPROVIDER_OFFSET UNITYSDK_OFFSET(0x9AAF870)
#define SYSTEM_NET_SECURITY_SSLSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AAF8F0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AAF910)
#define SYSTEM_NET_SECURITY_SSLSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AAFCF0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SETANDVERIFYVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9AAFA40)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SETANDVERIFYSELECTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9AAFB40)
#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x9AAFE60)
#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x9AAFEE0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_BEGINAUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x9AAFF60)
#define SYSTEM_NET_SECURITY_SSLSTREAM_ENDAUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x9AB0000)
#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENTASYNC_OFFSET UNITYSDK_OFFSET(0x9AB0010)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x9AB0090)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_LOCALCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9AB0110)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x9AB0180)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x9AB0190)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9AB01B0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x9AB01E0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9AB0200)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9AB0280)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x9AB0300)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x9AB0380)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9AB0400)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9AB0480)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9AB0500)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x9AB0570)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x9AB05F0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x9AB0660)
#define SYSTEM_NET_SECURITY_SSLSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x9AB0690)
#define SYSTEM_NET_SECURITY_SSLSTREAM_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x9AAF790)
#define SYSTEM_NET_SECURITY_SSLSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AB06C0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x9AB07D0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x9AB0850)
#define SYSTEM_NET_SECURITY_SSLSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x9AB08D0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x9AB0960)
#define SYSTEM_NET_SECURITY_SSLSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x9AB09F0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x9AB0A80)
#define SYSTEM_NET_SECURITY_SSLSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x9AB0AC0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x9AB0B50)

namespace System::Net::Security
{
	inline static constexpr unsigned int SslStream_TypeDefinitionIndex = 29949;

	class SslStream : public ::AutoMapper::Internal::MemberPath
	{
	public:
		::Mono::Net::Security::MobileTlsProvider* provider; // 0x38
		::Mono::Security::Interface::MonoTlsSettings* settings; // 0x40
		::System::Net::Security::RemoteCertificateValidationCallback* validationCallback; // 0x48
		::System::Net::Security::LocalCertificateSelectionCallback* selectionCallback; // 0x50
		::Mono::Net::Security::MobileAuthenticatedStream* impl; // 0x58
		::System::Boolean explicitSettings; // 0x60

		::Mono::Net::Security::MobileAuthenticatedStream* get_Impl()
		{
			return (return (::Mono::Net::Security::MobileAuthenticatedStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_IMPL_OFFSET))(nullptr);
		}

		::System::String* get_InternalTargetHost()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_INTERNALTARGETHOST_OFFSET))(nullptr);
		}

		::Mono::Net::Security::MobileTlsProvider* GetProvider()
		{
			return (return (::Mono::Net::Security::MobileTlsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GETPROVIDER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Boolean arg, ::System::Net::Security::RemoteCertificateValidationCallback* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Boolean, ::System::Net::Security::RemoteCertificateValidationCallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Boolean arg, ::System::Net::Security::RemoteCertificateValidationCallback* arg, ::System::Net::Security::LocalCertificateSelectionCallback* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Boolean, ::System::Net::Security::RemoteCertificateValidationCallback*, ::System::Net::Security::LocalCertificateSelectionCallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Boolean arg, ::Mono::Security::Interface::MonoTlsProvider* arg, ::Mono::Security::Interface::MonoTlsSettings* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Boolean, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetAndVerifyValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* arg)
		{
			((::System::Void(*)(::System::Net::Security::RemoteCertificateValidationCallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SETANDVERIFYVALIDATIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetAndVerifySelectionCallback(::System::Net::Security::LocalCertificateSelectionCallback* arg)
		{
			((::System::Void(*)(::System::Net::Security::LocalCertificateSelectionCallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SETANDVERIFYSELECTIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void AuthenticateAsClient(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENT_OFFSET))(str, nullptr);
		}

		::System::Void AuthenticateAsClient(::System::String* str, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Security::Authentication::SslProtocols* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENT_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginAuthenticateAsClient(::System::String* str, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Security::Authentication::SslProtocols* arg, ::System::Boolean arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_BEGINAUTHENTICATEASCLIENT_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndAuthenticateAsClient(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_ENDAUTHENTICATEASCLIENT_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* AuthenticateAsClientAsync(::System::String* str, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Security::Authentication::SslProtocols* arg, ::System::Boolean arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENTASYNC_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_ISAUTHENTICATED_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalCertificate()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_LOCALCERTIFICATE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTimeout()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANTIMEOUT_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Int32 get_ReadTimeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_READTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_ReadTimeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SET_READTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_WriteTimeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_WRITETIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_WriteTimeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SET_WRITETIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_FLUSHASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Void CheckDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_CHECKDISPOSED_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_READASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_WRITEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_BEGINREAD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndRead(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_ENDREAD_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_BEGINWRITE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndWrite(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_ENDWRITE_OFFSET))(arg, nullptr);
		}

	};
}

