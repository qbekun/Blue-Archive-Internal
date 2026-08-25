#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class LogicEffect; }

#define <>C__DISPLAYCLASS7_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1464500)
#define <>C__DISPLAYCLASS7_0__ONENDED_B__0_OFFSET UNITYSDK_OFFSET(0x1464510)

	inline static constexpr unsigned int <>c__DisplayClass7_0_TypeDefinitionIndex = 15076;

	class <>c__DisplayClass7_0 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* character; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS7_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnEnded_b__0(::MX::MinigameShooting::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS7_0__ONENDED_B__0_OFFSET))(arg, nullptr);
		}

	};

