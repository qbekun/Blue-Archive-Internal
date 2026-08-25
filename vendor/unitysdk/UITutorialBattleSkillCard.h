#pragma once
#include "unitysdk.h"

class UISkillCard;
namespace UnityEngine { class BoxCollider; }

#define UITUTORIALBATTLESKILLCARD_ONPRESS_OFFSET UNITYSDK_OFFSET(0xB7FD10)
#define UITUTORIALBATTLESKILLCARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB7FDD0)
#define UITUTORIALBATTLESKILLCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xB7FF40)

	inline static constexpr unsigned int UITutorialBattleSkillCard_TypeDefinitionIndex = 8512;

	class UITutorialBattleSkillCard : public Il2CppObject
	{
	public:
		UISkillCard* uiSkillCard; // 0x18
		::UnityEngine::BoxCollider* boxCollider; // 0x20

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALBATTLESKILLCARD_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALBATTLESKILLCARD_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALBATTLESKILLCARD_.CTOR_OFFSET))(nullptr);
		}

	};

