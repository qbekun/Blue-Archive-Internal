#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace NPA::Editor::Auth::View { class NXPAccountLinkPickerItemView; }
namespace NPA::Editor::Auth::AccountLink { class Link; }

#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9CB08B0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_SETONITEMCLICKEDACTION_OFFSET UNITYSDK_OFFSET(0x9CB2140)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_SETONABORTACTION_OFFSET UNITYSDK_OFFSET(0x9CA9360)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_SETRESOLVEMODE_OFFSET UNITYSDK_OFFSET(0x9CA91A0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_SETCHANGEDMODE_OFFSET UNITYSDK_OFFSET(0x9CA91E0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_SHOWBRANDLOGO_OFFSET UNITYSDK_OFFSET(0x9CB2160)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_BUILDATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0x9CB1200)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_NORMALIZEPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0x9CB1110)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CA90F0)

namespace NPA::Editor::Auth::View
{
	inline static constexpr unsigned int NXPAccountLinkGameDataPickerView_TypeDefinitionIndex = 27179;

	class NXPAccountLinkGameDataPickerView : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* primaryLinkItemInstance; // 0x48
		::NPA::Editor::Auth::View::NXPAccountLinkPickerItemView* primaryLinkItemView; // 0x50
		::UnityEngine::GameObject* linkItemPrefab; // 0x58
		Il2CppObject* linkItemInstances; // 0x60
		::NPA::Editor::Auth::AccountLink::Link* primaryLink; // 0x68
		Il2CppObject* links; // 0x70
		Il2CppObject* _onItemClicked; // 0x78
		::System::Action* _onAbort; // 0x80
		::System::Boolean canExposeBrandLogo; // 0x88
		::System::Xml::XmlDocument* document; // 0x0

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void SetOnItemClickedAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_SETONITEMCLICKEDACTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnAbortAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_SETONABORTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetResolveMode(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_SETRESOLVEMODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetChangedMode(::NPA::Editor::Auth::AccountLink::Link* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Auth::AccountLink::Link*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_SETCHANGEDMODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowBrandLogo(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_SHOWBRANDLOGO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* BuildAttributeList(::NPA::Editor::Auth::AccountLink::Link* arg)
		{
			return (return (Il2CppObject*(*)(::NPA::Editor::Auth::AccountLink::Link*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_BUILDATTRIBUTELIST_OFFSET))(arg, nullptr);
		}

		::System::String* NormalizePlatformType(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_NORMALIZEPLATFORMTYPE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKGAMEDATAPICKERVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

