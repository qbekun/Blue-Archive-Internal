#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UI { class Toggle; }

#define NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9DCCA70)
#define NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_SETBUTTONNAME_OFFSET UNITYSDK_OFFSET(0x9DCCA80)
#define NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DCCA90)
#define NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9DCCAA0)
#define NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_ONCLICK_OFFSET UNITYSDK_OFFSET(0x9DCD0D0)
#define NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_SETOPENAPIPOLICYTOGGLESTATE_OFFSET UNITYSDK_OFFSET(0x9DCD0F0)
#define NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_LOADOPENAPIPOLICYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9DC0440)
#define NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_UPDATEOPENAPIPOLICYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9DC04E0)
#define NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DC0290)
#define NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW__LOAD_B__11_0_OFFSET UNITYSDK_OFFSET(0x9DCD130)

namespace NPA::Editor::Plate::View
{
	inline static constexpr unsigned int NXPOpenApiPolicyView_TypeDefinitionIndex = 26460;

	class NXPOpenApiPolicyView : public Il2CppObject
	{
	public:
		::System::String* openApiPolicyViewPrefabUrl; // 0x48
		::System::String* openApiPolicyHeaderBasePath; // 0x50
		::System::String* openApiPolicyContentsBasePath; // 0x58
		::UnityEngine::UI::Toggle* policyToggle; // 0x60
		::System::String* title; // 0x68
		::System::String* buttonName; // 0x70
		::System::Boolean agreed; // 0x78
		Il2CppObject* clickCallback; // 0x80

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetButtonName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_SETBUTTONNAME_OFFSET))(str, nullptr);
		}

		::System::Void SetClickCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_SETCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void OnClick(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_ONCLICK_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetOpenApiPolicyToggleState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_SETOPENAPIPOLICYTOGGLESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void LoadOpenApiPolicyComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_LOADOPENAPIPOLICYCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateOpenApiPolicyComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_UPDATEOPENAPIPOLICYCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Load_b__11_0(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPOPENAPIPOLICYVIEW__LOAD_B__11_0_OFFSET))(arg, nullptr);
		}

	};
}

