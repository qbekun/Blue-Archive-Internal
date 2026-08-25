#pragma once
#include "../../unitysdk.h"

namespace NPA::Ex::Model { class AuthorizationParam; }
namespace NPA::Ex { class EExternalPlatformMessageType; }
namespace NPA { class NXPConsoleCommerceDialogMode; }
namespace NPA { class NXPDownloadableContentsDataContext; }
namespace NPA { class NXPToyControllerType; }
namespace NPA { class INXPToyControllerEventHandler; }
namespace NPA::Editor::Common { class NXPVirtualKeyboardOption; }

#define NPA_EDITOR_IEXTERNALPLATFORM_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETPLAYERDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETUSERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETAUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_REQUIREONLINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETAUTHINFOFORWEBAPI_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETSUBAUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETPLATFORMIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETTITLEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETGAMELANGUAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETDEVICEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETOPERATINGENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_SHOWPLATFORMMESSAGEBOX_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETCONNECTEDNETWORKSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_LAUNCHURL_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETPURCHASABLEPRODUCT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_CANSTARTPURCHASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_CANSTARTRESTORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_PURCHASEPRODUCT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_RESTOREPRODUCT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETENTITLEMENTSASJSONARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETAVAILABLEOFFERSASJSONARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETTRANSACTIONINGREDIENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETSTOREID_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_STARTSTOREPOLICY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_STOPSTOREPOLICY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_SETCOMMERCEDIALOGMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_QUERYFRIENDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_QUERYBLOCKUSERINFOS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETDOWNLOADABLECONTENTSPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_PURCHASEDOWNLOADABLECONTENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETDOWNLOADABLECONTENTSERRORCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_ISPRODUCTMULTIQUANTITYENABLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_GETLASTACTIVECONTROLLERTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_SETCONTROLLEREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_EXECUTEDELAYACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_REQUIRESVIRTUALKEYBOARD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IEXTERNALPLATFORM_SHOWVIRTUALKEYBOARD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor
{
	inline static constexpr unsigned int IExternalPlatform_TypeDefinitionIndex = 26145;

	class IExternalPlatform : public Il2CppObject
	{
	public:
		::System::Boolean Init()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_INIT_OFFSET))(nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SetProperty(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_SETPROPERTY_OFFSET))(str, str, nullptr);
		}

		::System::String* GetPlayerDisplayName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETPLAYERDISPLAYNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetUserIdentifier(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETUSERIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::Void GetAuthToken(::System::Int32 arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETAUTHTOKEN_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void RequireOnline(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_REQUIREONLINE_OFFSET))(arg, nullptr);
		}

		::System::Void GetAuthInfoForWebAPI(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETAUTHINFOFORWEBAPI_OFFSET))(arg, nullptr);
		}

		::System::Void GetSubAuthToken(::NPA::Ex::Model::AuthorizationParam* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Ex::Model::AuthorizationParam*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETSUBAUTHTOKEN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetPlatformIdentifier()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETPLATFORMIDENTIFIER_OFFSET))(nullptr);
		}

		::System::String* GetTitleId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETTITLEID_OFFSET))(nullptr);
		}

		::System::String* GetGameLanguage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETGAMELANGUAGE_OFFSET))(nullptr);
		}

		::System::String* GetDeviceId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETDEVICEID_OFFSET))(nullptr);
		}

		::System::String* GetOperatingEnvironment()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETOPERATINGENVIRONMENT_OFFSET))(nullptr);
		}

		::System::Boolean ShowPlatformMessageBox(::NPA::Ex::EExternalPlatformMessageType* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::EExternalPlatformMessageType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_SHOWPLATFORMMESSAGEBOX_OFFSET))(arg, nullptr);
		}

		::System::Void GetConnectedNetworkStatus(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETCONNECTEDNETWORKSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void LaunchURL(::System::String* str, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_LAUNCHURL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void GetPurchasableProduct(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETPURCHASABLEPRODUCT_OFFSET))(arg, nullptr);
		}

		::System::Void CanStartPurchase(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_CANSTARTPURCHASE_OFFSET))(arg, nullptr);
		}

		::System::Void CanStartRestore(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_CANSTARTRESTORE_OFFSET))(arg, nullptr);
		}

		::System::Void PurchaseProduct(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_PURCHASEPRODUCT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RestoreProduct(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_RESTOREPRODUCT_OFFSET))(arg, nullptr);
		}

		::System::Void GetEntitlementsAsJsonArray(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETENTITLEMENTSASJSONARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void GetAvailableOffersAsJsonArray(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETAVAILABLEOFFERSASJSONARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void GetTransactionIngredients(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETTRANSACTIONINGREDIENTS_OFFSET))(arg, nullptr);
		}

		::System::String* GetStoreID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETSTOREID_OFFSET))(nullptr);
		}

		::System::Void StartStorePolicy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_STARTSTOREPOLICY_OFFSET))(nullptr);
		}

		::System::Void StopStorePolicy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_STOPSTOREPOLICY_OFFSET))(nullptr);
		}

		::System::Void SetCommerceDialogMode(::NPA::NXPConsoleCommerceDialogMode* arg)
		{
			((::System::Void(*)(::NPA::NXPConsoleCommerceDialogMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_SETCOMMERCEDIALOGMODE_OFFSET))(arg, nullptr);
		}

		::System::Void QueryFriends(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_QUERYFRIENDS_OFFSET))(arg, nullptr);
		}

		::System::Void QueryBlockUserInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_QUERYBLOCKUSERINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void GetDownloadableContentsProductList(::NPA::NXPDownloadableContentsDataContext* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPDownloadableContentsDataContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETDOWNLOADABLECONTENTSPRODUCTLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PurchaseDownloadableContents(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_PURCHASEDOWNLOADABLECONTENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetDownloadableContentsErrorCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETDOWNLOADABLECONTENTSERRORCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsProductMultiQuantityEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_ISPRODUCTMULTIQUANTITYENABLED_OFFSET))(nullptr);
		}

		::NPA::NXPToyControllerType* GetLastActiveControllerType()
		{
			return (return (::NPA::NXPToyControllerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_GETLASTACTIVECONTROLLERTYPE_OFFSET))(nullptr);
		}

		::System::Void SetControllerEventHandler(::NPA::INXPToyControllerEventHandler* arg)
		{
			((::System::Void(*)(::NPA::INXPToyControllerEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_SETCONTROLLEREVENTHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteDelayAction(::System::Single arg, ::System::Action* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_EXECUTEDELAYACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean RequiresVirtualKeyboard()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_REQUIRESVIRTUALKEYBOARD_OFFSET))(nullptr);
		}

		::System::Void ShowVirtualKeyboard(::NPA::Editor::Common::NXPVirtualKeyboardOption* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::NXPVirtualKeyboardOption*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IEXTERNALPLATFORM_SHOWVIRTUALKEYBOARD_OFFSET))(arg, arg, nullptr);
		}

	};
}

