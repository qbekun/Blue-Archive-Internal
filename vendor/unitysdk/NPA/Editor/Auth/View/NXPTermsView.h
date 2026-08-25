#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Selectable; }
namespace NPA::Auth { class NXPToyTerm; }

#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9CB9470)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETDEFAULTDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9CB9490)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETMINORDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9CB94B0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETAGREEBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9CB94D0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETALLAGREEBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9CB94F0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETCONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9CB9510)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETNOTCONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9CB9530)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETTERMSLIST_OFFSET UNITYSDK_OFFSET(0x9CB9550)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETSHOWTERMSDETAILCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CB9570)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETSHOWTERMSDETAILWITHURLCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CB9590)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETAGREETERMSCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CB95B0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETUPDATETERMSSTATECALLBACK_OFFSET UNITYSDK_OFFSET(0x9CB95D0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETUSECONSENTLAYOUT_OFFSET UNITYSDK_OFFSET(0x9CB95F0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETAGREEPOLICYTERMSOFUSECALLBACK_OFFSET UNITYSDK_OFFSET(0x9CB9600)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9CB9620)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_CREATESELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9CBAE10)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SELECTIONGROUPEXIT_OFFSET UNITYSDK_OFFSET(0x9CBB090)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x9CBB0A0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_UPDATEAGREEBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x9CBACD0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_UPDATETERMSAGREEMENTSTATE_OFFSET UNITYSDK_OFFSET(0x9CBB110)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_GETTERMSITEMENABLED_OFFSET UNITYSDK_OFFSET(0x9CBAB30)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_ONAGREE_OFFSET UNITYSDK_OFFSET(0x9CBB630)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_ONAGREETERMSOFUSEFORPOLICY_OFFSET UNITYSDK_OFFSET(0x9CBB7A0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x9CBB7E0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CBB820)

namespace NPA::Editor::Auth::View
{
	inline static constexpr unsigned int NXPTermsView_TypeDefinitionIndex = 27202;

	class NXPTermsView : public Il2CppObject
	{
	public:
		::System::String* termsViewPrefabUrl; // 0x48
		::System::String* termsItemPrefabUrl; // 0x50
		::System::String* gdprTermsItemPrefabUrl; // 0x58
		::System::String* termsViewHeaderPath; // 0x60
		::System::String* termsViewContentsPath; // 0x68
		::System::String* termsViewStartFooterPath; // 0x70
		::System::String* termsViewConsentFooterPath; // 0x78
		::System::Boolean useConsentLayout; // 0x80
		::System::Boolean existGdprTerms; // 0x81
		::System::String* title; // 0x88
		::System::String* defaultDescription; // 0x90
		::System::String* minorDescription; // 0x98
		::System::String* agreeButtonString; // 0xA0
		::System::String* allAgreeButtonString; // 0xA8
		::System::String* confirmButtonString; // 0xB0
		::System::String* notConfirmButtonString; // 0xB8
		Il2CppObject* termsList; // 0xC0
		::UnityEngine::UI::Button* agreeButton; // 0xC8
		::UnityEngine::UI::Text* agreeButtonText; // 0xD0
		::UnityEngine::UI::Image* agreeButtonBackground; // 0xD8
		Il2CppObject* termsItemViews; // 0xE0
		Il2CppObject* showTermsDetailCallback; // 0xE8
		Il2CppObject* showTermsDetailWithUrlCallback; // 0xF0
		Il2CppObject* agreeTermsCallback; // 0xF8
		Il2CppObject* updateTermsStateCallback; // 0x100
		::System::Action* agreePolicyTermsOfUseCallback; // 0x108

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetDefaultDescription(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETDEFAULTDESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void SetMinorDescription(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETMINORDESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void SetAgreeButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETAGREEBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetAllAgreeButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETALLAGREEBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetConfirmButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETCONFIRMBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetNotConfirmButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETNOTCONFIRMBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetTermsList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETTERMSLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetShowTermsDetailCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETSHOWTERMSDETAILCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetShowTermsDetailWithUrlCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETSHOWTERMSDETAILWITHURLCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetAgreeTermsCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETAGREETERMSCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetUpdateTermsStateCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETUPDATETERMSSTATECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetUseConsentLayout(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETUSECONSENTLAYOUT_OFFSET))(arg, nullptr);
		}

		::System::Void SetAgreePolicyTermsOfUseCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETAGREEPOLICYTERMSOFUSECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void CreateSelectionGroup(::UnityEngine::GameObject* arg, ::UnityEngine::UI::Selectable* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::UI::Selectable*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_CREATESELECTIONGROUP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SelectionGroupExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SELECTIONGROUPEXIT_OFFSET))(nullptr);
		}

		::System::Void SetInteractable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_SETINTERACTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateAgreeButtonState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_UPDATEAGREEBUTTONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateTermsAgreementState(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_UPDATETERMSAGREEMENTSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetTermsItemEnabled(::NPA::Auth::NXPToyTerm* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Auth::NXPToyTerm*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_GETTERMSITEMENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void OnAgree(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_ONAGREE_OFFSET))(arg, nullptr);
		}

		::System::Void OnAgreeTermsOfUseForPolicy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_ONAGREETERMSOFUSEFORPOLICY_OFFSET))(nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_ONCANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

