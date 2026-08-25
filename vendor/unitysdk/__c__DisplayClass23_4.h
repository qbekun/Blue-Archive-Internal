#pragma once
#include "unitysdk.h"

namespace NPA { class NXPGetAuthTokenResult; }

#define <>C__DISPLAYCLASS23_4_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D6B320)
#define <>C__DISPLAYCLASS23_4__LOGIN_B__10_OFFSET UNITYSDK_OFFSET(0x9D6B330)
#define <>C__DISPLAYCLASS23_4__LOGIN_B__11_OFFSET UNITYSDK_OFFSET(0x9D6B4E0)

	inline static constexpr unsigned int <>c__DisplayClass23_4_TypeDefinitionIndex = 26205;

	class <>c__DisplayClass23_4 : public Il2CppObject
	{
	public:
		::System::String* webToken; // 0x10
		<>c__DisplayClass23_3* CS$__8__locals4; // 0x18
		Il2CppObject* __9__11; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS23_4_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Login_b__10()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS23_4__LOGIN_B__10_OFFSET))(nullptr);
		}

		::System::Void _Login_b__11(::NPA::NXPGetAuthTokenResult* arg)
		{
			((::System::Void(*)(::NPA::NXPGetAuthTokenResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS23_4__LOGIN_B__11_OFFSET))(arg, nullptr);
		}

	};

