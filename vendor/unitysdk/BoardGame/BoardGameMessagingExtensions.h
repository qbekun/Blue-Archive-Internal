#pragma once
#include "../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class MessagingSystem; }
namespace BoardGame { class BoardGameUpdateData; }

#define BOARDGAME_BOARDGAMEMESSAGINGEXTENSIONS_TRIGGERBOARDGAMEMESSAGE_OFFSET UNITYSDK_OFFSET(0xE0B970)

namespace BoardGame
{
	inline static constexpr unsigned int BoardGameMessagingExtensions_TypeDefinitionIndex = 10312;

	class BoardGameMessagingExtensions : public Il2CppObject
	{
	public:
		::System::Void TriggerBoardGameMessage(::Assets::_MX::Program::Scripts::Network::MessagingSystem* arg, ::BoardGame::BoardGameUpdateData* arg2)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::MessagingSystem*, ::BoardGame::BoardGameUpdateData*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEMESSAGINGEXTENSIONS_TRIGGERBOARDGAMEMESSAGE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

