#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
class <>c__DisplayClass2_0;
namespace FlatData { class LogicEffectCategory; }

#define <>C__DISPLAYCLASS2_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x122B360)
#define <>C__DISPLAYCLASS2_1__GETCHECKCOUNT_B__1_OFFSET UNITYSDK_OFFSET(0x122B370)

	inline static constexpr unsigned int <>c__DisplayClass2_1_TypeDefinitionIndex = 13786;

	class <>c__DisplayClass2_1 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* a; // 0x10
		<>c__DisplayClass2_0* CS$__8__locals1; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS2_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _GetCheckCount_b__1(::FlatData::LogicEffectCategory* arg)
		{
			((::System::Void(*)(::FlatData::LogicEffectCategory*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS2_1__GETCHECKCOUNT_B__1_OFFSET))(arg, nullptr);
		}

	};

