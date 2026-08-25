#pragma once
#include "unitysdk.h"

namespace FlatData { class EventContentItemType; }
namespace MX::Data::Excel { class EventContentCharacterBonusExcel; }

#define <>C__DISPLAYCLASS313_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D6690)
#define <>C__DISPLAYCLASS313_0__HASCHARACTERBONUSFOREVENTCONTENTITEMTYPECLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D66A0)

	inline static constexpr unsigned int <>c__DisplayClass313_0_TypeDefinitionIndex = 16106;

	class <>c__DisplayClass313_0 : public Il2CppObject
	{
	public:
		::FlatData::EventContentItemType* eventContentItemType; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS313_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _HasCharacterBonusForEventContentItemTypeClient_b__0(::MX::Data::Excel::EventContentCharacterBonusExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentCharacterBonusExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS313_0__HASCHARACTERBONUSFOREVENTCONTENTITEMTYPECLIENT_B__0_OFFSET))(arg, nullptr);
		}

	};

