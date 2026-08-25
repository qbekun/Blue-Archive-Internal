#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandSetCarrierSkillDeck; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDSETCARRIERSKILLDECKVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B8440)
#define GROUNDCOMMANDSETCARRIERSKILLDECKVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B8500)
#define GROUNDCOMMANDSETCARRIERSKILLDECKVISUAL_CLOSECARRIERSKILLBULLETTIME_OFFSET UNITYSDK_OFFSET(0x15B8510)
#define GROUNDCOMMANDSETCARRIERSKILLDECKVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B8630)
#define GROUNDCOMMANDSETCARRIERSKILLDECKVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B8640)

	inline static constexpr unsigned int GroundCommandSetCarrierSkillDeckVisual_TypeDefinitionIndex = 1184;

	class GroundCommandSetCarrierSkillDeckVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandSetCarrierSkillDeck* SetSkillDeck; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETCARRIERSKILLDECKVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETCARRIERSKILLDECKVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CloseCarrierSkillBulletTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETCARRIERSKILLDECKVISUAL_CLOSECARRIERSKILLBULLETTIME_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETCARRIERSKILLDECKVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETCARRIERSKILLDECKVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

	};

