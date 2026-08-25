#pragma once
#include "../../unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
namespace MXField::Shared::Data { class FieldCurtainCallFreeModeInfo; }
namespace MXField::Core::Save { class FieldSaveRepository; }
namespace MXField::Core::Save { class FieldSaveSO; }
class UIPopup_System;

#define MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_SET_LOCKLOCALLIZEKEY_OFFSET UNITYSDK_OFFSET(0xE8CED0)
#define MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_PLAYUNLOCKANI_OFFSET UNITYSDK_OFFSET(0xE8CEE0)
#define MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_GET_LOCKLOCALLIZEKEY_OFFSET UNITYSDK_OFFSET(0xE8D170)
#define MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xE8D180)
#define MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_NEEDPLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0xE8D1D0)
#define MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0xE8D450)
#define MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE8CBF0)
#define MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0xE8D7F0)
#define MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_ENTERFIELD_OFFSET UNITYSDK_OFFSET(0xE8D650)
#define MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON__ONCLICKENTER_B__15_0_OFFSET UNITYSDK_OFFSET(0xE8D920)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldFreeModeUnitButton_TypeDefinitionIndex = 10676;

	class UIFieldFreeModeUnitButton : public Il2CppObject
	{
	public:
		MXButton* unitButton; // 0x18
		::UnityEngine::GameObject* enterButtonObject; // 0x20
		::UnityEngine::GameObject* lockButtonObject; // 0x28
		::UnityEngine::Animation* unlockAnimation; // 0x30
		::System::String* unlockAnimationName; // 0x38
		::Il2CppArray<::System::Object*>* fxObjects; // 0x40
		::System::String* _LockLocallizeKey_k__BackingField; // 0x48
		::MXField::Shared::Data::FieldCurtainCallFreeModeInfo* freeModeInfo; // 0x50
		::System::Boolean isDayUnlocked; // 0x58
		::System::Boolean needPlayUnlockAni; // 0x59

		::System::Void set_LockLocallizeKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_SET_LOCKLOCALLIZEKEY_OFFSET))(str, nullptr);
		}

		::System::Void PlayUnlockAni()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_PLAYUNLOCKANI_OFFSET))(nullptr);
		}

		::System::String* get_LockLocallizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_GET_LOCKLOCALLIZEKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean NeedPlayUnlockAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_NEEDPLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXField::Shared::Data::FieldCurtainCallFreeModeInfo* arg, ::System::String* str)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldCurtainCallFreeModeInfo*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_INITIALIZE_OFFSET))(arg, str, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void EnterField(::MXField::Core::Save::FieldSaveRepository* arg, ::MXField::Core::Save::FieldSaveSO* arg2)
		{
			((::System::Void(*)(::MXField::Core::Save::FieldSaveRepository*, ::MXField::Core::Save::FieldSaveSO*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON_ENTERFIELD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnClickEnter_b__15_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDFREEMODEUNITBUTTON__ONCLICKENTER_B__15_0_OFFSET))(arg, nullptr);
		}

	};
}

