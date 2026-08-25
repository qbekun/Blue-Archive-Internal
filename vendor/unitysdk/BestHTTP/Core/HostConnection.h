#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Core { class HostDefinition; }
namespace BestHTTP::Core { class HostProtocolSupport; }
namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP::Core { class HostConnection; }
namespace BestHTTP::Connections { class ConnectionBase; }
namespace BestHTTP::Connections { class HTTPConnectionStates; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_CORE_HOSTCONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8ED0C0)
#define BESTHTTP_CORE_HOSTCONNECTION_REMOVECONNECTION_OFFSET UNITYSDK_OFFSET(0x8ECDB0)
#define BESTHTTP_CORE_HOSTCONNECTION_RECYCLECONNECTION_OFFSET UNITYSDK_OFFSET(0x8ECBB0)
#define BESTHTTP_CORE_HOSTCONNECTION_SET_LASTPROTOCOLSUPPORTUPDATE_OFFSET UNITYSDK_OFFSET(0x8ED2C0)
#define BESTHTTP_CORE_HOSTCONNECTION_GET_PROTOCOLSUPPORT_OFFSET UNITYSDK_OFFSET(0x8ED2D0)
#define BESTHTTP_CORE_HOSTCONNECTION_GET_VARIANTID_OFFSET UNITYSDK_OFFSET(0x8ED2E0)
#define BESTHTTP_CORE_HOSTCONNECTION_SET_PROTOCOLSUPPORT_OFFSET UNITYSDK_OFFSET(0x8ED2F0)
#define BESTHTTP_CORE_HOSTCONNECTION_GET_LASTPROTOCOLSUPPORTUPDATE_OFFSET UNITYSDK_OFFSET(0x8ED300)
#define BESTHTTP_CORE_HOSTCONNECTION_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x8ED310)
#define BESTHTTP_CORE_HOSTCONNECTION_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x8ED320)
#define BESTHTTP_CORE_HOSTCONNECTION_ADDPROTOCOL_OFFSET UNITYSDK_OFFSET(0x8EC8F0)
#define BESTHTTP_CORE_HOSTCONNECTION_LOADFROM_OFFSET UNITYSDK_OFFSET(0x8EDB90)
#define BESTHTTP_CORE_HOSTCONNECTION_SAVETO_OFFSET UNITYSDK_OFFSET(0x8EDF40)
#define BESTHTTP_CORE_HOSTCONNECTION_CLOSECONNECTIONAFTERINACTIVITY_OFFSET UNITYSDK_OFFSET(0x8EDFE0)
#define BESTHTTP_CORE_HOSTCONNECTION_SET_HOST_OFFSET UNITYSDK_OFFSET(0x8EE4B0)
#define BESTHTTP_CORE_HOSTCONNECTION_SET_VARIANTID_OFFSET UNITYSDK_OFFSET(0x8EE4C0)
#define BESTHTTP_CORE_HOSTCONNECTION_GET_QUEUEDREQUESTS_OFFSET UNITYSDK_OFFSET(0x8EE4D0)
#define BESTHTTP_CORE_HOSTCONNECTION_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x8EE510)
#define BESTHTTP_CORE_HOSTCONNECTION_TRYTOSENDQUEUEDREQUESTS_OFFSET UNITYSDK_OFFSET(0x8ECCE0)
#define BESTHTTP_CORE_HOSTCONNECTION_SEND_OFFSET UNITYSDK_OFFSET(0x8EE710)
#define BESTHTTP_CORE_HOSTCONNECTION_GETNEXTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x8EE800)
#define BESTHTTP_CORE_HOSTCONNECTION_GET_HOST_OFFSET UNITYSDK_OFFSET(0x8EF060)

namespace BestHTTP::Core
{
	inline static constexpr unsigned int HostConnection_TypeDefinitionIndex = 23396;

	class HostConnection : public Il2CppObject
	{
	public:
		::BestHTTP::Core::HostDefinition* _Host_k__BackingField; // 0x10
		::System::String* _VariantId_k__BackingField; // 0x18
		::BestHTTP::Core::HostProtocolSupport* _ProtocolSupport_k__BackingField; // 0x20
		::System::DateTime* _LastProtocolSupportUpdate_k__BackingField; // 0x28
		::BestHTTP::Logger::LoggingContext* _Context_k__BackingField; // 0x30
		Il2CppObject* Connections; // 0x38
		Il2CppObject* Queue; // 0x40

		::System::Void .ctor(::BestHTTP::Core::HostDefinition* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::Core::HostDefinition*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::BestHTTP::Core::HostConnection* RemoveConnection(::BestHTTP::Connections::ConnectionBase* arg, ::BestHTTP::Connections::HTTPConnectionStates* arg)
		{
			return (return (::BestHTTP::Core::HostConnection*(*)(::BestHTTP::Connections::ConnectionBase*, ::BestHTTP::Connections::HTTPConnectionStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_REMOVECONNECTION_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::Core::HostConnection* RecycleConnection(::BestHTTP::Connections::ConnectionBase* arg)
		{
			return (return (::BestHTTP::Core::HostConnection*(*)(::BestHTTP::Connections::ConnectionBase*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_RECYCLECONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_LastProtocolSupportUpdate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_SET_LASTPROTOCOLSUPPORTUPDATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Core::HostProtocolSupport* get_ProtocolSupport()
		{
			return (return (::BestHTTP::Core::HostProtocolSupport*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_GET_PROTOCOLSUPPORT_OFFSET))(nullptr);
		}

		::System::String* get_VariantId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_GET_VARIANTID_OFFSET))(nullptr);
		}

		::System::Void set_ProtocolSupport(::BestHTTP::Core::HostProtocolSupport* arg)
		{
			((::System::Void(*)(::BestHTTP::Core::HostProtocolSupport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_SET_PROTOCOLSUPPORT_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_LastProtocolSupportUpdate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_GET_LASTPROTOCOLSUPPORTUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_Context(::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Logger::LoggingContext* get_Context()
		{
			return (return (::BestHTTP::Logger::LoggingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void AddProtocol(::BestHTTP::Core::HostProtocolSupport* arg)
		{
			((::System::Void(*)(::BestHTTP::Core::HostProtocolSupport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_ADDPROTOCOL_OFFSET))(arg, nullptr);
		}

		::System::Void LoadFrom(::System::Int32 arg, ::System::IO::BinaryReader* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::IO::BinaryReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_LOADFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SaveTo(::System::IO::BinaryWriter* arg)
		{
			((::System::Void(*)(::System::IO::BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_SAVETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean CloseConnectionAfterInactivity(::System::DateTime* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_CLOSECONNECTIONAFTERINACTIVITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Host(::BestHTTP::Core::HostDefinition* arg)
		{
			((::System::Void(*)(::BestHTTP::Core::HostDefinition*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_SET_HOST_OFFSET))(arg, nullptr);
		}

		::System::Void set_VariantId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_SET_VARIANTID_OFFSET))(str, nullptr);
		}

		::System::Int32 get_QueuedRequests()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_GET_QUEUEDREQUESTS_OFFSET))(nullptr);
		}

		::System::Void Shutdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_SHUTDOWN_OFFSET))(nullptr);
		}

		::BestHTTP::Core::HostConnection* TryToSendQueuedRequests()
		{
			return (return (::BestHTTP::Core::HostConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_TRYTOSENDQUEUEDREQUESTS_OFFSET))(nullptr);
		}

		::BestHTTP::Core::HostConnection* Send(::BestHTTP::HTTPRequest* arg)
		{
			return (return (::BestHTTP::Core::HostConnection*(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_SEND_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::ConnectionBase* GetNextAvailable(::BestHTTP::HTTPRequest* arg)
		{
			return (return (::BestHTTP::Connections::ConnectionBase*(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_GETNEXTAVAILABLE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Core::HostDefinition* get_Host()
		{
			return (return (::BestHTTP::Core::HostDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTION_GET_HOST_OFFSET))(nullptr);
		}

	};
}

