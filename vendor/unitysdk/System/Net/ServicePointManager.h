#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_SERVICEPOINTMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A795F0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GETLEGACYCERTIFICATEPOLICY_OFFSET UNITYSDK_OFFSET(0x9A796F0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET UNITYSDK_OFFSET(0x9A79740)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_DNSREFRESHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9A79790)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_SECURITYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x9A797E0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_SECURITYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x9A79830)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_SERVERCERTVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9A79880)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9A798D0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_FINDSERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x9A6E3C0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_CLOSECONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9A799D0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_REMOVESERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x9A79DF0)

namespace System::Net
{
	inline static constexpr unsigned int ServicePointManager_TypeDefinitionIndex = 29791;

	class ServicePointManager : public Il2CppObject
	{
	public:
		Il2CppObject* servicePoints; // 0x0
		::System::Net::ICertificatePolicy* policy; // 0x8
		::System::Int32 defaultConnectionLimit; // 0x10
		::System::Int32 maxServicePointIdleTime; // 0x14
		::System::Int32 maxServicePoints; // 0x18
		::System::Int32 dnsRefreshTimeout; // 0x1C
		::System::Boolean _checkCRL; // 0x20
		::System::Net::SecurityProtocolType* _securityProtocol; // 0x24
		::System::Boolean expectContinue; // 0x28
		::System::Boolean useNagle; // 0x29
		::System::Net::ServerCertValidationCallback* server_cert_cb; // 0x30
		::System::Boolean tcp_keepalive; // 0x38
		::System::Int32 tcp_keepalive_time; // 0x3C
		::System::Int32 tcp_keepalive_interval; // 0x40

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Net::ICertificatePolicy* GetLegacyCertificatePolicy()
		{
			return (return (::System::Net::ICertificatePolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GETLEGACYCERTIFICATEPOLICY_OFFSET))(nullptr);
		}

		::System::Boolean get_CheckCertificateRevocationList()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET))(nullptr);
		}

		::System::Int32 get_DnsRefreshTimeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_DNSREFRESHTIMEOUT_OFFSET))(nullptr);
		}

		::System::Net::SecurityProtocolType* get_SecurityProtocol()
		{
			return (return (::System::Net::SecurityProtocolType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_SECURITYPROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SecurityProtocol(::System::Net::SecurityProtocolType* arg)
		{
			((::System::Void(*)(::System::Net::SecurityProtocolType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_SECURITYPROTOCOL_OFFSET))(arg, nullptr);
		}

		::System::Net::ServerCertValidationCallback* get_ServerCertValidationCallback()
		{
			return (return (::System::Net::ServerCertValidationCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_SERVERCERTVALIDATIONCALLBACK_OFFSET))(nullptr);
		}

		::System::Net::Security::RemoteCertificateValidationCallback* get_ServerCertificateValidationCallback()
		{
			return (return (::System::Net::Security::RemoteCertificateValidationCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET))(nullptr);
		}

		::System::Net::ServicePoint* FindServicePoint(::System::Uri* arg, ::System::Net::IWebProxy* arg)
		{
			return (return (::System::Net::ServicePoint*(*)(::System::Uri*, ::System::Net::IWebProxy*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_FINDSERVICEPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CloseConnectionGroup(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_CLOSECONNECTIONGROUP_OFFSET))(str, nullptr);
		}

		::System::Void RemoveServicePoint(::System::Net::ServicePoint* arg)
		{
			((::System::Void(*)(::System::Net::ServicePoint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_REMOVESERVICEPOINT_OFFSET))(arg, nullptr);
		}

	};
}

