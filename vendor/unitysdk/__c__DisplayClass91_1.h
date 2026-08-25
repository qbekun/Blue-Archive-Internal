#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }

#define <>C__DISPLAYCLASS91_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FB40)
#define <>C__DISPLAYCLASS91_1__SETCHARACTERHIGHLIGHT_B__2_OFFSET UNITYSDK_OFFSET(0x1D9FB50)
#define <>C__DISPLAYCLASS91_1__SETCHARACTERHIGHLIGHT_B__3_OFFSET UNITYSDK_OFFSET(0x1D9FBD0)

	inline static constexpr unsigned int <>c__DisplayClass91_1_TypeDefinitionIndex = 20391;

	class <>c__DisplayClass91_1 : public Il2CppObject
	{
	public:
		CharacterVisual* cv; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS91_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SetCharacterHighlight_b__2(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS91_1__SETCHARACTERHIGHLIGHT_B__2_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetCharacterHighlight_b__3(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS91_1__SETCHARACTERHIGHLIGHT_B__3_OFFSET))(arg, nullptr);
		}

	};

