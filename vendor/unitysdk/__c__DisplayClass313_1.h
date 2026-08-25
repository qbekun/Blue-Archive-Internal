#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentCharacterBonusExcel; }

#define <>C__DISPLAYCLASS313_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D67A0)
#define <>C__DISPLAYCLASS313_1__HASCHARACTERBONUSFOREVENTCONTENTITEMTYPECLIENT_B__1_OFFSET UNITYSDK_OFFSET(0x18D67B0)

	inline static constexpr unsigned int <>c__DisplayClass313_1_TypeDefinitionIndex = 16107;

	class <>c__DisplayClass313_1 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::EventContentCharacterBonusExcel* excel; // 0x10
		<>c__DisplayClass313_0* CS$__8__locals1; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS313_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _HasCharacterBonusForEventContentItemTypeClient_b__1(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS313_1__HASCHARACTERBONUSFOREVENTCONTENTITEMTYPECLIENT_B__1_OFFSET))(arg, nullptr);
		}

	};

