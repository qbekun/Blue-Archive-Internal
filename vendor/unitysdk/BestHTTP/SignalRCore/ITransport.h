#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class TransportTypes; }
namespace BestHTTP::SignalRCore { class TransportStates; }
namespace BestHTTP::SignalRCore { class TransferModes; }
namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }

#define BESTHTTP_SIGNALRCORE_ITRANSPORT_STARTCLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_ITRANSPORT_ADD_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_ITRANSPORT_REMOVE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_ITRANSPORT_GET_TRANSPORTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_ITRANSPORT_STARTCONNECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_ITRANSPORT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_ITRANSPORT_GET_TRANSFERMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_ITRANSPORT_SEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_ITRANSPORT_GET_ERRORREASON_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int ITransport_TypeDefinitionIndex = 21424;

	class ITransport : public Il2CppObject
	{
	public:
		::System::Void StartClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ITRANSPORT_STARTCLOSE_OFFSET))(nullptr);
		}

		::System::Void add_OnStateChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ITRANSPORT_ADD_ONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnStateChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ITRANSPORT_REMOVE_ONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalRCore::TransportTypes* get_TransportType()
		{
			return (return (::BestHTTP::SignalRCore::TransportTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ITRANSPORT_GET_TRANSPORTTYPE_OFFSET))(nullptr);
		}

		::System::Void StartConnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ITRANSPORT_STARTCONNECT_OFFSET))(nullptr);
		}

		::BestHTTP::SignalRCore::TransportStates* get_State()
		{
			return (return (::BestHTTP::SignalRCore::TransportStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ITRANSPORT_GET_STATE_OFFSET))(nullptr);
		}

		::BestHTTP::SignalRCore::TransferModes* get_TransferMode()
		{
			return (return (::BestHTTP::SignalRCore::TransferModes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ITRANSPORT_GET_TRANSFERMODE_OFFSET))(nullptr);
		}

		::System::Void Send(::BestHTTP::PlatformSupport::Memory::BufferSegment* arg)
		{
			((::System::Void(*)(::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ITRANSPORT_SEND_OFFSET))(arg, nullptr);
		}

		::System::String* get_ErrorReason()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_ITRANSPORT_GET_ERRORREASON_OFFSET))(nullptr);
		}

	};
}

