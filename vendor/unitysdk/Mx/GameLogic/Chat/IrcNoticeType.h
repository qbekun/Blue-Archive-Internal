#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Chat { class IrcNoticeType; }

namespace MX::GameLogic::Chat
{
	inline static constexpr unsigned int IrcNoticeType_TypeDefinitionIndex = 12765;

	class IrcNoticeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::GameLogic::Chat::IrcNoticeType* None; // 0x0
		::MX::GameLogic::Chat::IrcNoticeType* Apply; // 0x0
		::MX::GameLogic::Chat::IrcNoticeType* Join; // 0x0
		::MX::GameLogic::Chat::IrcNoticeType* Confer; // 0x0
		::MX::GameLogic::Chat::IrcNoticeType* Leave; // 0x0
		::MX::GameLogic::Chat::IrcNoticeType* Dismiss; // 0x0

	};
}

