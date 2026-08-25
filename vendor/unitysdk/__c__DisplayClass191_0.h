#pragma once
#include "unitysdk.h"

class UIBattle;
class UIBattleAdditional_Base;

#define <>C__DISPLAYCLASS191_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x222E930)
#define <>C__DISPLAYCLASS191_0__BATTLEADDITIONALUISET_B__0_OFFSET UNITYSDK_OFFSET(0x2230F70)
#define <>C__DISPLAYCLASS191_0__BATTLEADDITIONALUISET_B__1_OFFSET UNITYSDK_OFFSET(0x2231190)

	inline static constexpr unsigned int <>c__DisplayClass191_0_TypeDefinitionIndex = 4440;

	class <>c__DisplayClass191_0 : public Il2CppObject
	{
	public:
		UIBattle* __4__this; // 0x10
		::System::String* uiPath; // 0x18
		Il2CppObject* __9__1; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS191_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _BattleAdditionalUISet_b__0(UIBattleAdditional_Base* arg)
		{
			((::System::Void(*)(UIBattleAdditional_Base*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS191_0__BATTLEADDITIONALUISET_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _BattleAdditionalUISet_b__1(UIBattleAdditional_Base* arg)
		{
			return ((::System::Boolean(*)(UIBattleAdditional_Base*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS191_0__BATTLEADDITIONALUISET_B__1_OFFSET))(arg, nullptr);
		}

	};

