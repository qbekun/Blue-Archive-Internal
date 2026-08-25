#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Core { class HostConnection; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP { class HTTPResponse; }
namespace BestHTTP::Core { class HTTP2ConnectProtocolInfo; }
namespace BestHTTP { class Proxy; }

#define BESTHTTP_CORE_HOSTDEFINITION_GET_HOST_OFFSET UNITYSDK_OFFSET(0x8EF070)
#define BESTHTTP_CORE_HOSTDEFINITION_SET_HOST_OFFSET UNITYSDK_OFFSET(0x8EF080)
#define BESTHTTP_CORE_HOSTDEFINITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8EF090)
#define BESTHTTP_CORE_HOSTDEFINITION_HASBETTERALTERNATE_OFFSET UNITYSDK_OFFSET(0x8EF130)
#define BESTHTTP_CORE_HOSTDEFINITION_GETHOSTDEFINITION_OFFSET UNITYSDK_OFFSET(0x8EF140)
#define BESTHTTP_CORE_HOSTDEFINITION_GETHOSTDEFINITION_OFFSET UNITYSDK_OFFSET(0x8EC820)
#define BESTHTTP_CORE_HOSTDEFINITION_SEND_OFFSET UNITYSDK_OFFSET(0x8EF220)
#define BESTHTTP_CORE_HOSTDEFINITION_TRYTOSENDQUEUEDREQUESTS_OFFSET UNITYSDK_OFFSET(0x8EF250)
#define BESTHTTP_CORE_HOSTDEFINITION_HANDLEALTSVCHEADER_OFFSET UNITYSDK_OFFSET(0x8EF3C0)
#define BESTHTTP_CORE_HOSTDEFINITION_HANDLECONNECTPROTOCOL_OFFSET UNITYSDK_OFFSET(0x8EF550)
#define BESTHTTP_CORE_HOSTDEFINITION_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x8EF6E0)
#define BESTHTTP_CORE_HOSTDEFINITION_SAVETO_OFFSET UNITYSDK_OFFSET(0x8EF850)
#define BESTHTTP_CORE_HOSTDEFINITION_LOADFROM_OFFSET UNITYSDK_OFFSET(0x8EFB00)
#define BESTHTTP_CORE_HOSTDEFINITION_GETKEYFORREQUEST_OFFSET UNITYSDK_OFFSET(0x8EEFD0)
#define BESTHTTP_CORE_HOSTDEFINITION_GETKEYFOR_OFFSET UNITYSDK_OFFSET(0x8EFB70)
#define BESTHTTP_CORE_HOSTDEFINITION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8F0020)

namespace BestHTTP::Core
{
	inline static constexpr unsigned int HostDefinition_TypeDefinitionIndex = 23397;

	class HostDefinition : public Il2CppObject
	{
	public:
		::System::String* _Host_k__BackingField; // 0x10
		Il2CppObject* Alternates; // 0x18
		Il2CppObject* hostConnectionVariant; // 0x20
		::System::Text::StringBuilder* keyBuilder; // 0x0
		::System::Threading::ReaderWriterLockSlim* keyBuilderLock; // 0x8

		::System::String* get_Host()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTDEFINITION_GET_HOST_OFFSET))(nullptr);
		}

		::System::Void set_Host(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTDEFINITION_SET_HOST_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTDEFINITION_.CTOR_OFFSET))(str, nullptr);
		}

		::BestHTTP::Core::HostConnection* HasBetterAlternate(::BestHTTP::HTTPRequest* arg)
		{
			return (return (::BestHTTP::Core::HostConnection*(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTDEFINITION_HASBETTERALTERNATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Core::HostConnection* GetHostDefinition(::BestHTTP::HTTPRequest* arg)
		{
			return (return (::BestHTTP::Core::HostConnection*(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTDEFINITION_GETHOSTDEFINITION_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Core::HostConnection* GetHostDefinition(::System::String* str)
		{
			return (return (::BestHTTP::Core::HostConnection*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTDEFINITION_GETHOSTDEFINITION_OFFSET))(str, nullptr);
		}

		::System::Void Send(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTDEFINITION_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void TryToSendQueuedRequests()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTDEFINITION_TRYTOSENDQUEUEDREQUESTS_OFFSET))(nullptr);
		}

		::System::Void HandleAltSvcHeader(::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTDEFINITION_HANDLEALTSVCHEADER_OFFSET))(arg, nullptr);
		}

		::System::Void HandleConnectProtocol(::BestHTTP::Core::HTTP2ConnectProtocolInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::Core::HTTP2ConnectProtocolInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTDEFINITION_HANDLECONNECTPROTOCOL_OFFSET))(arg, nullptr);
		}

		::System::Void Shutdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTDEFINITION_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Void SaveTo(::System::IO::BinaryWriter* arg)
		{
			((::System::Void(*)(::System::IO::BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTDEFINITION_SAVETO_OFFSET))(arg, nullptr);
		}

		::System::Void LoadFrom(::System::Int32 arg, ::System::IO::BinaryReader* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::IO::BinaryReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTDEFINITION_LOADFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetKeyForRequest(::BestHTTP::HTTPRequest* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTDEFINITION_GETKEYFORREQUEST_OFFSET))(arg, nullptr);
		}

		::System::String* GetKeyFor(::System::Uri* arg, ::BestHTTP::Proxy* arg)
		{
			return (return (::System::String*(*)(::System::Uri*, ::BestHTTP::Proxy*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTDEFINITION_GETKEYFOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTDEFINITION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

