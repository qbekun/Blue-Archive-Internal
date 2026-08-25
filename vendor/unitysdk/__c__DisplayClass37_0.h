#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class Section; }
namespace MX::MinigameShooting { class Character; }

#define <>C__DISPLAYCLASS37_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1473C60)
#define <>C__DISPLAYCLASS37_0__LOAD_B__0_OFFSET UNITYSDK_OFFSET(0x1473C70)

	inline static constexpr unsigned int <>c__DisplayClass37_0_TypeDefinitionIndex = 15133;

	class <>c__DisplayClass37_0 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Section* __4__this; // 0x10
		::System::Boolean playerLoad; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS37_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Load_b__0(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS37_0__LOAD_B__0_OFFSET))(arg, nullptr);
		}

	};

