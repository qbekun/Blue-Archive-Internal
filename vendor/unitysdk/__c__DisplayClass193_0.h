#pragma once
#include "unitysdk.h"

class UIBattleAdditional_Base;

#define <>C__DISPLAYCLASS193_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x222EB10)
#define <>C__DISPLAYCLASS193_0__BATTLEADDITIONALUIFIND_B__0_OFFSET UNITYSDK_OFFSET(0x22311C0)

	inline static constexpr unsigned int <>c__DisplayClass193_0_TypeDefinitionIndex = 4441;

	class <>c__DisplayClass193_0 : public Il2CppObject
	{
	public:
		::System::String* prefabPath; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS193_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _BattleAdditionalUIFind_b__0(UIBattleAdditional_Base* arg)
		{
			return ((::System::Boolean(*)(UIBattleAdditional_Base*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS193_0__BATTLEADDITIONALUIFIND_B__0_OFFSET))(arg, nullptr);
		}

	};

