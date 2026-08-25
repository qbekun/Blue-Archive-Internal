#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandChangeSkillCard; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDCHANGESKILLCARDVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15ADE80)
#define GROUNDCOMMANDCHANGESKILLCARDVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15ADE90)
#define GROUNDCOMMANDCHANGESKILLCARDVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15ADEA0)
#define GROUNDCOMMANDCHANGESKILLCARDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15ADF60)

	inline static constexpr unsigned int GroundCommandChangeSkillCardVisual_TypeDefinitionIndex = 1129;

	class GroundCommandChangeSkillCardVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandChangeSkillCard* ChangeSkillCard; // 0x18

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGESKILLCARDVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGESKILLCARDVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGESKILLCARDVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGESKILLCARDVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

