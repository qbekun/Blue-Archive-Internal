#pragma once
#include "unitysdk.h"

namespace MX::Data { class PickupFirstGetBonusExcelData; }

#define <>C__DISPLAYCLASS141_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x19564A0)
#define <>C__DISPLAYCLASS141_0__TRYGETPICKUPFIRSTGETBONUSBYCHARACTERID_B__0_OFFSET UNITYSDK_OFFSET(0x1959560)

	inline static constexpr unsigned int <>c__DisplayClass141_0_TypeDefinitionIndex = 16393;

	class <>c__DisplayClass141_0 : public Il2CppObject
	{
	public:
		::System::Int64 characterId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS141_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetPickupFirstGetBonusByCharacterId_b__0(::MX::Data::PickupFirstGetBonusExcelData* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::PickupFirstGetBonusExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS141_0__TRYGETPICKUPFIRSTGETBONUSBYCHARACTERID_B__0_OFFSET))(arg, nullptr);
		}

	};

