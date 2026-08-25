#pragma once
#include "unitysdk.h"

namespace NPA { class INPListener; }
namespace NPA { class NXPToyResult; }

#define <>C__DISPLAYCLASS124_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BD1C00)
#define <>C__DISPLAYCLASS124_0__SETPUSHPOLICY_B__0_OFFSET UNITYSDK_OFFSET(0x9BD5B70)

	inline static constexpr unsigned int <>c__DisplayClass124_0_TypeDefinitionIndex = 25727;

	class <>c__DisplayClass124_0 : public Il2CppObject
	{
	public:
		::NPA::INPListener* listener; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS124_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetPushPolicy_b__0(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS124_0__SETPUSHPOLICY_B__0_OFFSET))(arg, nullptr);
		}

	};

