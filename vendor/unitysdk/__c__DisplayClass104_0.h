#pragma once
#include "unitysdk.h"

class UIManager;
class UILobby;

#define <>C__DISPLAYCLASS104_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x268C4F0)
#define <>C__DISPLAYCLASS104_0__TOLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0x2693120)
#define <>C__DISPLAYCLASS104_0__TOLOBBY_B__2_OFFSET UNITYSDK_OFFSET(0x2693520)

	inline static constexpr unsigned int <>c__DisplayClass104_0_TypeDefinitionIndex = 6784;

	class <>c__DisplayClass104_0 : public Il2CppObject
	{
	public:
		UIManager* __4__this; // 0x10
		Il2CppObject* openedCallback; // 0x18
		Il2CppObject* __9__2; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS104_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ToLobby_b__0(UILobby* arg)
		{
			((::System::Void(*)(UILobby*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS104_0__TOLOBBY_B__0_OFFSET))(arg, nullptr);
		}

		::System::Void _ToLobby_b__2(UILobby* arg)
		{
			((::System::Void(*)(UILobby*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS104_0__TOLOBBY_B__2_OFFSET))(arg, nullptr);
		}

	};

