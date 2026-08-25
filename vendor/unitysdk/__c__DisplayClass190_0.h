#pragma once
#include "unitysdk.h"

class UIBattle;
namespace MX::Logic::Skills::LogicEffects { class IAdditionalUISet; }
class UIBattleAdditional_Base;

#define <>C__DISPLAYCLASS190_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x222E640)
#define <>C__DISPLAYCLASS190_0__BATTLEADDITIONALUISET_B__0_OFFSET UNITYSDK_OFFSET(0x2230AB0)
#define <>C__DISPLAYCLASS190_0__BATTLEADDITIONALUISET_B__1_OFFSET UNITYSDK_OFFSET(0x2230EB0)

	inline static constexpr unsigned int <>c__DisplayClass190_0_TypeDefinitionIndex = 4439;

	class <>c__DisplayClass190_0 : public Il2CppObject
	{
	public:
		UIBattle* __4__this; // 0x10
		::MX::Logic::Skills::LogicEffects::IAdditionalUISet* setter; // 0x18
		Il2CppObject* __9__1; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS190_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _BattleAdditionalUISet_b__0(UIBattleAdditional_Base* arg)
		{
			((::System::Void(*)(UIBattleAdditional_Base*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS190_0__BATTLEADDITIONALUISET_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _BattleAdditionalUISet_b__1(UIBattleAdditional_Base* arg)
		{
			return ((::System::Boolean(*)(UIBattleAdditional_Base*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS190_0__BATTLEADDITIONALUISET_B__1_OFFSET))(arg, nullptr);
		}

	};

