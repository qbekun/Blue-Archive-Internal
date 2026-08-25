#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class HeroSetting; }

#define <>C__DISPLAYCLASS101_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E62A0)
#define <>C__DISPLAYCLASS101_0__FINDCHARACTERBYCOSTUMEID_B__0_OFFSET UNITYSDK_OFFSET(0x11E6870)

	inline static constexpr unsigned int <>c__DisplayClass101_0_TypeDefinitionIndex = 13452;

	class <>c__DisplayClass101_0 : public Il2CppObject
	{
	public:
		::System::Int64 costumeId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS101_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _FindCharacterByCostumeId_b__0(::MX::Logic::Data::HeroSetting* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::HeroSetting*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS101_0__FINDCHARACTERBYCOSTUMEID_B__0_OFFSET))(arg, nullptr);
		}

	};

