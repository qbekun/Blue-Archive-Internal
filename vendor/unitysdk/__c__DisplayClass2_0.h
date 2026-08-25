#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class LogicEffect; }

#define <>C__DISPLAYCLASS2_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x14647C0)
#define <>C__DISPLAYCLASS2_0__ONTICK_B__0_OFFSET UNITYSDK_OFFSET(0x14647D0)

	inline static constexpr unsigned int <>c__DisplayClass2_0_TypeDefinitionIndex = 15079;

	class <>c__DisplayClass2_0 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* character; // 0x10
		::MX::MinigameShooting::Character* owner; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS2_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnTick_b__0(::MX::MinigameShooting::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS2_0__ONTICK_B__0_OFFSET))(arg, nullptr);
		}

	};

