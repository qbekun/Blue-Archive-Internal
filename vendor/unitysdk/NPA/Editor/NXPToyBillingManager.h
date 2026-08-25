#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPToyBillingManager; }
namespace NPA::Store { class NXPToyBillingResult; }
namespace NPA { class NXPPaymentInfo; }
namespace NPA { class NXPPaymentInfoV2; }
namespace NPA { class NXPRestoreInfo; }
namespace NPA::Service { class NXPWebInfo; }
namespace NPA::SimpleJSON { class JSONNode; }
namespace UnityEngine { class GameObject; }
namespace NPA::Editor { class InpayThreadCleaner; }

#define NPA_EDITOR_NXPTOYBILLINGMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9D8EBB0)
#define NPA_EDITOR_NXPTOYBILLINGMANAGER_GETBILLINGPAYMENTVALIDATIONRESULT_OFFSET UNITYSDK_OFFSET(0x9D8EDE0)
#define NPA_EDITOR_NXPTOYBILLINGMANAGER_BILLINGREQUESTPRODUCTS_OFFSET UNITYSDK_OFFSET(0x9D8EFE0)
#define NPA_EDITOR_NXPTOYBILLINGMANAGER_GETLOCALIZEDBILLINGRESULT_OFFSET UNITYSDK_OFFSET(0x9D8F320)
#define NPA_EDITOR_NXPTOYBILLINGMANAGER_STOPINPAYPURCHASINGIFNEEDED_OFFSET UNITYSDK_OFFSET(0x9D8F9A0)
#define NPA_EDITOR_NXPTOYBILLINGMANAGER_BILLINGPAYMENT_OFFSET UNITYSDK_OFFSET(0x9D8FB30)
#define NPA_EDITOR_NXPTOYBILLINGMANAGER_BILLINGPAYMENTV2_OFFSET UNITYSDK_OFFSET(0x9D90380)
#define NPA_EDITOR_NXPTOYBILLINGMANAGER_BILLINGRESTORE_OFFSET UNITYSDK_OFFSET(0x9D908C0)
#define NPA_EDITOR_NXPTOYBILLINGMANAGER_ISINNEXONLINKREMOTEPLAY_OFFSET UNITYSDK_OFFSET(0x9D8EF50)
#define NPA_EDITOR_NXPTOYBILLINGMANAGER_CONFIGUREWEBINFO_OFFSET UNITYSDK_OFFSET(0x9D90C00)
#define NPA_EDITOR_NXPTOYBILLINGMANAGER_HANDLEARENAPAYMENTSOCKET_OFFSET UNITYSDK_OFFSET(0x9D90E20)
#define NPA_EDITOR_NXPTOYBILLINGMANAGER_HANDLEBILLINGPURCHASERESULT_OFFSET UNITYSDK_OFFSET(0x9D91230)
#define NPA_EDITOR_NXPTOYBILLINGMANAGER_CREATEINPAYTHREADCLEANER_OFFSET UNITYSDK_OFFSET(0x9D90100)
#define NPA_EDITOR_NXPTOYBILLINGMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D8EDD0)
#define NPA_EDITOR_NXPTOYBILLINGMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D91C00)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPToyBillingManager_TypeDefinitionIndex = 26306;

	class NXPToyBillingManager : public Il2CppObject
	{
	public:
		::NPA::Editor::NXPToyBillingManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8

		::NPA::Editor::NXPToyBillingManager* get_Instance()
		{
			return (return (::NPA::Editor::NXPToyBillingManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYBILLINGMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		BillingPaymentValidationResult* GetBillingPaymentValidationResult()
		{
			return (return (BillingPaymentValidationResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYBILLINGMANAGER_GETBILLINGPAYMENTVALIDATIONRESULT_OFFSET))(nullptr);
		}

		::System::Void BillingRequestProducts(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYBILLINGMANAGER_BILLINGREQUESTPRODUCTS_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Store::NXPToyBillingResult* GetLocalizedBillingResult(::NPA::Store::NXPToyBillingResult* arg)
		{
			return (return (::NPA::Store::NXPToyBillingResult*(*)(::NPA::Store::NXPToyBillingResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYBILLINGMANAGER_GETLOCALIZEDBILLINGRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void StopInpayPurchasingIfNeeded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYBILLINGMANAGER_STOPINPAYPURCHASINGIFNEEDED_OFFSET))(nullptr);
		}

		::System::Void BillingPayment(::NPA::NXPPaymentInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPPaymentInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYBILLINGMANAGER_BILLINGPAYMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BillingPaymentV2(::NPA::NXPPaymentInfoV2* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPPaymentInfoV2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYBILLINGMANAGER_BILLINGPAYMENTV2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BillingRestore(::NPA::NXPRestoreInfo* arg, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPRestoreInfo*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYBILLINGMANAGER_BILLINGRESTORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsInNexonLinkRemotePlay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYBILLINGMANAGER_ISINNEXONLINKREMOTEPLAY_OFFSET))(nullptr);
		}

		::System::Void ConfigureWebInfo(::NPA::Service::NXPWebInfo* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYBILLINGMANAGER_CONFIGUREWEBINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleArenaPaymentSocket()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYBILLINGMANAGER_HANDLEARENAPAYMENTSOCKET_OFFSET))(nullptr);
		}

		::System::Void HandleBillingPurchaseResult(::NPA::SimpleJSON::JSONNode* arg, Il2CppObject* arg, ::System::String* str, ::UnityEngine::GameObject* arg, ::NPA::Editor::InpayThreadCleaner* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, Il2CppObject*, ::System::String*, ::UnityEngine::GameObject*, ::NPA::Editor::InpayThreadCleaner*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYBILLINGMANAGER_HANDLEBILLINGPURCHASERESULT_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::NPA::Editor::InpayThreadCleaner* CreateInpayThreadCleaner()
		{
			return (return (::NPA::Editor::InpayThreadCleaner*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYBILLINGMANAGER_CREATEINPAYTHREADCLEANER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYBILLINGMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYBILLINGMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

