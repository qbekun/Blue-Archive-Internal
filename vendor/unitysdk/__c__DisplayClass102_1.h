#pragma once
#include "unitysdk.h"

namespace NPA::Auth { class NXPToyUserInfoResult; }
namespace NPA::Auth { class NXPToySignOutResult; }

#define <>C__DISPLAYCLASS102_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D4D350)
#define <>C__DISPLAYCLASS102_1__GETUSERINFO_G__SIGNOUTCALLBACK|1_OFFSET UNITYSDK_OFFSET(0x9D4D360)

	inline static constexpr unsigned int <>c__DisplayClass102_1_TypeDefinitionIndex = 26148;

	class <>c__DisplayClass102_1 : public Il2CppObject
	{
	public:
		::NPA::Auth::NXPToyUserInfoResult* userInfoResult; // 0x10
		<>c__DisplayClass102_0* CS$__8__locals1; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS102_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _GetUserInfo_g__SignOutCallback|1(::NPA::Auth::NXPToySignOutResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToySignOutResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS102_1__GETUSERINFO_G__SIGNOUTCALLBACK|1_OFFSET))(arg, nullptr);
		}

	};

