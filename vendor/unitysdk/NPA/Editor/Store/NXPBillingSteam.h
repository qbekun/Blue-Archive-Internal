#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class IExternalPlatform; }
namespace NPA { class NXPPaymentInfo; }
namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::Ex::Model { class TransactionDataObject; }
namespace NPA { class NXPPaymentInfoV2; }
namespace NPA { class NXPRestoreInfo; }
namespace NPA { class NXPDLCProductDefinition&; }

#define NPA_EDITOR_STORE_NXPBILLINGSTEAM_GETEXTERNALPLATFORM_OFFSET UNITYSDK_OFFSET(0x9BF2690)
#define NPA_EDITOR_STORE_NXPBILLINGSTEAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BF26A0)
#define NPA_EDITOR_STORE_NXPBILLINGSTEAM_REQUESTPRODUCTS_OFFSET UNITYSDK_OFFSET(0x9BF26D0)
#define NPA_EDITOR_STORE_NXPBILLINGSTEAM_PAYMENT_OFFSET UNITYSDK_OFFSET(0x9BF2870)
#define NPA_EDITOR_STORE_NXPBILLINGSTEAM_CONVERTTOINGREDIENTS_OFFSET UNITYSDK_OFFSET(0x9BF2C40)
#define NPA_EDITOR_STORE_NXPBILLINGSTEAM_PAYMENTV2_OFFSET UNITYSDK_OFFSET(0x9BF2FA0)
#define NPA_EDITOR_STORE_NXPBILLINGSTEAM_RESTORE_OFFSET UNITYSDK_OFFSET(0x9BF3410)
#define NPA_EDITOR_STORE_NXPBILLINGSTEAM_TRYGETENTITLEMENTSASJSONARRAY_OFFSET UNITYSDK_OFFSET(0x9BF3600)
#define NPA_EDITOR_STORE_NXPBILLINGSTEAM_DLCREQUESTPRODUCTS_OFFSET UNITYSDK_OFFSET(0x9BF3820)
#define NPA_EDITOR_STORE_NXPBILLINGSTEAM_DLCPAYMENT_OFFSET UNITYSDK_OFFSET(0x9BF39B0)
#define NPA_EDITOR_STORE_NXPBILLINGSTEAM_DLCOWNERSHIP_OFFSET UNITYSDK_OFFSET(0x9BF3CC0)
#define NPA_EDITOR_STORE_NXPBILLINGSTEAM_BUILDDOWNLOADABLECONTENTSCONTEXT_OFFSET UNITYSDK_OFFSET(0x9BF3E50)
#define NPA_EDITOR_STORE_NXPBILLINGSTEAM_TRYGETDOWNLOADABLECONTENTSPRODUCTBYID_OFFSET UNITYSDK_OFFSET(0x9BF4150)
#define NPA_EDITOR_STORE_NXPBILLINGSTEAM_TRYGETDLCPRODUCTINDEXBYID_OFFSET UNITYSDK_OFFSET(0x9BF4360)

namespace NPA::Editor::Store
{
	inline static constexpr unsigned int NXPBillingSteam_TypeDefinitionIndex = 26507;

	class NXPBillingSteam : public Il2CppObject
	{
	public:
		::NPA::Editor::IExternalPlatform* externalPlatform; // 0x10

		::NPA::Editor::IExternalPlatform* GetExternalPlatform()
		{
			return (return (::NPA::Editor::IExternalPlatform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTEAM_GETEXTERNALPLATFORM_OFFSET))(nullptr);
		}

		::System::Void .ctor(::NPA::Editor::IExternalPlatform* arg)
		{
			((::System::Void(*)(::NPA::Editor::IExternalPlatform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTEAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void RequestProducts(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTEAM_REQUESTPRODUCTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Payment(::NPA::NXPPaymentInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPPaymentInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTEAM_PAYMENT_OFFSET))(arg, arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* ConvertToIngredients(::NPA::Ex::Model::TransactionDataObject* arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::NPA::Ex::Model::TransactionDataObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTEAM_CONVERTTOINGREDIENTS_OFFSET))(arg, nullptr);
		}

		::System::Void PaymentV2(::NPA::NXPPaymentInfoV2* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPPaymentInfoV2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTEAM_PAYMENTV2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Restore(::NPA::NXPRestoreInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPRestoreInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTEAM_RESTORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void TryGetEntitlementsAsJsonArray(::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTEAM_TRYGETENTITLEMENTSASJSONARRAY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DLCRequestProducts(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTEAM_DLCREQUESTPRODUCTS_OFFSET))(arg, nullptr);
		}

		::System::Void DLCPayment(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTEAM_DLCPAYMENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void DLCOwnership(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTEAM_DLCOWNERSHIP_OFFSET))(arg, nullptr);
		}

		::System::Void BuildDownloadableContentsContext(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTEAM_BUILDDOWNLOADABLECONTENTSCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetDownloadableContentsProductById(::System::String* str, Il2CppObject* arg, ::NPA::NXPDLCProductDefinition&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject*, ::NPA::NXPDLCProductDefinition&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTEAM_TRYGETDOWNLOADABLECONTENTSPRODUCTBYID_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryGetDLCProductIndexById(::System::String* str, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTEAM_TRYGETDLCPRODUCTINDEXBYID_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

