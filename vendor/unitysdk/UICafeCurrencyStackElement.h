#pragma once
#include "unitysdk.h"

namespace FlatData { class CurrencyTypes; }
class UILabel;
class UITexture;
class UISlider;

#define UICAFECURRENCYSTACKELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x227CEF0)
#define UICAFECURRENCYSTACKELEMENT_GET_CURRENCYTEXTURE_OFFSET UNITYSDK_OFFSET(0x227D240)
#define UICAFECURRENCYSTACKELEMENT_SETCURRENCYTEXTURE_OFFSET UNITYSDK_OFFSET(0x227D2F0)
#define UICAFECURRENCYSTACKELEMENT_GET_PRODUCTIONPERHOUR_OFFSET UNITYSDK_OFFSET(0x227D040)
#define UICAFECURRENCYSTACKELEMENT_SETCURRENCY_OFFSET UNITYSDK_OFFSET(0x227D400)
#define UICAFECURRENCYSTACKELEMENT_GET_CURRENTSTACK_OFFSET UNITYSDK_OFFSET(0x227D0F0)
#define UICAFECURRENCYSTACKELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x227D410)
#define UICAFECURRENCYSTACKELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x227D420)
#define UICAFECURRENCYSTACKELEMENT_GET_GAUGE_OFFSET UNITYSDK_OFFSET(0x227D1A0)
#define UICAFECURRENCYSTACKELEMENT_GET_CURRENCY_OFFSET UNITYSDK_OFFSET(0x227D430)

	inline static constexpr unsigned int UICafeCurrencyStackElement_TypeDefinitionIndex = 4652;

	class UICafeCurrencyStackElement : public Il2CppObject
	{
	public:
		::FlatData::CurrencyTypes* currency; // 0x18
		UILabel* productionPerHour; // 0x20
		UILabel* currentStack; // 0x28
		UITexture* currencyTexture; // 0x30
		UISlider* gauge; // 0x38

		::System::Void SetData(::System::Double arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Double, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKELEMENT_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		UITexture* get_CurrencyTexture()
		{
			return ((UITexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKELEMENT_GET_CURRENCYTEXTURE_OFFSET))(nullptr);
		}

		::System::Void SetCurrencyTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKELEMENT_SETCURRENCYTEXTURE_OFFSET))(nullptr);
		}

		UILabel* get_ProductionPerHour()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKELEMENT_GET_PRODUCTIONPERHOUR_OFFSET))(nullptr);
		}

		::System::Void SetCurrency(::FlatData::CurrencyTypes* arg)
		{
			((::System::Void(*)(::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKELEMENT_SETCURRENCY_OFFSET))(arg, nullptr);
		}

		UILabel* get_CurrentStack()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKELEMENT_GET_CURRENTSTACK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKELEMENT_.CTOR_OFFSET))(nullptr);
		}

		UISlider* get_Gauge()
		{
			return ((UISlider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKELEMENT_GET_GAUGE_OFFSET))(nullptr);
		}

		::FlatData::CurrencyTypes* get_Currency()
		{
			return ((::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECURRENCYSTACKELEMENT_GET_CURRENCY_OFFSET))(nullptr);
		}

	};

