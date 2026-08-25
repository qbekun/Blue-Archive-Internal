#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_SERVICEPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A78350)
#define SYSTEM_NET_SERVICEPOINT_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9A78640)
#define SYSTEM_NET_SERVICEPOINT_GET_SCHEDULER_OFFSET UNITYSDK_OFFSET(0x9A78650)
#define SYSTEM_NET_SERVICEPOINT_SET_SCHEDULER_OFFSET UNITYSDK_OFFSET(0x9A78660)
#define SYSTEM_NET_SERVICEPOINT_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x9A78670)
#define SYSTEM_NET_SERVICEPOINT_GET_CONNECTIONLIMIT_OFFSET UNITYSDK_OFFSET(0x9A78680)
#define SYSTEM_NET_SERVICEPOINT_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x9A78690)
#define SYSTEM_NET_SERVICEPOINT_SET_EXPECT100CONTINUE_OFFSET UNITYSDK_OFFSET(0x9A786A0)
#define SYSTEM_NET_SERVICEPOINT_GET_USENAGLEALGORITHM_OFFSET UNITYSDK_OFFSET(0x9A786B0)
#define SYSTEM_NET_SERVICEPOINT_SET_USENAGLEALGORITHM_OFFSET UNITYSDK_OFFSET(0x9A786C0)
#define SYSTEM_NET_SERVICEPOINT_GET_SENDCONTINUE_OFFSET UNITYSDK_OFFSET(0x9A71050)
#define SYSTEM_NET_SERVICEPOINT_SET_SENDCONTINUE_OFFSET UNITYSDK_OFFSET(0x9A786D0)
#define SYSTEM_NET_SERVICEPOINT_SETTCPKEEPALIVE_OFFSET UNITYSDK_OFFSET(0x9A786E0)
#define SYSTEM_NET_SERVICEPOINT_KEEPALIVESETUP_OFFSET UNITYSDK_OFFSET(0x9A787A0)
#define SYSTEM_NET_SERVICEPOINT_PUTBYTES_OFFSET UNITYSDK_OFFSET(0x9A78860)
#define SYSTEM_NET_SERVICEPOINT_GET_USESPROXY_OFFSET UNITYSDK_OFFSET(0x9A789A0)
#define SYSTEM_NET_SERVICEPOINT_SET_USESPROXY_OFFSET UNITYSDK_OFFSET(0x9A789B0)
#define SYSTEM_NET_SERVICEPOINT_GET_USECONNECT_OFFSET UNITYSDK_OFFSET(0x9A789C0)
#define SYSTEM_NET_SERVICEPOINT_SET_USECONNECT_OFFSET UNITYSDK_OFFSET(0x9A789D0)
#define SYSTEM_NET_SERVICEPOINT_GET_HASTIMEDOUT_OFFSET UNITYSDK_OFFSET(0x9A789E0)
#define SYSTEM_NET_SERVICEPOINT_GET_HOSTENTRY_OFFSET UNITYSDK_OFFSET(0x9A78B40)
#define SYSTEM_NET_SERVICEPOINT_SETVERSION_OFFSET UNITYSDK_OFFSET(0x9A78F80)
#define SYSTEM_NET_SERVICEPOINT_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0x9A6EDC0)
#define SYSTEM_NET_SERVICEPOINT_CLOSECONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9A790E0)
#define SYSTEM_NET_SERVICEPOINT_FREESERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x9A79320)
#define SYSTEM_NET_SERVICEPOINT_UPDATESERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9A79340)
#define SYSTEM_NET_SERVICEPOINT_UPDATECLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9A79390)
#define SYSTEM_NET_SERVICEPOINT_CALLENDPOINTDELEGATE_OFFSET UNITYSDK_OFFSET(0x9A793E0)

namespace System::Net
{
	inline static constexpr unsigned int ServicePoint_TypeDefinitionIndex = 29789;

	class ServicePoint : public Il2CppObject
	{
	public:
		::System::Uri* uri; // 0x10
		::System::DateTime* lastDnsResolve; // 0x18
		::System::Version* protocolVersion; // 0x20
		::System::Net::IPHostEntry* host; // 0x28
		::System::Boolean usesProxy; // 0x30
		::System::Boolean sendContinue; // 0x31
		::System::Boolean useConnect; // 0x32
		::System::Object* hostE; // 0x38
		::System::Boolean useNagle; // 0x40
		::System::Net::BindIPEndPoint* endPointCallback; // 0x48
		::System::Boolean tcp_keepalive; // 0x50
		::System::Int32 tcp_keepalive_time; // 0x54
		::System::Int32 tcp_keepalive_interval; // 0x58
		::System::Boolean disposed; // 0x5C
		::System::Int32 connectionLeaseTimeout; // 0x60
		::System::Int32 receiveBufferSize; // 0x64
		SPKey* _Key_k__BackingField; // 0x68
		::System::Net::ServicePointScheduler* _Scheduler_k__BackingField; // 0x70
		::System::Int32 connectionLimit; // 0x78
		::System::Int32 maxIdleTime; // 0x7C
		::System::Object* m_ServerCertificateOrBytes; // 0x80
		::System::Object* m_ClientCertificateOrBytes; // 0x88

		::System::Void .ctor(SPKey* arg, ::System::Uri* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(SPKey*, ::System::Uri*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		SPKey* get_Key()
		{
			return (return (SPKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_KEY_OFFSET))(nullptr);
		}

		::System::Net::ServicePointScheduler* get_Scheduler()
		{
			return (return (::System::Net::ServicePointScheduler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_SCHEDULER_OFFSET))(nullptr);
		}

		::System::Void set_Scheduler(::System::Net::ServicePointScheduler* arg)
		{
			((::System::Void(*)(::System::Net::ServicePointScheduler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_SCHEDULER_OFFSET))(arg, nullptr);
		}

		::System::Uri* get_Address()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_ADDRESS_OFFSET))(nullptr);
		}

		::System::Int32 get_ConnectionLimit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_CONNECTIONLIMIT_OFFSET))(nullptr);
		}

		::System::Version* get_ProtocolVersion()
		{
			return (return (::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_PROTOCOLVERSION_OFFSET))(nullptr);
		}

		::System::Void set_Expect100Continue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_EXPECT100CONTINUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseNagleAlgorithm()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_USENAGLEALGORITHM_OFFSET))(nullptr);
		}

		::System::Void set_UseNagleAlgorithm(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_USENAGLEALGORITHM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SendContinue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_SENDCONTINUE_OFFSET))(nullptr);
		}

		::System::Void set_SendContinue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_SENDCONTINUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTcpKeepAlive(::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SETTCPKEEPALIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void KeepAliveSetup(::System::Net::Sockets::Socket* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_KEEPALIVESETUP_OFFSET))(arg, nullptr);
		}

		::System::Void PutBytes(::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_PUTBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_UsesProxy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_USESPROXY_OFFSET))(nullptr);
		}

		::System::Void set_UsesProxy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_USESPROXY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseConnect()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_USECONNECT_OFFSET))(nullptr);
		}

		::System::Void set_UseConnect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_USECONNECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasTimedOut()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_HASTIMEDOUT_OFFSET))(nullptr);
		}

		::System::Net::IPHostEntry* get_HostEntry()
		{
			return (return (::System::Net::IPHostEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_HOSTENTRY_OFFSET))(nullptr);
		}

		::System::Void SetVersion(::System::Version* arg)
		{
			((::System::Void(*)(::System::Version*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SETVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void SendRequest(::System::Net::WebOperation* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Net::WebOperation*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SENDREQUEST_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean CloseConnectionGroup(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_CLOSECONNECTIONGROUP_OFFSET))(str, nullptr);
		}

		::System::Void FreeServicePoint()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_FREESERVICEPOINT_OFFSET))(nullptr);
		}

		::System::Void UpdateServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_UPDATESERVERCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_UPDATECLIENTCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CallEndPointDelegate(::System::Net::Sockets::Socket* arg, ::System::Net::IPEndPoint* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Sockets::Socket*, ::System::Net::IPEndPoint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_CALLENDPOINTDELEGATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

