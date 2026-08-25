#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Chat { class IrcMessageType; }

namespace MX::GameLogic::Chat
{
	inline static constexpr unsigned int IrcMessageType_TypeDefinitionIndex = 12764;

	class IrcMessageType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::GameLogic::Chat::IrcMessageType* None; // 0x0
		::MX::GameLogic::Chat::IrcMessageType* Notice; // 0x0
		::MX::GameLogic::Chat::IrcMessageType* Sticker; // 0x0
		::MX::GameLogic::Chat::IrcMessageType* Chat; // 0x0
		::MX::GameLogic::Chat::IrcMessageType* HistoryCount; // 0x0
		::MX::GameLogic::Chat::IrcMessageType* SystemLocalNotice; // 0x0

	};
}

