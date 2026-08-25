#pragma once
#include "../../../unitysdk.h"

namespace Mono::Net::Security { class MobileTlsContext; }
namespace Mono::Net::Security { class AsyncProtocolRequest; }
namespace Mono::Net::Security { class BufferOffsetSize2; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace Mono::Net::Security { class MobileTlsProvider; }
namespace Mono::Net::Security { class MonoSslAuthenticationOptions; }
namespace Mono::Net::Security { class BufferOffsetSize; }
namespace Mono::Net::Security { class AsyncOperationStatus; }

#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D0420)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_SSLSTREAM_OFFSET UNITYSDK_OFFSET(0x96D46E0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x96D46F0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x96D4700)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_TARGETHOST_OFFSET UNITYSDK_OFFSET(0x96D4710)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_TARGETHOST_OFFSET UNITYSDK_OFFSET(0x96D4720)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_CHECKTHROW_OFFSET UNITYSDK_OFFSET(0x96D4740)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GETSSPIEXCEPTION_OFFSET UNITYSDK_OFFSET(0x96D1FD0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GETIOEXCEPTION_OFFSET UNITYSDK_OFFSET(0x96D4810)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GETINTERNALERROR_OFFSET UNITYSDK_OFFSET(0x96D4970)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GETINVALIDNESTEDCALLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x96D49D0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x96D1980)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_AUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x96D4A30)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_AUTHENTICATEASCLIENTASYNC_OFFSET UNITYSDK_OFFSET(0x96D4E40)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSAUTHENTICATION_OFFSET UNITYSDK_OFFSET(0x96D4D20)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_CREATECONTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x96D4FC0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x96D5220)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x96D5330)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x96D5410)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_STARTOPERATION_OFFSET UNITYSDK_OFFSET(0x96D50E0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALREAD_OFFSET UNITYSDK_OFFSET(0x96CE540)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALREAD_OFFSET UNITYSDK_OFFSET(0x96D5500)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALWRITE_OFFSET UNITYSDK_OFFSET(0x96CE060)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALWRITE_OFFSET UNITYSDK_OFFSET(0x96D5690)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INNERREAD_OFFSET UNITYSDK_OFFSET(0x96D26D0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INNERWRITE_OFFSET UNITYSDK_OFFSET(0x96D2140)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x96D28A0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSREAD_OFFSET UNITYSDK_OFFSET(0x96D2F20)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSWRITE_OFFSET UNITYSDK_OFFSET(0x96D3200)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x96D5820)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96D5960)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x96D5C40)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_LOCALCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96D5C70)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_INTERNALLOCALCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96D5D70)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x96D5EC0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x96D5F10)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x96D5F40)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANTIMEOUT_OFFSET UNITYSDK_OFFSET(0x96D5F90)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x96D5FC0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x96D6010)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x96D6020)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x96D6050)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x96D6080)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x96D60D0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x96D6100)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x96D6130)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x96D6160)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96D6190)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__INNERWRITE_B__67_0_OFFSET UNITYSDK_OFFSET(0x96D61D0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MobileAuthenticatedStream_TypeDefinitionIndex = 29074;

	class MobileAuthenticatedStream : public ::AutoMapper::Internal::MemberPath
	{
	public:
		::Mono::Net::Security::MobileTlsContext* xobileTlsContext; // 0x38
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* lastException; // 0x40
		::Mono::Net::Security::AsyncProtocolRequest* asyncHandshakeRequest; // 0x48
		::Mono::Net::Security::AsyncProtocolRequest* asyncReadRequest; // 0x50
		::Mono::Net::Security::AsyncProtocolRequest* asyncWriteRequest; // 0x58
		::Mono::Net::Security::BufferOffsetSize2* readBuffer; // 0x60
		::Mono::Net::Security::BufferOffsetSize2* writeBuffer; // 0x68
		::System::Object* ioLock; // 0x70
		::System::Int32 closeRequested; // 0x78
		::System::Boolean shutdown; // 0x7C
		Operation* operation; // 0x80
		::System::Int32 uniqueNameInteger; // 0x0
		::System::Net::Security::SslStream* _SslStream_k__BackingField; // 0x88
		::Mono::Security::Interface::MonoTlsSettings* _Settings_k__BackingField; // 0x90
		::Mono::Net::Security::MobileTlsProvider* _Provider_k__BackingField; // 0x98
		::System::String* _TargetHost_k__BackingField; // 0xA0
		::System::Int32 nextId; // 0x4
		::System::Int32 ID; // 0xA8

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Boolean arg, ::System::Net::Security::SslStream* arg, ::Mono::Security::Interface::MonoTlsSettings* arg, ::Mono::Net::Security::MobileTlsProvider* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Boolean, ::System::Net::Security::SslStream*, ::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Net::Security::MobileTlsProvider*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Net::Security::SslStream* get_SslStream()
		{
			return (return (::System::Net::Security::SslStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_SSLSTREAM_OFFSET))(nullptr);
		}

		::Mono::Security::Interface::MonoTlsSettings* get_Settings()
		{
			return (return (::Mono::Security::Interface::MonoTlsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_SETTINGS_OFFSET))(nullptr);
		}

		::Mono::Net::Security::MobileTlsProvider* get_Provider()
		{
			return (return (::Mono::Net::Security::MobileTlsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_PROVIDER_OFFSET))(nullptr);
		}

		::System::String* get_TargetHost()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_TARGETHOST_OFFSET))(nullptr);
		}

		::System::Void set_TargetHost(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_TARGETHOST_OFFSET))(str, nullptr);
		}

		::System::Void CheckThrow(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_CHECKTHROW_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* GetSSPIException(::System::Exception* arg)
		{
			return (return (::System::Exception*(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GETSSPIEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Exception* GetIOException(::System::Exception* arg, ::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::Exception*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GETIOEXCEPTION_OFFSET))(arg, str, nullptr);
		}

		::System::Exception* GetInternalError()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GETINTERNALERROR_OFFSET))(nullptr);
		}

		::System::Exception* GetInvalidNestedCallException()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GETINVALIDNESTEDCALLEXCEPTION_OFFSET))(nullptr);
		}

		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* SetException(::System::Exception* arg)
		{
			return (return (::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SETEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void AuthenticateAsClient(::System::String* str, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Security::Authentication::SslProtocols* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_AUTHENTICATEASCLIENT_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* AuthenticateAsClientAsync(::System::String* str, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Security::Authentication::SslProtocols* arg, ::System::Boolean arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_AUTHENTICATEASCLIENTASYNC_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* ProcessAuthentication(::System::Boolean arg, ::Mono::Net::Security::MonoSslAuthenticationOptions* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Boolean, ::Mono::Net::Security::MonoSslAuthenticationOptions*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSAUTHENTICATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::Mono::Net::Security::MobileTlsContext* CreateContext(::Mono::Net::Security::MonoSslAuthenticationOptions* arg)
		{
			return (return (::Mono::Net::Security::MobileTlsContext*(*)(::Mono::Net::Security::MonoSslAuthenticationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_CREATECONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_READASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_WRITEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* StartOperation(OperationType* arg, ::Mono::Net::Security::AsyncProtocolRequest* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(OperationType*, ::Mono::Net::Security::AsyncProtocolRequest*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_STARTOPERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 InternalRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, bool&* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALREAD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* InternalRead(::Mono::Net::Security::AsyncProtocolRequest* arg, ::Mono::Net::Security::BufferOffsetSize* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Mono::Net::Security::AsyncProtocolRequest*, ::Mono::Net::Security::BufferOffsetSize*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALREAD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean InternalWrite(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALWRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean InternalWrite(::Mono::Net::Security::AsyncProtocolRequest* arg, ::Mono::Net::Security::BufferOffsetSize2* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Mono::Net::Security::AsyncProtocolRequest*, ::Mono::Net::Security::BufferOffsetSize2*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INTERNALWRITE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* InnerRead(::System::Boolean arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INNERREAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* InnerWrite(::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_INNERWRITE_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Net::Security::AsyncOperationStatus* ProcessHandshake(::Mono::Net::Security::AsyncOperationStatus* arg, ::System::Boolean arg)
		{
			return (return (::Mono::Net::Security::AsyncOperationStatus*(*)(::Mono::Net::Security::AsyncOperationStatus*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSHANDSHAKE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ProcessRead(::Mono::Net::Security::BufferOffsetSize* arg)
		{
			return (return (Il2CppObject*(*)(::Mono::Net::Security::BufferOffsetSize*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSREAD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ProcessWrite(::Mono::Net::Security::BufferOffsetSize* arg)
		{
			return (return (Il2CppObject*(*)(::Mono::Net::Security::BufferOffsetSize*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_PROCESSWRITE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_ISAUTHENTICATED_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalCertificate()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_LOCALCERTIFICATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_InternalLocalCertificate()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_INTERNALLOCALCERTIFICATE_OFFSET))(nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTimeout()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANTIMEOUT_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ReadTimeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_READTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_ReadTimeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_READTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_WriteTimeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_GET_WRITETIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_WriteTimeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_SET_WRITETIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _InnerWrite_b__67_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__INNERWRITE_B__67_0_OFFSET))(nullptr);
		}

	};
}

