#pragma once
#include "../../unitysdk.h"

namespace Mono::Net::Security { class MonoTlsStream; }

#define SYSTEM_NET_WEBCONNECTION_GET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x9A7E300)
#define SYSTEM_NET_WEBCONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A7CD60)
#define SYSTEM_NET_WEBCONNECTION_CANREUSE_OFFSET UNITYSDK_OFFSET(0x9A7E310)
#define SYSTEM_NET_WEBCONNECTION_CHECKREUSABLE_OFFSET UNITYSDK_OFFSET(0x9A7E340)
#define SYSTEM_NET_WEBCONNECTION_CONNECT_OFFSET UNITYSDK_OFFSET(0x9A7E400)
#define SYSTEM_NET_WEBCONNECTION_CREATESTREAM_OFFSET UNITYSDK_OFFSET(0x9A7E520)
#define SYSTEM_NET_WEBCONNECTION_INITCONNECTION_OFFSET UNITYSDK_OFFSET(0x9A7E670)
#define SYSTEM_NET_WEBCONNECTION_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9A7E7B0)
#define SYSTEM_NET_WEBCONNECTION_READLINE_OFFSET UNITYSDK_OFFSET(0x9A7E930)
#define SYSTEM_NET_WEBCONNECTION_CANREUSECONNECTION_OFFSET UNITYSDK_OFFSET(0x9A7C700)
#define SYSTEM_NET_WEBCONNECTION_PREPARESHARINGNTLM_OFFSET UNITYSDK_OFFSET(0x9A7EB40)
#define SYSTEM_NET_WEBCONNECTION_RESET_OFFSET UNITYSDK_OFFSET(0x9A7EE60)
#define SYSTEM_NET_WEBCONNECTION_CLOSE_OFFSET UNITYSDK_OFFSET(0x9A7EFA0)
#define SYSTEM_NET_WEBCONNECTION_CLOSESOCKET_OFFSET UNITYSDK_OFFSET(0x9A7F0A0)
#define SYSTEM_NET_WEBCONNECTION_GET_CLOSED_OFFSET UNITYSDK_OFFSET(0x9A7C330)
#define SYSTEM_NET_WEBCONNECTION_GET_IDLESINCE_OFFSET UNITYSDK_OFFSET(0x9A7F380)
#define SYSTEM_NET_WEBCONNECTION_STARTOPERATION_OFFSET UNITYSDK_OFFSET(0x9A7CB40)
#define SYSTEM_NET_WEBCONNECTION_CONTINUE_OFFSET UNITYSDK_OFFSET(0x9A7B2E0)
#define SYSTEM_NET_WEBCONNECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A7F390)
#define SYSTEM_NET_WEBCONNECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A7C2F0)
#define SYSTEM_NET_WEBCONNECTION_RESETNTLM_OFFSET UNITYSDK_OFFSET(0x9A7EF70)
#define SYSTEM_NET_WEBCONNECTION_GET_NTLMAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x9A7F3D0)
#define SYSTEM_NET_WEBCONNECTION_SET_NTLMAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x9A7F3E0)
#define SYSTEM_NET_WEBCONNECTION_GET_NTLMCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x9A7F3F0)
#define SYSTEM_NET_WEBCONNECTION_SET_NTLMCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x9A7F400)
#define SYSTEM_NET_WEBCONNECTION_GET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET UNITYSDK_OFFSET(0x9A7F410)
#define SYSTEM_NET_WEBCONNECTION_SET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET UNITYSDK_OFFSET(0x9A7F420)

namespace System::Net
{
	inline static constexpr unsigned int WebConnection_TypeDefinitionIndex = 29808;

	class WebConnection : public Il2CppObject
	{
	public:
		::System::Net::NetworkCredential* ntlm_credentials; // 0x10
		::System::Boolean ntlm_authenticated; // 0x18
		::System::Boolean unsafe_sharing; // 0x19
		::System::IO::Stream* networkStream; // 0x20
		::System::Net::Sockets::Socket* socket; // 0x28
		::Mono::Net::Security::MonoTlsStream* monoTlsStream; // 0x30
		::System::Net::WebConnectionTunnel* tunnel; // 0x38
		::System::Int32 disposed; // 0x40
		::System::Net::ServicePoint* _ServicePoint_k__BackingField; // 0x48
		::System::DateTime* idleSince; // 0x50
		::System::Net::WebOperation* currentOperation; // 0x58

		::System::Net::ServicePoint* get_ServicePoint()
		{
			return (return (::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GET_SERVICEPOINT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::ServicePoint* arg)
		{
			((::System::Void(*)(::System::Net::ServicePoint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanReuse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CANREUSE_OFFSET))(nullptr);
		}

		::System::Boolean CheckReusable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CHECKREUSABLE_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* Connect(::System::Net::WebOperation* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Net::WebOperation*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CONNECT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CreateStream(::System::Net::WebOperation* arg, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::WebOperation*, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CREATESTREAM_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* InitConnection(::System::Net::WebOperation* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::WebOperation*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_INITCONNECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::WebException* GetException(::System::Net::WebExceptionStatus* arg, ::System::Exception* arg)
		{
			return (return (::System::Net::WebException*(*)(::System::Net::WebExceptionStatus*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GETEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ReadLine(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::System::Int32 arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::System::Int32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_READLINE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CanReuseConnection(::System::Net::WebOperation* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::WebOperation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CANREUSECONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean PrepareSharingNtlm(::System::Net::WebOperation* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::WebOperation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_PREPARESHARINGNTLM_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_RESET_OFFSET))(nullptr);
		}

		::System::Void Close(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void CloseSocket()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CLOSESOCKET_OFFSET))(nullptr);
		}

		::System::Boolean get_Closed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GET_CLOSED_OFFSET))(nullptr);
		}

		::System::DateTime* get_IdleSince()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GET_IDLESINCE_OFFSET))(nullptr);
		}

		::System::Boolean StartOperation(::System::Net::WebOperation* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Net::WebOperation*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_STARTOPERATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Continue(::System::Net::WebOperation* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::WebOperation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_CONTINUE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void ResetNtlm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_RESETNTLM_OFFSET))(nullptr);
		}

		::System::Boolean get_NtlmAuthenticated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GET_NTLMAUTHENTICATED_OFFSET))(nullptr);
		}

		::System::Void set_NtlmAuthenticated(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_SET_NTLMAUTHENTICATED_OFFSET))(arg, nullptr);
		}

		::System::Net::NetworkCredential* get_NtlmCredential()
		{
			return (return (::System::Net::NetworkCredential*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GET_NTLMCREDENTIAL_OFFSET))(nullptr);
		}

		::System::Void set_NtlmCredential(::System::Net::NetworkCredential* arg)
		{
			((::System::Void(*)(::System::Net::NetworkCredential*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_SET_NTLMCREDENTIAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UnsafeAuthenticatedConnectionSharing()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_GET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET))(nullptr);
		}

		::System::Void set_UnsafeAuthenticatedConnectionSharing(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_SET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET))(arg, nullptr);
		}

	};
}

