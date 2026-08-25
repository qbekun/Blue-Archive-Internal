#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class IExternalPlatform; }
namespace NPA { class NXPPaymentInfo; }
namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::Ex::Model { class TransactionDataObject; }
namespace NPA { class NXPPaymentInfoV2; }
namespace NPA { class NXPRestoreInfo; }

#define NPA_EDITOR_STORE_NXPBILLINGCONSOLE_GETEXTERNALPLATFORM_OFFSET UNITYSDK_OFFSET(0x9BEBE40)
#define NPA_EDITOR_STORE_NXPBILLINGCONSOLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BEBE50)
#define NPA_EDITOR_STORE_NXPBILLINGCONSOLE_REQUESTPRODUCTS_OFFSET UNITYSDK_OFFSET(0x9BEBE80)
#define NPA_EDITOR_STORE_NXPBILLINGCONSOLE_PAYMENT_OFFSET UNITYSDK_OFFSET(0x9BEC1C0)
#define NPA_EDITOR_STORE_NXPBILLINGCONSOLE_CONVERTTOINGREDIENTS_OFFSET UNITYSDK_OFFSET(0x9BEC640)
#define NPA_EDITOR_STORE_NXPBILLINGCONSOLE_PAYMENTV2_OFFSET UNITYSDK_OFFSET(0x9BEC9A0)
#define NPA_EDITOR_STORE_NXPBILLINGCONSOLE_RESTORE_OFFSET UNITYSDK_OFFSET(0x9BECE80)
#define NPA_EDITOR_STORE_NXPBILLINGCONSOLE_DLCREQUESTPRODUCTS_OFFSET UNITYSDK_OFFSET(0x9BED1F0)
#define NPA_EDITOR_STORE_NXPBILLINGCONSOLE_DLCPAYMENT_OFFSET UNITYSDK_OFFSET(0x9BED240)
#define NPA_EDITOR_STORE_NXPBILLINGCONSOLE_DLCOWNERSHIP_OFFSET UNITYSDK_OFFSET(0x9BED290)
#define NPA_EDITOR_STORE_NXPBILLINGCONSOLE_GETINFLOWPATH_OFFSET UNITYSDK_OFFSET(0x9BED2E0)

namespace NPA::Editor::Store
{
	inline static constexpr unsigned int NXPBillingConsole_TypeDefinitionIndex = 26486;

	class NXPBillingConsole : public Il2CppObject
	{
	public:
		::NPA::Editor::IExternalPlatform* externalPlatform; // 0x10

		::NPA::Editor::IExternalPlatform* GetExternalPlatform()
		{
			return (return (::NPA::Editor::IExternalPlatform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGCONSOLE_GETEXTERNALPLATFORM_OFFSET))(nullptr);
		}

		::System::Void .ctor(::NPA::Editor::IExternalPlatform* arg)
		{
			((::System::Void(*)(::NPA::Editor::IExternalPlatform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGCONSOLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void RequestProducts(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGCONSOLE_REQUESTPRODUCTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Payment(::NPA::NXPPaymentInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPPaymentInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGCONSOLE_PAYMENT_OFFSET))(arg, arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* ConvertToIngredients(::NPA::Ex::Model::TransactionDataObject* arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::NPA::Ex::Model::TransactionDataObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGCONSOLE_CONVERTTOINGREDIENTS_OFFSET))(arg, nullptr);
		}

		::System::Void PaymentV2(::NPA::NXPPaymentInfoV2* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPPaymentInfoV2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGCONSOLE_PAYMENTV2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Restore(::NPA::NXPRestoreInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPRestoreInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGCONSOLE_RESTORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DLCRequestProducts(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGCONSOLE_DLCREQUESTPRODUCTS_OFFSET))(arg, nullptr);
		}

		::System::Void DLCPayment(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGCONSOLE_DLCPAYMENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void DLCOwnership(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGCONSOLE_DLCOWNERSHIP_OFFSET))(arg, nullptr);
		}

		::System::String* GetInflowPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGCONSOLE_GETINFLOWPATH_OFFSET))(nullptr);
		}

	};
}

