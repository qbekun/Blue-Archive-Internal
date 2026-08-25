#pragma once
#include "unitysdk.h"

class MXButton;
class MXToggle;
class UISkillNormalGrowth;
class UISkillBatchGrowth;
namespace UnityEngine { class GameObject; }
class CharacterObject;

#define UIPOPUP_SKILL_LEVELUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2733E00)
#define UIPOPUP_SKILL_LEVELUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x2733E10)
#define UIPOPUP_SKILL_LEVELUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2733EA0)
#define UIPOPUP_SKILL_LEVELUP_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x2734010)
#define UIPOPUP_SKILL_LEVELUP_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x2734120)
#define UIPOPUP_SKILL_LEVELUP_CANINPUT_OFFSET UNITYSDK_OFFSET(0x2734310)
#define UIPOPUP_SKILL_LEVELUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x27343B0)
#define UIPOPUP_SKILL_LEVELUP_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x2734550)

	inline static constexpr unsigned int UIPopup_Skill_LevelUp_TypeDefinitionIndex = 7202;

	class UIPopup_Skill_LevelUp : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXToggle* batchGrowthToggle; // 0xE0
		UISkillNormalGrowth* normalGrowth; // 0xE8
		UISkillBatchGrowth* batchGrowth; // 0xF0
		::UnityEngine::GameObject* exNormalEffect; // 0xF8
		::UnityEngine::GameObject* exbatchEffect; // 0x100
		CharacterObject* characterObject; // 0x108
		::System::Boolean isRefreshDisplay; // 0x110

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILL_LEVELUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILL_LEVELUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILL_LEVELUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILL_LEVELUP_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILL_LEVELUP_ONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CanInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILL_LEVELUP_CANINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILL_LEVELUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialized(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILL_LEVELUP_INITIALIZED_OFFSET))(arg, arg2, nullptr);
		}

	};

