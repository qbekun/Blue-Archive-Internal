#pragma once
#include "unitysdk.h"

class MXButton;
class MXToggle;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class BoxCollider; }
class CharacterObject;
class UIEquipmentNormalGrowth;
class UIEquipmentBatchGrowth;

#define UIEQUIPMENTGROWTH_SETSLOTDATA_OFFSET UNITYSDK_OFFSET(0x23FD690)
#define UIEQUIPMENTGROWTH_SETBATCHGROWTHMODE_OFFSET UNITYSDK_OFFSET(0x23FD710)
#define UIEQUIPMENTGROWTH_CANINPUT_OFFSET UNITYSDK_OFFSET(0x23FC080)
#define UIEQUIPMENTGROWTH_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x24040B0)
#define UIEQUIPMENTGROWTH_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x2404290)
#define UIEQUIPMENTGROWTH_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2404340)
#define UIEQUIPMENTGROWTH__CO_LOADING_B__15_0_OFFSET UNITYSDK_OFFSET(0x24043D0)
#define UIEQUIPMENTGROWTH_ONBATCHMODECHANGED_OFFSET UNITYSDK_OFFSET(0x2404490)
#define UIEQUIPMENTGROWTH_.CTOR_OFFSET UNITYSDK_OFFSET(0x2404960)
#define UIEQUIPMENTGROWTH___N__0_OFFSET UNITYSDK_OFFSET(0x2404970)
#define UIEQUIPMENTGROWTH_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2404980)
#define UIEQUIPMENTGROWTH__CO_LOADING_B__15_1_OFFSET UNITYSDK_OFFSET(0x24049B0)
#define UIEQUIPMENTGROWTH_AWAKE_OFFSET UNITYSDK_OFFSET(0x2404A70)
#define UIEQUIPMENTGROWTH_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x2404BA0)

	inline static constexpr unsigned int UIEquipmentGrowth_TypeDefinitionIndex = 5449;

	class UIEquipmentGrowth : public Il2CppObject
	{
	public:
		MXButton* CloseButton; // 0xD8
		MXToggle* BatchGrowthToggle; // 0xE0
		::UnityEngine::GameObject* ToggleMark; // 0xE8
		::UnityEngine::GameObject* ToggleDisableMark; // 0xF0
		::UnityEngine::GameObject* BatchDisplay; // 0xF8
		::UnityEngine::GameObject* NormalDisplay; // 0x100
		::UnityEngine::BoxCollider* PopupCloseBG; // 0x108
		CharacterObject* characterObject; // 0x110
		::System::Boolean refreshTabSetting; // 0x118
		UIEquipmentNormalGrowth* normalGrowth; // 0x120
		UIEquipmentBatchGrowth* batchGrowth; // 0x128

		::System::Void SetSlotData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_SETSLOTDATA_OFFSET))(nullptr);
		}

		::System::Void SetBatchGrowthMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_SETBATCHGROWTHMODE_OFFSET))(nullptr);
		}

		::System::Void CanInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_CANINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void Initialized(CharacterObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(CharacterObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_INITIALIZED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void _Co_Loading_b__15_0(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH__CO_LOADING_B__15_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnBatchModeChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_ONBATCHMODECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH___N__0_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void _Co_Loading_b__15_1(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH__CO_LOADING_B__15_1_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTGROWTH_ONCLICKCLOSE_OFFSET))(nullptr);
		}

	};

