#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Core { class ProtocolEventInfo; }
namespace BestHTTP::Core { class IProtocol; }

#define BESTHTTP_CORE_PROTOCOLEVENTHELPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x8F1D30)
#define BESTHTTP_CORE_PROTOCOLEVENTHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8F1DC0)
#define BESTHTTP_CORE_PROTOCOLEVENTHELPER_PROCESSQUEUE_OFFSET UNITYSDK_OFFSET(0x8F1EC0)
#define BESTHTTP_CORE_PROTOCOLEVENTHELPER_ENQUEUEPROTOCOLEVENT_OFFSET UNITYSDK_OFFSET(0x8F25A0)
#define BESTHTTP_CORE_PROTOCOLEVENTHELPER_ADDPROTOCOL_OFFSET UNITYSDK_OFFSET(0x8F2640)
#define BESTHTTP_CORE_PROTOCOLEVENTHELPER_CANCELACTIVEPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x8F2730)

namespace BestHTTP::Core
{
	inline static constexpr unsigned int ProtocolEventHelper_TypeDefinitionIndex = 23408;

	class ProtocolEventHelper : public Il2CppObject
	{
	public:
		Il2CppObject* protocolEvents; // 0x0
		Il2CppObject* ActiveProtocols; // 0x8
		Il2CppObject* OnEvent; // 0x10

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_PROTOCOLEVENTHELPER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_PROTOCOLEVENTHELPER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void ProcessQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_PROTOCOLEVENTHELPER_PROCESSQUEUE_OFFSET))(nullptr);
		}

		::System::Void EnqueueProtocolEvent(::BestHTTP::Core::ProtocolEventInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::Core::ProtocolEventInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_PROTOCOLEVENTHELPER_ENQUEUEPROTOCOLEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void AddProtocol(::BestHTTP::Core::IProtocol* arg)
		{
			((::System::Void(*)(::BestHTTP::Core::IProtocol*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_PROTOCOLEVENTHELPER_ADDPROTOCOL_OFFSET))(arg, nullptr);
		}

		::System::Void CancelActiveProtocols()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_PROTOCOLEVENTHELPER_CANCELACTIVEPROTOCOLS_OFFSET))(nullptr);
		}

	};
}

