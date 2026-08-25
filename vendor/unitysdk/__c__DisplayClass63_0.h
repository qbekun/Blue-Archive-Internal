#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class Character; }

#define <>C__DISPLAYCLASS63_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1457E70)
#define <>C__DISPLAYCLASS63_0__INITIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1457E80)

	inline static constexpr unsigned int <>c__DisplayClass63_0_TypeDefinitionIndex = 15019;

	class <>c__DisplayClass63_0 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* __4__this; // 0x10
		::System::Action* OnInit; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS63_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Initialize_b__0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS63_0__INITIALIZE_B__0_OFFSET))(nullptr);
		}

	};

