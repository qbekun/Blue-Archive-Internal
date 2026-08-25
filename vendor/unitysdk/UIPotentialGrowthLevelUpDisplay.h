#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class MXButton;
class UIGrid;
namespace UnityEngine { class Transform; }
class UIWidget;
class PortraitSpineCharacter;

#define UIPOTENTIALGROWTHLEVELUPDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x272DA10)
#define UIPOTENTIALGROWTHLEVELUPDISPLAY_CO_SHOW_OFFSET UNITYSDK_OFFSET(0x272D930)
#define UIPOTENTIALGROWTHLEVELUPDISPLAY__CO_SETDATA_B__11_0_OFFSET UNITYSDK_OFFSET(0x272DA40)
#define UIPOTENTIALGROWTHLEVELUPDISPLAY_AWAKE_OFFSET UNITYSDK_OFFSET(0x272DA70)
#define UIPOTENTIALGROWTHLEVELUPDISPLAY_ONBACKGROUNDBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x272DB90)
#define UIPOTENTIALGROWTHLEVELUPDISPLAY_CO_SETDATA_OFFSET UNITYSDK_OFFSET(0x272D8A0)

	inline static constexpr unsigned int UIPotentialGrowthLevelUpDisplay_TypeDefinitionIndex = 7184;

	class UIPotentialGrowthLevelUpDisplay : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* displayAnimation; // 0x18
		MXButton* backgroundButton; // 0x20
		UIGrid* potentialGrowthStatsGrid; // 0x28
		::Il2CppArray<::System::Object*>* potentialGrowthStatRoots; // 0x30
		::Il2CppArray<::System::Object*>* potentialGrowthStatNameLabels; // 0x38
		::Il2CppArray<::System::Object*>* potentialGrowthStatLevelLabels; // 0x40
		::UnityEngine::Transform* spineCharacterRoot; // 0x48
		UIWidget* spineCharacterRenderQueueWidget; // 0x50
		PortraitSpineCharacter* spineCharacter; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTHLEVELUPDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Show()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTHLEVELUPDISPLAY_CO_SHOW_OFFSET))(nullptr);
		}

		::System::Void _Co_SetData_b__11_0(PortraitSpineCharacter* arg)
		{
			((::System::Void(*)(PortraitSpineCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTHLEVELUPDISPLAY__CO_SETDATA_B__11_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTHLEVELUPDISPLAY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnBackgroundButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTHLEVELUPDISPLAY_ONBACKGROUNDBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_SetData(::System::Int64 arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOTENTIALGROWTHLEVELUPDISPLAY_CO_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

