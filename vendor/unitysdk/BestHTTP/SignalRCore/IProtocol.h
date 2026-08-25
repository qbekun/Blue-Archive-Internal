#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class HubConnection; }
namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }
namespace BestHTTP::SignalRCore::Messages { class Message; }
namespace BestHTTP::SignalRCore { class TransferModes; }
namespace BestHTTP::SignalRCore { class IEncoder; }

#define BESTHTTP_SIGNALRCORE_IPROTOCOL_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IPROTOCOL_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IPROTOCOL_ENCODEMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IPROTOCOL_PARSEMESSAGES_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IPROTOCOL_GETREALARGUMENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IPROTOCOL_SET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IPROTOCOL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IPROTOCOL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IPROTOCOL_GET_ENCODER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int IProtocol_TypeDefinitionIndex = 21449;

	class IProtocol : public Il2CppObject
	{
	public:
		::System::Object* ConvertTo(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IPROTOCOL_CONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SignalRCore::HubConnection* get_Connection()
		{
			return (return (::BestHTTP::SignalRCore::HubConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IPROTOCOL_GET_CONNECTION_OFFSET))(nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferSegment* EncodeMessage(::BestHTTP::SignalRCore::Messages::Message* arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::BestHTTP::SignalRCore::Messages::Message*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IPROTOCOL_ENCODEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ParseMessages(::BestHTTP::PlatformSupport::Memory::BufferSegment* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::BestHTTP::PlatformSupport::Memory::BufferSegment*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IPROTOCOL_PARSEMESSAGES_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRealArguments(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IPROTOCOL_GETREALARGUMENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Connection(::BestHTTP::SignalRCore::HubConnection* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::HubConnection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IPROTOCOL_SET_CONNECTION_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalRCore::TransferModes* get_Type()
		{
			return (return (::BestHTTP::SignalRCore::TransferModes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IPROTOCOL_GET_TYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IPROTOCOL_GET_NAME_OFFSET))(nullptr);
		}

		::BestHTTP::SignalRCore::IEncoder* get_Encoder()
		{
			return (return (::BestHTTP::SignalRCore::IEncoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IPROTOCOL_GET_ENCODER_OFFSET))(nullptr);
		}

	};
}

