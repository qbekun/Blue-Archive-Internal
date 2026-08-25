#pragma once
#include "unitysdk.h"

class BattleResourcesPreloader;

#define <>C__DISPLAYCLASS32_0`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS32_0`1__LOADASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass32_0`1_TypeDefinitionIndex = 3844;

	class <>c__DisplayClass32_0`1 : public Il2CppObject
	{
	public:
		Il2CppObject* callback; // 0x0
		BattleResourcesPreloader* __4__this; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS32_0`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _LoadAsync_b__0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS32_0`1__LOADASYNC_B__0_OFFSET))(arg, nullptr);
		}

	};

