#pragma once
#include "unitysdk.h"

#define BILLINGPRODUCTDATA_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x211D090)
#define BILLINGPRODUCTDATA_GET_PRICEMICRO_OFFSET UNITYSDK_OFFSET(0x211D0A0)
#define BILLINGPRODUCTDATA_GETCALCMICROPRICE_OFFSET UNITYSDK_OFFSET(0x211D0B0)
#define BILLINGPRODUCTDATA_SETDATA_OFFSET UNITYSDK_OFFSET(0x211D130)
#define BILLINGPRODUCTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x211D200)
#define BILLINGPRODUCTDATA_GET_LOCALIZEDPRICE_OFFSET UNITYSDK_OFFSET(0x211D240)
#define BILLINGPRODUCTDATA_SET_CALCMICROPRICE_OFFSET UNITYSDK_OFFSET(0x211D250)
#define BILLINGPRODUCTDATA_SET_LOCALIZEDPRICE_OFFSET UNITYSDK_OFFSET(0x211D260)
#define BILLINGPRODUCTDATA_GET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0x211D270)
#define BILLINGPRODUCTDATA_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x211D280)
#define BILLINGPRODUCTDATA_GET_CALCMICROPRICE_OFFSET UNITYSDK_OFFSET(0x211D290)
#define BILLINGPRODUCTDATA_SET_PRICECURRENCYCODE_OFFSET UNITYSDK_OFFSET(0x211D2A0)
#define BILLINGPRODUCTDATA_SET_PRICEMICRO_OFFSET UNITYSDK_OFFSET(0x211D2B0)
#define BILLINGPRODUCTDATA_GET_PRICECURRENCYCODE_OFFSET UNITYSDK_OFFSET(0x211D2C0)
#define BILLINGPRODUCTDATA_SET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0x211D2D0)

	inline static constexpr unsigned int BillingProductData_TypeDefinitionIndex = 3862;

	class BillingProductData : public Il2CppObject
	{
	public:
		::System::String* _productId_k__BackingField; // 0x10
		::System::String* _localizedPrice_k__BackingField; // 0x18
		::System::Int64 _priceMicro_k__BackingField; // 0x20
		::System::String* _priceCurrencyCode_k__BackingField; // 0x28
		::System::String* _calcMicroPrice_k__BackingField; // 0x30
		::System::Boolean _isTeenage_k__BackingField; // 0x38

		::System::Void set_productId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPRODUCTDATA_SET_PRODUCTID_OFFSET))(str, nullptr);
		}

		::System::Int64 get_priceMicro()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGPRODUCTDATA_GET_PRICEMICRO_OFFSET))(nullptr);
		}

		::System::String* GetCalcMicroPrice(::System::Int64 arg)
		{
			return ((::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPRODUCTDATA_GETCALCMICROPRICE_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::String* str, ::System::Int64 arg, ::System::String* str2, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPRODUCTDATA_SETDATA_OFFSET))(str, arg, str2, arg2, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPRODUCTDATA_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_localizedPrice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGPRODUCTDATA_GET_LOCALIZEDPRICE_OFFSET))(nullptr);
		}

		::System::Void set_calcMicroPrice(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPRODUCTDATA_SET_CALCMICROPRICE_OFFSET))(str, nullptr);
		}

		::System::Void set_localizedPrice(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPRODUCTDATA_SET_LOCALIZEDPRICE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_isTeenage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGPRODUCTDATA_GET_ISTEENAGE_OFFSET))(nullptr);
		}

		::System::String* get_productId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGPRODUCTDATA_GET_PRODUCTID_OFFSET))(nullptr);
		}

		::System::String* get_calcMicroPrice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGPRODUCTDATA_GET_CALCMICROPRICE_OFFSET))(nullptr);
		}

		::System::Void set_priceCurrencyCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPRODUCTDATA_SET_PRICECURRENCYCODE_OFFSET))(str, nullptr);
		}

		::System::Void set_priceMicro(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPRODUCTDATA_SET_PRICEMICRO_OFFSET))(arg, nullptr);
		}

		::System::String* get_priceCurrencyCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGPRODUCTDATA_GET_PRICECURRENCYCODE_OFFSET))(nullptr);
		}

		::System::Void set_isTeenage(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPRODUCTDATA_SET_ISTEENAGE_OFFSET))(arg, nullptr);
		}

	};

