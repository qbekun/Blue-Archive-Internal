#pragma once
#include "unitysdk.h"

namespace FlatData { class EventContentItemType; }
namespace MX::Data::Excel { class EventContentCurrencyItemExcel; }

#define <>C__DISPLAYCLASS306_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D65B0)
#define <>C__DISPLAYCLASS306_0__TRYGETEVENTCONTENTCURRENCYITEMEXCELCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D65C0)

	inline static constexpr unsigned int <>c__DisplayClass306_0_TypeDefinitionIndex = 16103;

	class <>c__DisplayClass306_0 : public Il2CppObject
	{
	public:
		::FlatData::EventContentItemType* eventItemType; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS306_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetEventContentCurrencyItemExcelClient_b__0(::MX::Data::Excel::EventContentCurrencyItemExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentCurrencyItemExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS306_0__TRYGETEVENTCONTENTCURRENCYITEMEXCELCLIENT_B__0_OFFSET))(arg, nullptr);
		}

	};

