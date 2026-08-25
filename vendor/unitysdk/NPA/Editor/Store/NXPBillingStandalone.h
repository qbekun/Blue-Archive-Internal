#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class INXPApp; }
namespace NPA { class NXPPaymentInfo; }
namespace NPA { class NXPPaymentInfoV2; }
namespace NPA { class NXPRestoreInfo; }

#define NPA_EDITOR_STORE_NXPBILLINGSTANDALONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BF23F0)
#define NPA_EDITOR_STORE_NXPBILLINGSTANDALONE_REQUESTPRODUCTS_OFFSET UNITYSDK_OFFSET(0x9BF2420)
#define NPA_EDITOR_STORE_NXPBILLINGSTANDALONE_PAYMENT_OFFSET UNITYSDK_OFFSET(0x9BF2470)
#define NPA_EDITOR_STORE_NXPBILLINGSTANDALONE_PAYMENTV2_OFFSET UNITYSDK_OFFSET(0x9BF24C0)
#define NPA_EDITOR_STORE_NXPBILLINGSTANDALONE_RESTORE_OFFSET UNITYSDK_OFFSET(0x9BF2510)
#define NPA_EDITOR_STORE_NXPBILLINGSTANDALONE_DLCREQUESTPRODUCTS_OFFSET UNITYSDK_OFFSET(0x9BF25A0)
#define NPA_EDITOR_STORE_NXPBILLINGSTANDALONE_DLCPAYMENT_OFFSET UNITYSDK_OFFSET(0x9BF25F0)
#define NPA_EDITOR_STORE_NXPBILLINGSTANDALONE_DLCOWNERSHIP_OFFSET UNITYSDK_OFFSET(0x9BF2640)

namespace NPA::Editor::Store
{
	inline static constexpr unsigned int NXPBillingStandalone_TypeDefinitionIndex = 26487;

	class NXPBillingStandalone : public Il2CppObject
	{
	public:
		::NPA::Editor::Common::INXPApp* App; // 0x10

		::System::Void .ctor(::NPA::Editor::Common::INXPApp* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::INXPApp*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTANDALONE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void RequestProducts(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTANDALONE_REQUESTPRODUCTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Payment(::NPA::NXPPaymentInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPPaymentInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTANDALONE_PAYMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PaymentV2(::NPA::NXPPaymentInfoV2* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPPaymentInfoV2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTANDALONE_PAYMENTV2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Restore(::NPA::NXPRestoreInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPRestoreInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTANDALONE_RESTORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DLCRequestProducts(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTANDALONE_DLCREQUESTPRODUCTS_OFFSET))(arg, nullptr);
		}

		::System::Void DLCPayment(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTANDALONE_DLCPAYMENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void DLCOwnership(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_STORE_NXPBILLINGSTANDALONE_DLCOWNERSHIP_OFFSET))(arg, nullptr);
		}

	};
}

