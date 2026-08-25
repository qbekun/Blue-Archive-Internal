#pragma once
#include "unitysdk.h"

class UIBattleAdditional_Base;

#define <>C__DISPLAYCLASS194_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x222ECA0)
#define <>C__DISPLAYCLASS194_0__BATTLEADDITIONALUICLOSE_B__0_OFFSET UNITYSDK_OFFSET(0x22311F0)

	inline static constexpr unsigned int <>c__DisplayClass194_0_TypeDefinitionIndex = 4442;

	class <>c__DisplayClass194_0 : public Il2CppObject
	{
	public:
		::System::String* prefabPath; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS194_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _BattleAdditionalUIClose_b__0(UIBattleAdditional_Base* arg)
		{
			return ((::System::Boolean(*)(UIBattleAdditional_Base*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS194_0__BATTLEADDITIONALUICLOSE_B__0_OFFSET))(arg, nullptr);
		}

	};

