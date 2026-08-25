#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class IEncoder; }
namespace BestHTTP::SignalRCore { class HubConnection; }
namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }
namespace BestHTTP::SignalRCore::Messages { class Message; }
namespace BestHTTP::SignalRCore { class TransferModes; }

#define BESTHTTP_SIGNALRCORE_JSONPROTOCOL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x64F210)
#define BESTHTTP_SIGNALRCORE_JSONPROTOCOL_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x64F240)
#define BESTHTTP_SIGNALRCORE_JSONPROTOCOL_WITHSEPARATOR_OFFSET UNITYSDK_OFFSET(0x64F4C0)
#define BESTHTTP_SIGNALRCORE_JSONPROTOCOL_ENCODEMESSAGE_OFFSET UNITYSDK_OFFSET(0x64F5D0)
#define BESTHTTP_SIGNALRCORE_JSONPROTOCOL_GETREALARGUMENTS_OFFSET UNITYSDK_OFFSET(0x650340)
#define BESTHTTP_SIGNALRCORE_JSONPROTOCOL_SET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x650540)
#define BESTHTTP_SIGNALRCORE_JSONPROTOCOL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x650550)
#define BESTHTTP_SIGNALRCORE_JSONPROTOCOL_SET_ENCODER_OFFSET UNITYSDK_OFFSET(0x650560)
#define BESTHTTP_SIGNALRCORE_JSONPROTOCOL_PARSEMESSAGES_OFFSET UNITYSDK_OFFSET(0x650570)
#define BESTHTTP_SIGNALRCORE_JSONPROTOCOL_GET_ENCODER_OFFSET UNITYSDK_OFFSET(0x650AC0)
#define BESTHTTP_SIGNALRCORE_JSONPROTOCOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x650AD0)
#define BESTHTTP_SIGNALRCORE_JSONPROTOCOL_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x650B60)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int JsonProtocol_TypeDefinitionIndex = 21450;

	class JsonProtocol : public Il2CppObject
	{
	public:
		::System::Char Separator; // 0x0
		::BestHTTP::SignalRCore::IEncoder* _Encoder_k__BackingField; // 0x10
		::BestHTTP::SignalRCore::HubConnection* _Connection_k__BackingField; // 0x18

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_JSONPROTOCOL_GET_NAME_OFFSET))(nullptr);
		}

		::System::Object* ConvertTo(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_JSONPROTOCOL_CONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferSegment* WithSeparator(::System::String* str)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_JSONPROTOCOL_WITHSEPARATOR_OFFSET))(str, nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferSegment* EncodeMessage(::BestHTTP::SignalRCore::Messages::Message* arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::BestHTTP::SignalRCore::Messages::Message*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_JSONPROTOCOL_ENCODEMESSAGE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRealArguments(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_JSONPROTOCOL_GETREALARGUMENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Connection(::BestHTTP::SignalRCore::HubConnection* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::HubConnection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_JSONPROTOCOL_SET_CONNECTION_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalRCore::TransferModes* get_Type()
		{
			return (return (::BestHTTP::SignalRCore::TransferModes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_JSONPROTOCOL_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Encoder(::BestHTTP::SignalRCore::IEncoder* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::IEncoder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_JSONPROTOCOL_SET_ENCODER_OFFSET))(arg, nullptr);
		}

		::System::Void ParseMessages(::BestHTTP::PlatformSupport::Memory::BufferSegment* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::BestHTTP::PlatformSupport::Memory::BufferSegment*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_JSONPROTOCOL_PARSEMESSAGES_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SignalRCore::IEncoder* get_Encoder()
		{
			return (return (::BestHTTP::SignalRCore::IEncoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_JSONPROTOCOL_GET_ENCODER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SignalRCore::IEncoder* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::IEncoder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_JSONPROTOCOL_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalRCore::HubConnection* get_Connection()
		{
			return (return (::BestHTTP::SignalRCore::HubConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_JSONPROTOCOL_GET_CONNECTION_OFFSET))(nullptr);
		}

	};
}

