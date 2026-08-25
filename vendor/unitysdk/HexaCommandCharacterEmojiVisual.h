#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandCharacterEmoji; }
namespace FlatData { class EmojiEvent; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }
namespace MX::Campaign { class HexaTileMap; }

#define HEXACOMMANDCHARACTEREMOJIVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0xE55140)
#define HEXACOMMANDCHARACTEREMOJIVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0xE55150)
#define HEXACOMMANDCHARACTEREMOJIVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xE55280)
#define HEXACOMMANDCHARACTEREMOJIVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0xE552F0)

	inline static constexpr unsigned int HexaCommandCharacterEmojiVisual_TypeDefinitionIndex = 775;

	class HexaCommandCharacterEmojiVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandCharacterEmoji* CharacterEmoji; // 0x18
		::FlatData::EmojiEvent* emojiEvent; // 0x20

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* GetCommand()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDCHARACTEREMOJIVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Campaign::HexaTileMap* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDCHARACTEREMOJIVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDCHARACTEREMOJIVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDCHARACTEREMOJIVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

