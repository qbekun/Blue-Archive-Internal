#pragma once
#include "../../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONArray; }

#define NPA_INFACESDK_COMPONENT_INPAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D10360)
#define NPA_INFACESDK_COMPONENT_INPAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D104C0)
#define NPA_INFACESDK_COMPONENT_INPAY_GETOPENGAMECASHWEBURL_OFFSET UNITYSDK_OFFSET(0x9D10620)
#define NPA_INFACESDK_COMPONENT_INPAY_ABORTPURCHASE_OFFSET UNITYSDK_OFFSET(0x9D109A0)
#define NPA_INFACESDK_COMPONENT_INPAY_INPAYPRODUCTIDSTOJSONARRAY_OFFSET UNITYSDK_OFFSET(0x9D10AE0)
#define NPA_INFACESDK_COMPONENT_INPAY_CHECKPURCHASEAVAILABILITY_OFFSET UNITYSDK_OFFSET(0x9D10BA0)
#define NPA_INFACESDK_COMPONENT_INPAY_BILLINGREQUESTPRODUCTS_OFFSET UNITYSDK_OFFSET(0x9D10FE0)
#define NPA_INFACESDK_COMPONENT_INPAY_GETSERVICETICKET_OFFSET UNITYSDK_OFFSET(0x9D112D0)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int Inpay_TypeDefinitionIndex = 25888;

	class Inpay : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INPAY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INPAY_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void GetOpenGameCashWebUrl(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INPAY_GETOPENGAMECASHWEBURL_OFFSET))(str, str, str, str, arg, arg, nullptr);
		}

		::System::Void AbortPurchase()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INPAY_ABORTPURCHASE_OFFSET))(nullptr);
		}

		::NPA::SimpleJSON::JSONArray* InpayProductIdsToJSONArray(Il2CppObject* arg)
		{
			return (return (::NPA::SimpleJSON::JSONArray*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INPAY_INPAYPRODUCTIDSTOJSONARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void CheckPurchaseAvailability(::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INPAY_CHECKPURCHASEAVAILABILITY_OFFSET))(str, str, str, arg, str, str, str, str, arg, nullptr);
		}

		::System::Void BillingRequestProducts(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INPAY_BILLINGREQUESTPRODUCTS_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void GetServiceTicket(::System::String* str, ::System::String* str, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INPAY_GETSERVICETICKET_OFFSET))(str, str, arg, arg, nullptr);
		}

	};
}

