#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::Logic::Battles { class GroundCommandSetSingleCarrierSkillDeck; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDSETSINGLECARRIERSKILLDECKVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B8CD0)
#define GROUNDCOMMANDSETSINGLECARRIERSKILLDECKVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B8CE0)
#define GROUNDCOMMANDSETSINGLECARRIERSKILLDECKVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B8CF0)
#define GROUNDCOMMANDSETSINGLECARRIERSKILLDECKVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B8DB0)

	inline static constexpr unsigned int GroundCommandSetSingleCarrierSkillDeckVisual_TypeDefinitionIndex = 1190;

	class GroundCommandSetSingleCarrierSkillDeckVisual : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* UIPrefabToFormatAndPath; // 0x18
		::MX::Logic::Battles::GroundCommandSetSingleCarrierSkillDeck* SetSingleCarrierSkillDeck; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSINGLECARRIERSKILLDECKVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSINGLECARRIERSKILLDECKVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSINGLECARRIERSKILLDECKVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSINGLECARRIERSKILLDECKVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

	};

