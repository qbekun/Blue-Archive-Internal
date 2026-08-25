#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandHideCarrierSkillDeck; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDHIDECARRIERSKILLDECKVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B1100)
#define GROUNDCOMMANDHIDECARRIERSKILLDECKVISUAL_SETVISUALCARRIERSKILLCARDLIST_OFFSET UNITYSDK_OFFSET(0x15B11C0)
#define GROUNDCOMMANDHIDECARRIERSKILLDECKVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B1300)
#define GROUNDCOMMANDHIDECARRIERSKILLDECKVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B1320)
#define GROUNDCOMMANDHIDECARRIERSKILLDECKVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B1330)

	inline static constexpr unsigned int GroundCommandHideCarrierSkillDeckVisual_TypeDefinitionIndex = 1151;

	class GroundCommandHideCarrierSkillDeckVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandHideCarrierSkillDeck* HideSkillDeck; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDECARRIERSKILLDECKVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void SetVisualCarrierSkillcardList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDECARRIERSKILLDECKVISUAL_SETVISUALCARRIERSKILLCARDLIST_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDECARRIERSKILLDECKVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDECARRIERSKILLDECKVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDECARRIERSKILLDECKVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

