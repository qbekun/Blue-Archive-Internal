#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Push { class NXPPushMenuOption; }
namespace UnityEngine::UI { class Toggle; }
namespace UnityEngine::UI { class Text; }
namespace NPA::Editor { class NXToyLocaleManager; }

#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DBD7D0)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_SETMENUOPTION_OFFSET UNITYSDK_OFFSET(0x9DC7920)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_SETPOLICIES_OFFSET UNITYSDK_OFFSET(0x9DC7930)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DC7940)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_VERIFYOPTIONS_OFFSET UNITYSDK_OFFSET(0x9DC7950)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9DC7B00)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_UPDATEADPUSHPOLICESTATUS_OFFSET UNITYSDK_OFFSET(0x9DBDE10)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_UPDATENIGHTPUSHTITLECOLOR_OFFSET UNITYSDK_OFFSET(0x9DC8C60)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_UPDATENIGHTPUSHPOLICESTATUS_OFFSET UNITYSDK_OFFSET(0x9DBE0C0)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_UPDATESMSPOLICESTATUS_OFFSET UNITYSDK_OFFSET(0x9DC8D20)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_UPDATEEMAILPOLICESTATUS_OFFSET UNITYSDK_OFFSET(0x9DC8D40)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_CHECKPOLICYSTATUS_OFFSET UNITYSDK_OFFSET(0x9DC8D60)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW__LOAD_B__18_0_OFFSET UNITYSDK_OFFSET(0x9DC8DC0)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW__LOAD_B__18_1_OFFSET UNITYSDK_OFFSET(0x9DC8DE0)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW__LOAD_B__18_2_OFFSET UNITYSDK_OFFSET(0x9DC8E00)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW__LOAD_B__18_3_OFFSET UNITYSDK_OFFSET(0x9DC8ED0)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW__LOAD_B__18_4_OFFSET UNITYSDK_OFFSET(0x9DC8F50)
#define NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW__LOAD_B__18_5_OFFSET UNITYSDK_OFFSET(0x9DC8FD0)

namespace NPA::Editor::Plate::View
{
	inline static constexpr unsigned int NXPAdInformationView_TypeDefinitionIndex = 26455;

	class NXPAdInformationView : public Il2CppObject
	{
	public:
		::System::String* adInfoViewPrefabUrl; // 0x0
		::System::String* adInfoItemPrefabUrl; // 0x0
		::System::String* adInfoHeaderBasePath; // 0x0
		::System::String* adInfoContentsBasePath; // 0x0
		::NPA::Editor::Push::NXPPushMenuOption* menuOption; // 0x48
		::UnityEngine::UI::Toggle* adPushToggle; // 0x50
		::UnityEngine::UI::Toggle* nightPushToggle; // 0x58
		::UnityEngine::UI::Text* nightPushTitle; // 0x60
		::UnityEngine::UI::Toggle* smsToggle; // 0x68
		::UnityEngine::UI::Toggle* emailToggle; // 0x70
		Il2CppObject* policies; // 0x78
		Il2CppObject* clickCallback; // 0x80
		::NPA::Editor::NXToyLocaleManager* localeManager; // 0x88

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetMenuOption(::NPA::Editor::Push::NXPPushMenuOption* arg)
		{
			((::System::Void(*)(::NPA::Editor::Push::NXPPushMenuOption*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_SETMENUOPTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetPolicies(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_SETPOLICIES_OFFSET))(arg, nullptr);
		}

		::System::Void SetClickCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_SETCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void VerifyOptions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_VERIFYOPTIONS_OFFSET))(nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void UpdateAdPushPoliceStatus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_UPDATEADPUSHPOLICESTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateNightPushTitleColor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_UPDATENIGHTPUSHTITLECOLOR_OFFSET))(nullptr);
		}

		::System::Void UpdateNightPushPoliceStatus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_UPDATENIGHTPUSHPOLICESTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateSMSPoliceStatus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_UPDATESMSPOLICESTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateEmailPoliceStatus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_UPDATEEMAILPOLICESTATUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckPolicyStatus(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW_CHECKPOLICYSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void _Load_b__18_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW__LOAD_B__18_0_OFFSET))(nullptr);
		}

		::System::Void _Load_b__18_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW__LOAD_B__18_1_OFFSET))(nullptr);
		}

		::System::Void _Load_b__18_2(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW__LOAD_B__18_2_OFFSET))(arg, nullptr);
		}

		::System::Void _Load_b__18_3(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW__LOAD_B__18_3_OFFSET))(arg, nullptr);
		}

		::System::Void _Load_b__18_4(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW__LOAD_B__18_4_OFFSET))(arg, nullptr);
		}

		::System::Void _Load_b__18_5(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPADINFORMATIONVIEW__LOAD_B__18_5_OFFSET))(arg, nullptr);
		}

	};
}

