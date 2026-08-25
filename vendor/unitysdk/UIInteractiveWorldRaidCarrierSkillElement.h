#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
class UILabel;
class MXButton;
namespace UnityEngine { class Vector2; }

#define UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_GET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0x2612F00)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2612F10)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2613030)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_REMOVE_CLICKED_OFFSET UNITYSDK_OFFSET(0x2613040)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_SHOWUNLOCKFX_OFFSET UNITYSDK_OFFSET(0x26130E0)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_ADD_CLICKED_OFFSET UNITYSDK_OFFSET(0x26131E0)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2613280)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_REFRESH_OFFSET UNITYSDK_OFFSET(0x26132C0)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_SHOWLEVELUPFX_OFFSET UNITYSDK_OFFSET(0x2613420)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_ONBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26134B0)

	inline static constexpr unsigned int UIInteractiveWorldRaidCarrierSkillElement_TypeDefinitionIndex = 6505;

	class UIInteractiveWorldRaidCarrierSkillElement : public Il2CppObject
	{
	public:
		Il2CppObject* Clicked; // 0x18
		::UnityEngine::GameObject* activeObj; // 0x20
		::UnityEngine::GameObject* inactiveObj; // 0x28
		::UnityEngine::GameObject* unlockFxObj; // 0x30
		::UnityEngine::Animation* unlockAni; // 0x38
		::UnityEngine::GameObject* levelUpFxObj; // 0x40
		::MX::Logic::BattleEntities::SkillSlot* skillSlot; // 0x48
		UILabel* skillLevel; // 0x50
		UILabel* skillName; // 0x58
		MXButton* button; // 0x60
		::UnityEngine::Vector2* tooltipOffset; // 0x68
		::System::String* _groupId; // 0x70
		::System::Int32 _level; // 0x78

		::MX::Logic::BattleEntities::SkillSlot* get_SkillSlot()
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_GET_SKILLSLOT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void remove_Clicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_REMOVE_CLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void ShowUnlockFx()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_SHOWUNLOCKFX_OFFSET))(nullptr);
		}

		::System::Void add_Clicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_ADD_CLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_REFRESH_OFFSET))(str, arg, nullptr);
		}

		::System::Void ShowLevelUpFx()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_SHOWLEVELUPFX_OFFSET))(nullptr);
		}

		::System::Void OnButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLELEMENT_ONBUTTONCLICK_OFFSET))(nullptr);
		}

	};

