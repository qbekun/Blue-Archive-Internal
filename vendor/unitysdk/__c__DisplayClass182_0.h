#pragma once
#include "unitysdk.h"

class UIManager;
class UILobby;
class UIWork;

#define <>C__DISPLAYCLASS182_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x2694C60)
#define <>C__DISPLAYCLASS182_0__CO_CHECKSTACKANDADDUIS_B__1_OFFSET UNITYSDK_OFFSET(0x2694C70)
#define <>C__DISPLAYCLASS182_0__CO_CHECKSTACKANDADDUIS_B__3_OFFSET UNITYSDK_OFFSET(0x2694D20)

	inline static constexpr unsigned int <>c__DisplayClass182_0_TypeDefinitionIndex = 6800;

	class <>c__DisplayClass182_0 : public Il2CppObject
	{
	public:
		UIManager* __4__this; // 0x10
		::System::Boolean addLobby; // 0x18
		::System::Boolean addUIWork; // 0x19

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS182_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _co_CheckStackAndAddUIs_b__1(UILobby* arg)
		{
			((::System::Void(*)(UILobby*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS182_0__CO_CHECKSTACKANDADDUIS_B__1_OFFSET))(arg, nullptr);
		}

		::System::Void _co_CheckStackAndAddUIs_b__3(UIWork* arg)
		{
			((::System::Void(*)(UIWork*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS182_0__CO_CHECKSTACKANDADDUIS_B__3_OFFSET))(arg, nullptr);
		}

	};

