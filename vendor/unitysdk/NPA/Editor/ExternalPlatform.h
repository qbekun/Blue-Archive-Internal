#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class IExternalPlatform; }
namespace UnityEngine { class GameObject; }
namespace NPA::Ex::Model { class AuthorizationParam; }
namespace NPA::Ex { class EExternalPlatformMessageType; }
namespace NPA { class NXPConsoleCommerceDialogMode; }
namespace NPA { class NXPDownloadableContentsDataContext; }
namespace NPA { class NXPToyControllerType; }
namespace NPA { class INXPToyControllerEventHandler; }
namespace NPA::Editor::Common { class NXPVirtualKeyboardOption; }

#define NPA_EDITOR_EXTERNALPLATFORM_GETCONNECTEDNETWORKSTATUSASYNC_OFFSET UNITYSDK_OFFSET(0x9D43460)
#define NPA_EDITOR_EXTERNALPLATFORM_GETPURCHASABLEPRODUCTASYNC_OFFSET UNITYSDK_OFFSET(0x9D43590)
#define NPA_EDITOR_EXTERNALPLATFORM_PURCHASEPRODUCTASYNC_OFFSET UNITYSDK_OFFSET(0x9D436C0)
#define NPA_EDITOR_EXTERNALPLATFORM_GETAVAILABLEOFFERSASJSONARRAYASYNC_OFFSET UNITYSDK_OFFSET(0x9D43810)
#define NPA_EDITOR_EXTERNALPLATFORM_GETTRANSACTIONINGREDIENTSASYNC_OFFSET UNITYSDK_OFFSET(0x9D43940)
#define NPA_EDITOR_EXTERNALPLATFORM_GET_OFFSET UNITYSDK_OFFSET(0x9D43A70)
#define NPA_EDITOR_EXTERNALPLATFORM_SET_OFFSET UNITYSDK_OFFSET(0x9D43AB0)
#define NPA_EDITOR_EXTERNALPLATFORM_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x9D43B10)
#define NPA_EDITOR_EXTERNALPLATFORM_INIT_OFFSET UNITYSDK_OFFSET(0x9D43BF0)
#define NPA_EDITOR_EXTERNALPLATFORM_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0x9D43C00)
#define NPA_EDITOR_EXTERNALPLATFORM_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x9D43C10)
#define NPA_EDITOR_EXTERNALPLATFORM_GETPLAYERDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9D43C70)
#define NPA_EDITOR_EXTERNALPLATFORM_GETUSERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9D43CA0)
#define NPA_EDITOR_EXTERNALPLATFORM_SENDNOTIMPLEMENTEDRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_EXTERNALPLATFORM_SENDNOTSUPPORTEDRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_EXTERNALPLATFORM_GETAUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x9D43CD0)
#define NPA_EDITOR_EXTERNALPLATFORM_GETSUBAUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x9D43D10)
#define NPA_EDITOR_EXTERNALPLATFORM_REQUIREONLINE_OFFSET UNITYSDK_OFFSET(0x9D43D50)
#define NPA_EDITOR_EXTERNALPLATFORM_GETAUTHINFOFORWEBAPI_OFFSET UNITYSDK_OFFSET(0x9D43D90)
#define NPA_EDITOR_EXTERNALPLATFORM_GETPLATFORMIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9D43DD0)
#define NPA_EDITOR_EXTERNALPLATFORM_GETTITLEID_OFFSET UNITYSDK_OFFSET(0x9D43E00)
#define NPA_EDITOR_EXTERNALPLATFORM_GETGAMELANGUAGE_OFFSET UNITYSDK_OFFSET(0x9D43E30)
#define NPA_EDITOR_EXTERNALPLATFORM_GETDEVICEID_OFFSET UNITYSDK_OFFSET(0x9D43E60)
#define NPA_EDITOR_EXTERNALPLATFORM_GETOPERATINGENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x9D43E90)
#define NPA_EDITOR_EXTERNALPLATFORM_SHOWPLATFORMMESSAGEBOX_OFFSET UNITYSDK_OFFSET(0x9D43EF0)
#define NPA_EDITOR_EXTERNALPLATFORM_GETCONNECTEDNETWORKSTATUS_OFFSET UNITYSDK_OFFSET(0x9D43F00)
#define NPA_EDITOR_EXTERNALPLATFORM_LAUNCHURL_OFFSET UNITYSDK_OFFSET(0x9D43F70)
#define NPA_EDITOR_EXTERNALPLATFORM_GETPURCHASABLEPRODUCT_OFFSET UNITYSDK_OFFSET(0x9D43F80)
#define NPA_EDITOR_EXTERNALPLATFORM_CANSTARTPURCHASE_OFFSET UNITYSDK_OFFSET(0x9D43FC0)
#define NPA_EDITOR_EXTERNALPLATFORM_CANSTARTRESTORE_OFFSET UNITYSDK_OFFSET(0x9D44000)
#define NPA_EDITOR_EXTERNALPLATFORM_PURCHASEPRODUCT_OFFSET UNITYSDK_OFFSET(0x9D44040)
#define NPA_EDITOR_EXTERNALPLATFORM_RESTOREPRODUCT_OFFSET UNITYSDK_OFFSET(0x9D44080)
#define NPA_EDITOR_EXTERNALPLATFORM_GETENTITLEMENTSASJSONARRAY_OFFSET UNITYSDK_OFFSET(0x9D440C0)
#define NPA_EDITOR_EXTERNALPLATFORM_GETAVAILABLEOFFERSASJSONARRAY_OFFSET UNITYSDK_OFFSET(0x9D44130)
#define NPA_EDITOR_EXTERNALPLATFORM_GETTRANSACTIONINGREDIENTS_OFFSET UNITYSDK_OFFSET(0x9D441A0)
#define NPA_EDITOR_EXTERNALPLATFORM_GETSTOREID_OFFSET UNITYSDK_OFFSET(0x9D441E0)
#define NPA_EDITOR_EXTERNALPLATFORM_STARTSTOREPOLICY_OFFSET UNITYSDK_OFFSET(0x9D44210)
#define NPA_EDITOR_EXTERNALPLATFORM_STOPSTOREPOLICY_OFFSET UNITYSDK_OFFSET(0x9D44220)
#define NPA_EDITOR_EXTERNALPLATFORM_SETCOMMERCEDIALOGMODE_OFFSET UNITYSDK_OFFSET(0x9D44230)
#define NPA_EDITOR_EXTERNALPLATFORM_QUERYFRIENDS_OFFSET UNITYSDK_OFFSET(0x9D44240)
#define NPA_EDITOR_EXTERNALPLATFORM_QUERYBLOCKUSERINFOS_OFFSET UNITYSDK_OFFSET(0x9D44280)
#define NPA_EDITOR_EXTERNALPLATFORM_GETDOWNLOADABLECONTENTSPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x9D442C0)
#define NPA_EDITOR_EXTERNALPLATFORM_PURCHASEDOWNLOADABLECONTENTS_OFFSET UNITYSDK_OFFSET(0x9D44300)
#define NPA_EDITOR_EXTERNALPLATFORM_GETDOWNLOADABLECONTENTSERRORCODE_OFFSET UNITYSDK_OFFSET(0x9D44340)
#define NPA_EDITOR_EXTERNALPLATFORM_ISPRODUCTMULTIQUANTITYENABLED_OFFSET UNITYSDK_OFFSET(0x9D44350)
#define NPA_EDITOR_EXTERNALPLATFORM_EXECUTEDELAYACTION_OFFSET UNITYSDK_OFFSET(0x9D44360)
#define NPA_EDITOR_EXTERNALPLATFORM_GETLASTACTIVECONTROLLERTYPE_OFFSET UNITYSDK_OFFSET(0x9D44430)
#define NPA_EDITOR_EXTERNALPLATFORM_SETCONTROLLEREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x9D44440)
#define NPA_EDITOR_EXTERNALPLATFORM_REQUIRESVIRTUALKEYBOARD_OFFSET UNITYSDK_OFFSET(0x9D44450)
#define NPA_EDITOR_EXTERNALPLATFORM_SHOWVIRTUALKEYBOARD_OFFSET UNITYSDK_OFFSET(0x9D44460)
#define NPA_EDITOR_EXTERNALPLATFORM_GETTASKMANAGERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x9D444A0)
#define NPA_EDITOR_EXTERNALPLATFORM_ADDEXTERNALPLATFORMTASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_EXTERNALPLATFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D445C0)

namespace NPA::Editor
{
	inline static constexpr unsigned int ExternalPlatform_TypeDefinitionIndex = 26143;

	class ExternalPlatform : public Il2CppObject
	{
	public:
		::NPA::Editor::IExternalPlatform* instance; // 0x0
		::System::String* networkCheckUrl; // 0x10
		Il2CppObject* propertyMap; // 0x18
		::UnityEngine::GameObject* TaskManagerGameObject; // 0x8

		Il2CppObject* GetConnectedNetworkStatusAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETCONNECTEDNETWORKSTATUSASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* GetPurchasableProductAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETPURCHASABLEPRODUCTASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* PurchaseProductAsync(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_PURCHASEPRODUCTASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAvailableOffersAsJsonArrayAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETAVAILABLEOFFERSASJSONARRAYASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* GetTransactionIngredientsAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETTRANSACTIONINGREDIENTSASYNC_OFFSET))(nullptr);
		}

		::NPA::Editor::IExternalPlatform* Get()
		{
			return (return (::NPA::Editor::IExternalPlatform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GET_OFFSET))(nullptr);
		}

		::System::Void Set(::NPA::Editor::IExternalPlatform* arg)
		{
			((::System::Void(*)(::NPA::Editor::IExternalPlatform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_SET_OFFSET))(arg, nullptr);
		}

		::System::Void TearDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_TEARDOWN_OFFSET))(nullptr);
		}

		::System::Boolean Init()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_INIT_OFFSET))(nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SetProperty(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_SETPROPERTY_OFFSET))(str, str, nullptr);
		}

		::System::String* GetPlayerDisplayName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETPLAYERDISPLAYNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetUserIdentifier(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETUSERIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::Void SendNotImplementedResult(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_SENDNOTIMPLEMENTEDRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void SendNotSupportedResult(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_SENDNOTSUPPORTEDRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void GetAuthToken(::System::Int32 arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETAUTHTOKEN_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void GetSubAuthToken(::NPA::Ex::Model::AuthorizationParam* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Ex::Model::AuthorizationParam*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETSUBAUTHTOKEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RequireOnline(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_REQUIREONLINE_OFFSET))(arg, nullptr);
		}

		::System::Void GetAuthInfoForWebAPI(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETAUTHINFOFORWEBAPI_OFFSET))(arg, nullptr);
		}

		::System::String* GetPlatformIdentifier()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETPLATFORMIDENTIFIER_OFFSET))(nullptr);
		}

		::System::String* GetTitleId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETTITLEID_OFFSET))(nullptr);
		}

		::System::String* GetGameLanguage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETGAMELANGUAGE_OFFSET))(nullptr);
		}

		::System::String* GetDeviceId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETDEVICEID_OFFSET))(nullptr);
		}

		::System::String* GetOperatingEnvironment()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETOPERATINGENVIRONMENT_OFFSET))(nullptr);
		}

		::System::Boolean ShowPlatformMessageBox(::NPA::Ex::EExternalPlatformMessageType* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::EExternalPlatformMessageType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_SHOWPLATFORMMESSAGEBOX_OFFSET))(arg, nullptr);
		}

		::System::Void GetConnectedNetworkStatus(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETCONNECTEDNETWORKSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void LaunchURL(::System::String* str, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_LAUNCHURL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void GetPurchasableProduct(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETPURCHASABLEPRODUCT_OFFSET))(arg, nullptr);
		}

		::System::Void CanStartPurchase(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_CANSTARTPURCHASE_OFFSET))(arg, nullptr);
		}

		::System::Void CanStartRestore(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_CANSTARTRESTORE_OFFSET))(arg, nullptr);
		}

		::System::Void PurchaseProduct(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_PURCHASEPRODUCT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RestoreProduct(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_RESTOREPRODUCT_OFFSET))(arg, nullptr);
		}

		::System::Void GetEntitlementsAsJsonArray(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETENTITLEMENTSASJSONARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void GetAvailableOffersAsJsonArray(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETAVAILABLEOFFERSASJSONARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void GetTransactionIngredients(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETTRANSACTIONINGREDIENTS_OFFSET))(arg, nullptr);
		}

		::System::String* GetStoreID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETSTOREID_OFFSET))(nullptr);
		}

		::System::Void StartStorePolicy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_STARTSTOREPOLICY_OFFSET))(nullptr);
		}

		::System::Void StopStorePolicy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_STOPSTOREPOLICY_OFFSET))(nullptr);
		}

		::System::Void SetCommerceDialogMode(::NPA::NXPConsoleCommerceDialogMode* arg)
		{
			((::System::Void(*)(::NPA::NXPConsoleCommerceDialogMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_SETCOMMERCEDIALOGMODE_OFFSET))(arg, nullptr);
		}

		::System::Void QueryFriends(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_QUERYFRIENDS_OFFSET))(arg, nullptr);
		}

		::System::Void QueryBlockUserInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_QUERYBLOCKUSERINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void GetDownloadableContentsProductList(::NPA::NXPDownloadableContentsDataContext* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPDownloadableContentsDataContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETDOWNLOADABLECONTENTSPRODUCTLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PurchaseDownloadableContents(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_PURCHASEDOWNLOADABLECONTENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetDownloadableContentsErrorCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETDOWNLOADABLECONTENTSERRORCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsProductMultiQuantityEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_ISPRODUCTMULTIQUANTITYENABLED_OFFSET))(nullptr);
		}

		::System::Void ExecuteDelayAction(::System::Single arg, ::System::Action* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_EXECUTEDELAYACTION_OFFSET))(arg, arg, nullptr);
		}

		::NPA::NXPToyControllerType* GetLastActiveControllerType()
		{
			return (return (::NPA::NXPToyControllerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETLASTACTIVECONTROLLERTYPE_OFFSET))(nullptr);
		}

		::System::Void SetControllerEventHandler(::NPA::INXPToyControllerEventHandler* arg)
		{
			((::System::Void(*)(::NPA::INXPToyControllerEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_SETCONTROLLEREVENTHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Boolean RequiresVirtualKeyboard()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_REQUIRESVIRTUALKEYBOARD_OFFSET))(nullptr);
		}

		::System::Void ShowVirtualKeyboard(::NPA::Editor::Common::NXPVirtualKeyboardOption* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::NXPVirtualKeyboardOption*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_SHOWVIRTUALKEYBOARD_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::GameObject* GetTaskManagerGameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_GETTASKMANAGERGAMEOBJECT_OFFSET))(nullptr);
		}

		Il2CppObject* AddExternalPlatformTask()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_ADDEXTERNALPLATFORMTASK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_EXTERNALPLATFORM_.CTOR_OFFSET))(nullptr);
		}

	};
}

