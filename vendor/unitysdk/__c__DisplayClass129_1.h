#pragma once
#include "unitysdk.h"

namespace NPA { class NXPToyInitialInfoResult; }
namespace NPA::Auth { class NXPToySignOutResult; }
namespace NPA { class NXPToyResult; }

#define <>C__DISPLAYCLASS129_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D7C160)
#define <>C__DISPLAYCLASS129_1__INITIALIZE_G__SIGNOUTCALLBACK|3_OFFSET UNITYSDK_OFFSET(0x9D7C170)
#define <>C__DISPLAYCLASS129_1__INITIALIZE_B__4_OFFSET UNITYSDK_OFFSET(0x9D7C1B0)

	inline static constexpr unsigned int <>c__DisplayClass129_1_TypeDefinitionIndex = 26233;

	class <>c__DisplayClass129_1 : public Il2CppObject
	{
	public:
		::NPA::NXPToyInitialInfoResult* initialInfoResult; // 0x10
		<>c__DisplayClass129_0* CS$__8__locals1; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS129_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Initialize_g__SignOutCallback|3(::NPA::Auth::NXPToySignOutResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToySignOutResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS129_1__INITIALIZE_G__SIGNOUTCALLBACK|3_OFFSET))(arg, nullptr);
		}

		::System::Void _Initialize_b__4(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS129_1__INITIALIZE_B__4_OFFSET))(arg, nullptr);
		}

	};

