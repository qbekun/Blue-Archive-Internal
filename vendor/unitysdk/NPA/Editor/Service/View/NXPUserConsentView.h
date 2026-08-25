#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Transform; }

#define NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9C00790)
#define NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_SETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9C007A0)
#define NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_SETCONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9C007B0)
#define NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_SETCANCELBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9C007C0)
#define NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_SETONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C007D0)
#define NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9C007E0)
#define NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x9C00BE0)
#define NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x9C00C40)
#define NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C00440)

namespace NPA::Editor::Service::View
{
	inline static constexpr unsigned int NXPUserConsentView_TypeDefinitionIndex = 26526;

	class NXPUserConsentView : public Il2CppObject
	{
	public:
		::System::String* userConsentViewPrefabUrl; // 0x48
		::System::String* userConsentHeaderBasePath; // 0x50
		::System::String* userConsentContentsBasePath; // 0x58
		::System::String* title; // 0x60
		::System::String* description; // 0x68
		Il2CppObject* clickCallback; // 0x70
		::System::String* confirmButtonText; // 0x78
		::System::String* cancelButtonText; // 0x80
		::UnityEngine::Transform* confirmButtonTransform; // 0x88
		::UnityEngine::Transform* cancelButtonTransform; // 0x90

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetDescription(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_SETDESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void SetConfirmButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_SETCONFIRMBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetCancelButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_SETCANCELBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetOnClickCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_SETONCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void OnConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_ONCONFIRM_OFFSET))(nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_ONCANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_VIEW_NXPUSERCONSENTVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

