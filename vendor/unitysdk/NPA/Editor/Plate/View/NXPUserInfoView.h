#pragma once
#include "../../../../unitysdk.h"

namespace NPA { class NPLoginType; }
namespace NPA::Editor { class NXToyLocaleManager; }
namespace UnityEngine::UI { class Toggle; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine { class Sprite; }

#define NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE9D20)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9BE9E60)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_SETLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x9BE9E70)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_SETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9BE9E80)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_SETNPACODE_OFFSET UNITYSDK_OFFSET(0x9BE9E90)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9BE9EA0)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9BE9EC0)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_ONCLICK_OFFSET UNITYSDK_OFFSET(0x9BEAC90)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_UPDATEDELELETESTATE_OFFSET UNITYSDK_OFFSET(0x9BEACE0)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_UPDATEEXPOSUREHISTORYTOGGLESTATE_OFFSET UNITYSDK_OFFSET(0x9BEAE30)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_GETLOGINTYPEICON_OFFSET UNITYSDK_OFFSET(0x9BEA9D0)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_GETLOGINTYPEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9BEAB10)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW__LOAD_B__18_0_OFFSET UNITYSDK_OFFSET(0x9BEAE60)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW__LOAD_B__18_1_OFFSET UNITYSDK_OFFSET(0x9BEAEE0)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW__LOAD_B__18_2_OFFSET UNITYSDK_OFFSET(0x9BEAF50)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW__LOAD_B__18_3_OFFSET UNITYSDK_OFFSET(0x9BEAFE0)

namespace NPA::Editor::Plate::View
{
	inline static constexpr unsigned int NXPUserInfoView_TypeDefinitionIndex = 26470;

	class NXPUserInfoView : public Il2CppObject
	{
	public:
		::System::String* plateImageBaseUrl; // 0x48
		::System::String* userInfoViewPrefabUrl; // 0x50
		::System::String* userInfoHeaderBasePath; // 0x58
		::System::String* userInfoContentsBasePath; // 0x60
		::System::String* title; // 0x68
		::NPA::NPLoginType* loginType; // 0x70
		::System::String* displayName; // 0x78
		::System::String* npaCode; // 0x80
		Il2CppObject* clickCallback; // 0x88
		::NPA::Editor::NXToyLocaleManager* localeManager; // 0x90
		::UnityEngine::UI::Toggle* exposureHistoryToggle; // 0x98
		::UnityEngine::UI::Button* deleteButton; // 0xA0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetLoginType(::NPA::NPLoginType* arg)
		{
			((::System::Void(*)(::NPA::NPLoginType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_SETLOGINTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDisplayName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_SETDISPLAYNAME_OFFSET))(str, nullptr);
		}

		::System::Void SetNpaCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_SETNPACODE_OFFSET))(str, nullptr);
		}

		::System::Void SetClickCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_SETCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void OnClick(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_ONCLICK_OFFSET))(str, arg, nullptr);
		}

		::System::Void UpdateDeleleteState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_UPDATEDELELETESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateExposureHistoryToggleState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_UPDATEEXPOSUREHISTORYTOGGLESTATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Sprite* GetLoginTypeIcon()
		{
			return (return (::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_GETLOGINTYPEICON_OFFSET))(nullptr);
		}

		::System::String* GetLoginTypeDescription()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW_GETLOGINTYPEDESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void _Load_b__18_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW__LOAD_B__18_0_OFFSET))(nullptr);
		}

		::System::Void _Load_b__18_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW__LOAD_B__18_1_OFFSET))(nullptr);
		}

		::System::Void _Load_b__18_2(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW__LOAD_B__18_2_OFFSET))(arg, nullptr);
		}

		::System::Void _Load_b__18_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERINFOVIEW__LOAD_B__18_3_OFFSET))(nullptr);
		}

	};
}

