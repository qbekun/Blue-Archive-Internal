#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class NXToyLocaleManager; }
namespace NPA::Editor::Auth::View { class NXPTermsView; }
namespace NPA::Promotion { class NXPToyCloseResult; }

#define NPA_EDITOR_AUTH_NXPTERMSDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CA4040)
#define NPA_EDITOR_AUTH_NXPTERMSDIALOG_USECONSENTLAYOUT_OFFSET UNITYSDK_OFFSET(0x9CA44B0)
#define NPA_EDITOR_AUTH_NXPTERMSDIALOG_ONDISMISS_OFFSET UNITYSDK_OFFSET(0x9CA2930)
#define NPA_EDITOR_AUTH_NXPTERMSDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CADAE0)
#define NPA_EDITOR_AUTH_NXPTERMSDIALOG_SHOWTERMSDETAIL_OFFSET UNITYSDK_OFFSET(0x9CADD70)
#define NPA_EDITOR_AUTH_NXPTERMSDIALOG_SHOWTERMSDETAILWITHURL_OFFSET UNITYSDK_OFFSET(0x9CADE30)
#define NPA_EDITOR_AUTH_NXPTERMSDIALOG_AGREEPOLICYTERMSOFUSE_OFFSET UNITYSDK_OFFSET(0x9CADEF0)
#define NPA_EDITOR_AUTH_NXPTERMSDIALOG_AGREETERMS_OFFSET UNITYSDK_OFFSET(0x9CAE1F0)
#define NPA_EDITOR_AUTH_NXPTERMSDIALOG_UPDATETERMSSTATE_OFFSET UNITYSDK_OFFSET(0x9CAE500)
#define NPA_EDITOR_AUTH_NXPTERMSDIALOG_INVOKECANCELRESULT_OFFSET UNITYSDK_OFFSET(0x9CAE690)
#define NPA_EDITOR_AUTH_NXPTERMSDIALOG_USEMINORTERMS_OFFSET UNITYSDK_OFFSET(0x9CAD7B0)
#define NPA_EDITOR_AUTH_NXPTERMSDIALOG__SHOWTERMSDETAIL_B__10_0_OFFSET UNITYSDK_OFFSET(0x9CAE910)
#define NPA_EDITOR_AUTH_NXPTERMSDIALOG__SHOWTERMSDETAILWITHURL_B__11_0_OFFSET UNITYSDK_OFFSET(0x9CAE940)
#define NPA_EDITOR_AUTH_NXPTERMSDIALOG__INVOKECANCELRESULT_B__15_0_OFFSET UNITYSDK_OFFSET(0x9CAE970)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPTermsDialog_TypeDefinitionIndex = 27170;

	class NXPTermsDialog : public Il2CppObject
	{
	public:
		Il2CppObject* termsList; // 0x30
		Il2CppObject* agreeCallback; // 0x38
		Il2CppObject* cancelCallback; // 0x40
		::NPA::Editor::NXToyLocaleManager* localeManager; // 0x48
		::NPA::Editor::Auth::View::NXPTermsView* termsView; // 0x50
		::System::Boolean isCanceledConfirm; // 0x58

		::System::Void .ctor(Il2CppObject* arg, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTERMSDIALOG_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void UseConsentLayout()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTERMSDIALOG_USECONSENTLAYOUT_OFFSET))(nullptr);
		}

		::System::Void OnDismiss()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTERMSDIALOG_ONDISMISS_OFFSET))(nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTERMSDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void ShowTermsDetail(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTERMSDIALOG_SHOWTERMSDETAIL_OFFSET))(arg, nullptr);
		}

		::System::Void ShowTermsDetailWithUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTERMSDIALOG_SHOWTERMSDETAILWITHURL_OFFSET))(str, nullptr);
		}

		::System::Void AgreePolicyTermsOfUse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTERMSDIALOG_AGREEPOLICYTERMSOFUSE_OFFSET))(nullptr);
		}

		::System::Void AgreeTerms(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTERMSDIALOG_AGREETERMS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateTermsState(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTERMSDIALOG_UPDATETERMSSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeCancelResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTERMSDIALOG_INVOKECANCELRESULT_OFFSET))(nullptr);
		}

		::System::Boolean UseMinorTerms()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTERMSDIALOG_USEMINORTERMS_OFFSET))(nullptr);
		}

		::System::Void _ShowTermsDetail_b__10_0(::NPA::Promotion::NXPToyCloseResult* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCloseResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTERMSDIALOG__SHOWTERMSDETAIL_B__10_0_OFFSET))(arg, nullptr);
		}

		::System::Void _ShowTermsDetailWithUrl_b__11_0(::NPA::Promotion::NXPToyCloseResult* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCloseResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTERMSDIALOG__SHOWTERMSDETAILWITHURL_B__11_0_OFFSET))(arg, nullptr);
		}

		::System::Void _InvokeCancelResult_b__15_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTERMSDIALOG__INVOKECANCELRESULT_B__15_0_OFFSET))(nullptr);
		}

	};
}

