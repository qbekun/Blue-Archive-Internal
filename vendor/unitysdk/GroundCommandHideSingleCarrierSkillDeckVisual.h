#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandHideSingleCarrierSkillDeck; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDHIDESINGLECARRIERSKILLDECKVISUAL_SETVISUALCARRIERSKILLCARDLIST_OFFSET UNITYSDK_OFFSET(0x15B1EB0)
#define GROUNDCOMMANDHIDESINGLECARRIERSKILLDECKVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B1FF0)
#define GROUNDCOMMANDHIDESINGLECARRIERSKILLDECKVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B2010)
#define GROUNDCOMMANDHIDESINGLECARRIERSKILLDECKVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B20D0)
#define GROUNDCOMMANDHIDESINGLECARRIERSKILLDECKVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B20E0)

	inline static constexpr unsigned int GroundCommandHideSingleCarrierSkillDeckVisual_TypeDefinitionIndex = 1154;

	class GroundCommandHideSingleCarrierSkillDeckVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandHideSingleCarrierSkillDeck* HideSingleSkillDeck; // 0x18

		::System::Void SetVisualCarrierSkillcardList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDESINGLECARRIERSKILLDECKVISUAL_SETVISUALCARRIERSKILLCARDLIST_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDESINGLECARRIERSKILLDECKVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDESINGLECARRIERSKILLDECKVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDESINGLECARRIERSKILLDECKVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDESINGLECARRIERSKILLDECKVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

