#pragma once
#include "../../unitysdk.h"

namespace NPA { class NXPPolicy; }
namespace NPA::Editor { class NPListener; }
namespace NPA { class NXPPushPolicies; }
namespace NPA::Editor::Push { class NXPPushMenuOption; }
namespace NPA::Editor::Policy::Result { class NXPToyFundsSettlementPolicyResult; }
namespace NPA { class NXPToyResult; }

#define NPA_EDITOR_NXPPOLICYMANAGER_GETPOLICYLISTV2_OFFSET UNITYSDK_OFFSET(0x9D7FDD0)
#define NPA_EDITOR_NXPPOLICYMANAGER_SETALLENABLEDPOLICY_OFFSET UNITYSDK_OFFSET(0x9D7ADB0)
#define NPA_EDITOR_NXPPOLICYMANAGER_PROCESSSETUPPOLICYWITHPUSHRECEIVEAGREEMENT_OFFSET UNITYSDK_OFFSET(0x9D7FE60)
#define NPA_EDITOR_NXPPOLICYMANAGER_PROCESSSETUPPOLICYWITHOPENAPI_OFFSET UNITYSDK_OFFSET(0x9D7FF70)
#define NPA_EDITOR_NXPPOLICYMANAGER_ISENABLEDPUSHPOLICY_OFFSET UNITYSDK_OFFSET(0x9D80F40)
#define NPA_EDITOR_NXPPOLICYMANAGER_GETPOLICYSTATUS_OFFSET UNITYSDK_OFFSET(0x9D80C30)
#define NPA_EDITOR_NXPPOLICYMANAGER_ISALLINCLUDEDTERMSFROMPOLICY_OFFSET UNITYSDK_OFFSET(0x9D81100)
#define NPA_EDITOR_NXPPOLICYMANAGER_ISADDEDTERMSOFPOLICY_OFFSET UNITYSDK_OFFSET(0x9D80990)
#define NPA_EDITOR_NXPPOLICYMANAGER_PUTEMAILPOLICY_OFFSET UNITYSDK_OFFSET(0x9D812F0)
#define NPA_EDITOR_NXPPOLICYMANAGER_DELETEEMAILPOLICY_OFFSET UNITYSDK_OFFSET(0x9D81450)
#define NPA_EDITOR_NXPPOLICYMANAGER_SETPUSHPOLICY_OFFSET UNITYSDK_OFFSET(0x9D73660)
#define NPA_EDITOR_NXPPOLICYMANAGER_SHOWPOLICYSETTINGS_OFFSET UNITYSDK_OFFSET(0x9D815C0)
#define NPA_EDITOR_NXPPOLICYMANAGER_SHOWPOLICYSETTINGS_OFFSET UNITYSDK_OFFSET(0x9D81610)
#define NPA_EDITOR_NXPPOLICYMANAGER_SHOWPOLICYSETTINGS_OFFSET UNITYSDK_OFFSET(0x9D81750)
#define NPA_EDITOR_NXPPOLICYMANAGER_SHOWFUNDSSETTLEMENT_OFFSET UNITYSDK_OFFSET(0x9D718F0)
#define NPA_EDITOR_NXPPOLICYMANAGER_SHOWFUNDSSETTLEMENT_OFFSET UNITYSDK_OFFSET(0x9D71C40)
#define NPA_EDITOR_NXPPOLICYMANAGER_GETFUNDSSETTLEMENTPOLICY_OFFSET UNITYSDK_OFFSET(0x9D819D0)
#define NPA_EDITOR_NXPPOLICYMANAGER_PUTFUNDSSETTLEMENTPOLICY_OFFSET UNITYSDK_OFFSET(0x9D81B20)
#define NPA_EDITOR_NXPPOLICYMANAGER_MAKEFUNDSSETTLEMENTPOLICYRESULT_OFFSET UNITYSDK_OFFSET(0x9D81850)
#define NPA_EDITOR_NXPPOLICYMANAGER_GETOPENAPIPOLICY_OFFSET UNITYSDK_OFFSET(0x9D71CB0)
#define NPA_EDITOR_NXPPOLICYMANAGER_SETOPENAPIPOLICY_OFFSET UNITYSDK_OFFSET(0x9D71F40)
#define NPA_EDITOR_NXPPOLICYMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D81C90)
#define NPA_EDITOR_NXPPOLICYMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D81CA0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPPolicyManager_TypeDefinitionIndex = 26273;

	class NXPPolicyManager : public Il2CppObject
	{
	public:
		::System::Int32 POLICY_NONE; // 0x0
		::System::Int32 POLICY_AGREE; // 0x4
		::System::Int32 POLICY_DISAGREE; // 0x8
		::System::Int32 CODE_POLICY_TYPE_PHONE_NUMBER; // 0xC
		::System::Int32 CODE_POLICY_TYPE_EMAIL; // 0x10
		::System::Int32 CODE_POLICY_TYPE_FUNDS_SETTLEMTNT; // 0x14
		::System::Int32 CODE_POLICY_TYPE_AD_PUSH; // 0x18
		::System::Int32 CODE_POLICY_TYPE_NIGHT_PUSH; // 0x1C
		::System::Int32 CODE_POLICY_TYPE_OPEN_API; // 0x20
		::System::Int32 CODE_POLICY_NONE; // 0x24
		::System::Int32 CODE_POLICY_NONE_TARGET_USER; // 0x28
		::System::Int32 CODE_POLICY_JAPAN_SETTLEMENT_FOUND_YEARS; // 0x2C
		::System::Int32 CODE_POLICY_JAPAN_SETTLEMENT_FOUND_UNDER_AGE; // 0x30
		::System::Int32 CODE_POLICY_JAPAN_SETTLEMENT_FOUND_OVER_AGE; // 0x34
		::System::Int32 CODE_POLICY_KOREA_COLLECTION_PHONE_NUMBER; // 0x38
		::System::String* CODE_VALIDATE_POLICY_DATA_PHONE; // 0x40
		::System::String* CODE_VALIDATE_POLICY_DATA_METHOD; // 0x48
		::System::String* CODE_VALIDATE_POLICY_DATA_IS_TERMS_AGREE; // 0x50
		::System::String* CODE_VALIDATE_POLICY_DATA_METHOD_PUT; // 0x58
		::System::String* CODE_VALIDATE_POLICY_DATA_METHOD_DELETE; // 0x60
		::System::String* CODE_VALIDATE_POLICY_DATA_METHOD_GET; // 0x68
		::System::String* TYPE_POLICY_PURCHASE; // 0x70
		::System::String* TYPE_POLICY_TERMS; // 0x78

		::System::Void GetPolicyListV2(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_GETPOLICYLISTV2_OFFSET))(arg, nullptr);
		}

		::System::Void SetAllEnabledPolicy(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_SETALLENABLEDPOLICY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessSetupPolicyWithPushReceiveAgreement(Il2CppObject* arg, Il2CppObject* arg, ::NPA::NXPPolicy* arg, ::NPA::NXPPolicy* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::NPA::NXPPolicy*, ::NPA::NXPPolicy*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_PROCESSSETUPPOLICYWITHPUSHRECEIVEAGREEMENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessSetupPolicyWithOpenApi(Il2CppObject* arg, Il2CppObject* arg, ::NPA::NXPPolicy* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::NPA::NXPPolicy*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_PROCESSSETUPPOLICYWITHOPENAPI_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsEnabledPushPolicy(Il2CppObject* arg, ::NPA::NXPPolicy* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::NPA::NXPPolicy*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_ISENABLEDPUSHPOLICY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetPolicyStatus(Il2CppObject* arg, ::NPA::NXPPolicy* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::NPA::NXPPolicy*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_GETPOLICYSTATUS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsAllIncludedTermsFromPolicy(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_ISALLINCLUDEDTERMSFROMPOLICY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsAddedTermsOfPolicy(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_ISADDEDTERMSOFPOLICY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void putEmailPolicy(::System::String* str, ::NPA::Editor::NPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Editor::NPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_PUTEMAILPOLICY_OFFSET))(str, arg, nullptr);
		}

		::System::Void deleteEmailPolicy(::System::String* str, ::NPA::Editor::NPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Editor::NPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_DELETEEMAILPOLICY_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetPushPolicy(::NPA::NXPPushPolicies* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPPushPolicies*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_SETPUSHPOLICY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void showPolicySettings(::NPA::Editor::NPListener* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::NPA::Editor::NPListener*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_SHOWPOLICYSETTINGS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowPolicySettings(::NPA::Editor::Push::NXPPushMenuOption* arg, ::NPA::Editor::NPListener* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::NPA::Editor::Push::NXPPushMenuOption*, ::NPA::Editor::NPListener*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_SHOWPOLICYSETTINGS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShowPolicySettings(::NPA::Editor::Push::NXPPushMenuOption* arg, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Push::NXPPushMenuOption*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_SHOWPOLICYSETTINGS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShowFundsSettlement(::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_SHOWFUNDSSETTLEMENT_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Void ShowFundsSettlement(::System::String* str, Il2CppObject* arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_SHOWFUNDSSETTLEMENT_OFFSET))(str, arg, str, arg, nullptr);
		}

		::System::Void GetFundsSettlementPolicy(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_GETFUNDSSETTLEMENTPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void PutFundsSettlementPolicy(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_PUTFUNDSSETTLEMENTPOLICY_OFFSET))(str, arg, nullptr);
		}

		::NPA::Editor::Policy::Result::NXPToyFundsSettlementPolicyResult* MakeFundsSettlementPolicyResult(::NPA::NXPToyResult* arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::NPA::Editor::Policy::Result::NXPToyFundsSettlementPolicyResult*(*)(::NPA::NXPToyResult*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_MAKEFUNDSSETTLEMENTPOLICYRESULT_OFFSET))(arg, str, str, str, nullptr);
		}

		::System::Void GetOpenApiPolicy(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_GETOPENAPIPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void SetOpenApiPolicy(::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_SETOPENAPIPOLICY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPOLICYMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

