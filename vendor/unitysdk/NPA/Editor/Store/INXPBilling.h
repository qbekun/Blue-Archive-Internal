#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NXPPaymentInfo; }
namespace NPA { class NXPPaymentInfoV2; }
namespace NPA { class NXPRestoreInfo; }

#define NPA_EDITOR_STORE_INXPBILLING_REQUESTPRODUCTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_STORE_INXPBILLING_PAYMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_STORE_INXPBILLING_PAYMENTV2_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_STORE_INXPBILLING_RESTORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_STORE_INXPBILLING_DLCREQUESTPRODUCTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_STORE_INXPBILLING_DLCPAYMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_STORE_INXPBILLING_DLCOWNERSHIP_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Store
{
	inline static constexpr unsigned int INXPBilling_TypeDefinitionIndex = 26478;

	class INXPBilling : public Il2CppObject
	{
	public:
		::System::Void RequestProducts(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_INXPBILLING_REQUESTPRODUCTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Payment(::NPA::NXPPaymentInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPPaymentInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_INXPBILLING_PAYMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PaymentV2(::NPA::NXPPaymentInfoV2* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPPaymentInfoV2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_INXPBILLING_PAYMENTV2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Restore(::NPA::NXPRestoreInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPRestoreInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_INXPBILLING_RESTORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DLCRequestProducts(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_INXPBILLING_DLCREQUESTPRODUCTS_OFFSET))(arg, nullptr);
		}

		::System::Void DLCPayment(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_INXPBILLING_DLCPAYMENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void DLCOwnership(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_INXPBILLING_DLCOWNERSHIP_OFFSET))(arg, nullptr);
		}

	};
}

