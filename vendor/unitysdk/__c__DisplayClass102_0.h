#pragma once
#include "unitysdk.h"

namespace NPA::Editor { class NPAccountConsole; }
namespace NPA::Auth { class NXPToyUserInfoResult; }

#define <>C__DISPLAYCLASS102_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D48CD0)
#define <>C__DISPLAYCLASS102_0__GETUSERINFO_B__0_OFFSET UNITYSDK_OFFSET(0x9D4CFE0)

	inline static constexpr unsigned int <>c__DisplayClass102_0_TypeDefinitionIndex = 26147;

	class <>c__DisplayClass102_0 : public Il2CppObject
	{
	public:
		Il2CppObject* mainThreadAction; // 0x10
		::NPA::Editor::NPAccountConsole* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS102_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _GetUserInfo_b__0(::System::Boolean arg, ::NPA::Auth::NXPToyUserInfoResult* arg)
		{
			((::System::Void(*)(::System::Boolean, ::NPA::Auth::NXPToyUserInfoResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS102_0__GETUSERINFO_B__0_OFFSET))(arg, arg, nullptr);
		}

	};

