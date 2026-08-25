#pragma once
#include "../../../../unitysdk.h"

namespace NPA { class NPLoginType; }
namespace NPA::Editor { class NXToyLocaleManager; }
namespace UnityEngine { class Sprite; }

#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DBFA10)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9DCBFE0)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_SETLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x9DCBFF0)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_SETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9DCC000)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DCC010)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9DCC020)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_ONCLICK_OFFSET UNITYSDK_OFFSET(0x9DCCA00)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_GETLOGINTYPEICON_OFFSET UNITYSDK_OFFSET(0x9DCC750)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_GETLOGINTYPEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9DCC890)

namespace NPA::Editor::Plate::View
{
	inline static constexpr unsigned int NXPNexonUnregisterView_TypeDefinitionIndex = 26459;

	class NXPNexonUnregisterView : public Il2CppObject
	{
	public:
		::System::String* plateImageBaseUrl; // 0x48
		::System::String* unregisterViewPrefabUrl; // 0x50
		::System::String* unregisterHeaderBasePath; // 0x58
		::System::String* unregisterContentsBasePath; // 0x60
		::System::String* title; // 0x68
		::NPA::NPLoginType* loginType; // 0x70
		::System::String* displayName; // 0x78
		Il2CppObject* clickCallback; // 0x80
		::NPA::Editor::NXToyLocaleManager* localeManager; // 0x88

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetLoginType(::NPA::NPLoginType* arg)
		{
			((::System::Void(*)(::NPA::NPLoginType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_SETLOGINTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDisplayName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_SETDISPLAYNAME_OFFSET))(str, nullptr);
		}

		::System::Void SetClickCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_SETCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_ONCLICK_OFFSET))(nullptr);
		}

		::UnityEngine::Sprite* GetLoginTypeIcon()
		{
			return (return (::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_GETLOGINTYPEICON_OFFSET))(nullptr);
		}

		::System::String* GetLoginTypeDescription()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERVIEW_GETLOGINTYPEDESCRIPTION_OFFSET))(nullptr);
		}

	};
}

