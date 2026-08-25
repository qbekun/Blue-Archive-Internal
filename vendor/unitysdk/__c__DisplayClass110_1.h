#pragma once
#include "unitysdk.h"

namespace NPA { class NXPToyInitialInfoResult; }
namespace NPA { class NXPToyResult; }

#define <>C__DISPLAYCLASS110_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D4DB20)
#define <>C__DISPLAYCLASS110_1__INITIALIZE_B__2_OFFSET UNITYSDK_OFFSET(0x9D4DED0)

	inline static constexpr unsigned int <>c__DisplayClass110_1_TypeDefinitionIndex = 26151;

	class <>c__DisplayClass110_1 : public Il2CppObject
	{
	public:
		::NPA::NXPToyInitialInfoResult* initialInfoResult; // 0x10
		<>c__DisplayClass110_0* CS$__8__locals1; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS110_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Initialize_b__2(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS110_1__INITIALIZE_B__2_OFFSET))(arg, nullptr);
		}

	};

