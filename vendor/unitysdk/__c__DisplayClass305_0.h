#pragma once
#include "unitysdk.h"

namespace FlatData { class EventContentItemType; }
namespace MX::Data::Excel { class EventContentCurrencyItemExcel; }

#define <>C__DISPLAYCLASS305_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D6580)
#define <>C__DISPLAYCLASS305_0__TRYGETEVENTCURRENCYITEMEXCELCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D6590)

	inline static constexpr unsigned int <>c__DisplayClass305_0_TypeDefinitionIndex = 16102;

	class <>c__DisplayClass305_0 : public Il2CppObject
	{
	public:
		::FlatData::EventContentItemType* eventItemType; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS305_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetEventCurrencyItemExcelClient_b__0(::MX::Data::Excel::EventContentCurrencyItemExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentCurrencyItemExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS305_0__TRYGETEVENTCURRENCYITEMEXCELCLIENT_B__0_OFFSET))(arg, nullptr);
		}

	};

