#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexaTileMap; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }

#define HEXACOMMANDVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0xF6D630)
#define HEXACOMMANDVISUAL_LOAD_OFFSET UNITYSDK_OFFSET(0xF6D640)
#define HEXACOMMANDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6CC90)
#define HEXACOMMANDVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x000000)
#define HEXACOMMANDVISUAL_SAVE_OFFSET UNITYSDK_OFFSET(0xF6D650)
#define HEXACOMMANDVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x000000)
#define HEXACOMMANDVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xF6D660)

	inline static constexpr unsigned int HexaCommandVisual_TypeDefinitionIndex = 785;

	class HexaCommandVisual : public Il2CppObject
	{
	public:
		::System::Void Visualize(::MX::Campaign::HexaTileMap* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDVISUAL_LOAD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* GetCommand()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDVISUAL_SAVE_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDVISUAL_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};

