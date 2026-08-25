#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class NXPToyTermsManager; }
namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA { class NXPAuthenticationEnvironment; }
namespace NPA::SimpleJSON { class JSONArray; }

#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C9D0C0)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C9D130)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWTERMSAGREEWITHTICKETIFNEED_OFFSET UNITYSDK_OFFSET(0x9C9D3B0)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWTERMSAGREEWITHGAMETOKENIFNEED_OFFSET UNITYSDK_OFFSET(0x9C9DA60)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWTERMSAGREEIFNEED_OFFSET UNITYSDK_OFFSET(0x9C9D440)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWUSERVERIFICATION_OFFSET UNITYSDK_OFFSET(0x9C9E180)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_VERIFYPARENTALIDENTITY_OFFSET UNITYSDK_OFFSET(0x9C9E3F0)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_GETUSERIDENTITY_OFFSET UNITYSDK_OFFSET(0x9C9E2E0)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_VERIFYPARENTALIDENTITY_OFFSET UNITYSDK_OFFSET(0x9C9E7F0)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_HASPARENTALIVTERMS_OFFSET UNITYSDK_OFFSET(0x9C9DEC0)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_GETTRIEDAUTHENTICATIONENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x9C9EC20)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_ISAGREE_OFFSET UNITYSDK_OFFSET(0x9C9DB00)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_FILTERNEWTERMSLIST_OFFSET UNITYSDK_OFFSET(0x9C9DCA0)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWTERMS_OFFSET UNITYSDK_OFFSET(0x9C9E070)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWPOLICYTERMSOFUSE_OFFSET UNITYSDK_OFFSET(0x9C9EE40)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWTERMSFOREDITORONLY_OFFSET UNITYSDK_OFFSET(0x9C9EF50)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_AGREETERMSWITHOUTUPDATETOYTOKEN_OFFSET UNITYSDK_OFFSET(0x9C9F130)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWTERMSDETAIL_OFFSET UNITYSDK_OFFSET(0x9C9F290)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWTERMSDETAIL_OFFSET UNITYSDK_OFFSET(0x9C9F3A0)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_GETTERMSAGREEMENTMESSAGE_OFFSET UNITYSDK_OFFSET(0x9C9F440)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_CHECKADDITIONALTERMSFROMENTERTOY_OFFSET UNITYSDK_OFFSET(0x9C9F550)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWPUSHAGREEMENTTOASTIFNEEDED_OFFSET UNITYSDK_OFFSET(0x9C9F6B0)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_GETTERMSLIST_OFFSET UNITYSDK_OFFSET(0x9C9FBF0)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_GETLOGINTERMSLIST_OFFSET UNITYSDK_OFFSET(0x9C9F050)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_GETLOGINTERMSLIST_OFFSET UNITYSDK_OFFSET(0x9C9FD50)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_GETTERMSLISTJSONNODE_OFFSET UNITYSDK_OFFSET(0x9C9FE20)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_COMPARECURRENTTERMSLISTTOLOGINTERMSLIST_OFFSET UNITYSDK_OFFSET(0x9CA05C0)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_CONVERTTERMSLISTFROMJSONNODE_OFFSET UNITYSDK_OFFSET(0x9CA0980)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_CONVERTJSONARRAYFROMTERMSLIST_OFFSET UNITYSDK_OFFSET(0x9CA16C0)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_CHANGETERMSAGREEMENTSTATUS_OFFSET UNITYSDK_OFFSET(0x9CA1740)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_UPDATETERMS_OFFSET UNITYSDK_OFFSET(0x9CA1AD0)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_TERMSLISTTOTERMSDICTIONARY_OFFSET UNITYSDK_OFFSET(0x9CA18F0)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_EXISTGDPRTERMS_OFFSET UNITYSDK_OFFSET(0x9CA1CB0)
#define NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9CA1E70)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPToyTermsManager_TypeDefinitionIndex = 27140;

	class NXPToyTermsManager : public Il2CppObject
	{
	public:
		::System::Int32 TermsNone; // 0x0
		::System::Int32 TermsAgree; // 0x0
		::System::Int32 TermsDisagree; // 0x0
		::System::Int32 TermsTypeRequired; // 0x0
		::System::Int32 TermsTypeOptional; // 0x0
		::NPA::Editor::Auth::NXPToyTermsManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::System::Int32 TermsVersion; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Auth::NXPToyTermsManager* get_Instance()
		{
			return (return (::NPA::Editor::Auth::NXPToyTermsManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void ShowTermsAgreeWithTicketIfNeed(::System::String* str, ::System::String* str, Il2CppObject* arg, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWTERMSAGREEWITHTICKETIFNEED_OFFSET))(str, str, arg, arg, arg, arg, nullptr);
		}

		::System::Void ShowTermsAgreeWithGameTokenIfNeed(::System::String* str, ::System::String* str, Il2CppObject* arg, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWTERMSAGREEWITHGAMETOKENIFNEED_OFFSET))(str, str, arg, arg, arg, arg, nullptr);
		}

		::System::Void ShowTermsAgreeIfNeed(::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWTERMSAGREEIFNEED_OFFSET))(str, str, str, arg, arg, arg, arg, nullptr);
		}

		::System::Void ShowUserVerification(::System::String* str, ::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWUSERVERIFICATION_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void VerifyParentalIdentity(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_VERIFYPARENTALIDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void GetUserIdentity(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_GETUSERIDENTITY_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void VerifyParentalIdentity(::NPA::SimpleJSON::JSONNode* arg, ::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_VERIFYPARENTALIDENTITY_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Boolean HasParentalIVTerms(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_HASPARENTALIVTERMS_OFFSET))(arg, nullptr);
		}

		::NPA::NXPAuthenticationEnvironment* GetTriedAuthenticationEnvironment(::System::String* str)
		{
			return (return (::NPA::NXPAuthenticationEnvironment*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_GETTRIEDAUTHENTICATIONENVIRONMENT_OFFSET))(str, nullptr);
		}

		::System::Boolean IsAgree(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_ISAGREE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FilterNewTermsList(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_FILTERNEWTERMSLIST_OFFSET))(arg, nullptr);
		}

		::System::Void ShowTerms(Il2CppObject* arg, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWTERMS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ShowPolicyTermsOfUse(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWPOLICYTERMSOFUSE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShowTermsForEditorOnly(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWTERMSFOREDITORONLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AgreeTermsWithoutUpdateToyToken(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_AGREETERMSWITHOUTUPDATETOYTOKEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowTermsDetail(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWTERMSDETAIL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowTermsDetail(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWTERMSDETAIL_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetTermsAgreementMessage(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_GETTERMSAGREEMENTMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void CheckAdditionalTermsFromEnterToy(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_CHECKADDITIONALTERMSFROMENTERTOY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowPushAgreementToastIfNeeded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_SHOWPUSHAGREEMENTTOASTIFNEEDED_OFFSET))(arg, nullptr);
		}

		::System::Void GetTermsList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_GETTERMSLIST_OFFSET))(arg, nullptr);
		}

		::System::Void GetLoginTermsList(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_GETLOGINTERMSLIST_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetLoginTermsList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_GETLOGINTERMSLIST_OFFSET))(nullptr);
		}

		::NPA::SimpleJSON::JSONNode* GetTermsListJSONNode(Il2CppObject* arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_GETTERMSLISTJSONNODE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CompareCurrentTermsListToLoginTermsList(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_COMPARECURRENTTERMSLISTTOLOGINTERMSLIST_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ConvertTermsListFromJSONNode(::NPA::SimpleJSON::JSONNode* arg)
		{
			return (return (Il2CppObject*(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_CONVERTTERMSLISTFROMJSONNODE_OFFSET))(arg, nullptr);
		}

		::NPA::SimpleJSON::JSONArray* ConvertJSONArrayFromTermsList(Il2CppObject* arg)
		{
			return (return (::NPA::SimpleJSON::JSONArray*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_CONVERTJSONARRAYFROMTERMSLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ChangeTermsAgreementStatus(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_CHANGETERMSAGREEMENTSTATUS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* UpdateTerms(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_UPDATETERMS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* TermsListToTermsDictionary(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_TERMSLISTTOTERMSDICTIONARY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ExistGdprTerms(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_EXISTGDPRTERMS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYTERMSMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

