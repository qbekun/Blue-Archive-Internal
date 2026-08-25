#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class CharacterStat; }

#define <>C__DISPLAYCLASS11_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1469A30)
#define <>C__DISPLAYCLASS11_0__.CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1469BD0)
#define <>C__DISPLAYCLASS11_0__.CTOR_B__1_OFFSET UNITYSDK_OFFSET(0x1469C30)

	inline static constexpr unsigned int <>c__DisplayClass11_0_TypeDefinitionIndex = 15102;

	class <>c__DisplayClass11_0 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* character; // 0x10
		::MX::MinigameShooting::CharacterStat* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS11_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS11_0__.CTOR_B__0_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS11_0__.CTOR_B__1_OFFSET))(nullptr);
		}

	};

