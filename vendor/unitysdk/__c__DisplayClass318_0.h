#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentCurrencyItemExcel; }

#define <>C__DISPLAYCLASS318_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D6830)
#define <>C__DISPLAYCLASS318_0__TRYGETEVENTCURRENCYITEMTYPEBYITEMIDCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D6840)

	inline static constexpr unsigned int <>c__DisplayClass318_0_TypeDefinitionIndex = 16109;

	class <>c__DisplayClass318_0 : public Il2CppObject
	{
	public:
		::System::Int64 itemId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS318_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetEventCurrencyItemTypeByItemIdClient_b__0(::MX::Data::Excel::EventContentCurrencyItemExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentCurrencyItemExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS318_0__TRYGETEVENTCURRENCYITEMTYPEBYITEMIDCLIENT_B__0_OFFSET))(arg, nullptr);
		}

	};

