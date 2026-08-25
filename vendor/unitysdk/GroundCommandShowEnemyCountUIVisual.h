#pragma once
#include "unitysdk.h"

class GroundCommandShowEnemyCountUI;
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDSHOWENEMYCOUNTUIVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BA380)
#define GROUNDCOMMANDSHOWENEMYCOUNTUIVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BA440)
#define GROUNDCOMMANDSHOWENEMYCOUNTUIVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15BA450)
#define GROUNDCOMMANDSHOWENEMYCOUNTUIVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15BA510)

	inline static constexpr unsigned int GroundCommandShowEnemyCountUIVisual_TypeDefinitionIndex = 1199;

	class GroundCommandShowEnemyCountUIVisual : public Il2CppObject
	{
	public:
		GroundCommandShowEnemyCountUI* command; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWENEMYCOUNTUIVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWENEMYCOUNTUIVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWENEMYCOUNTUIVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWENEMYCOUNTUIVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

