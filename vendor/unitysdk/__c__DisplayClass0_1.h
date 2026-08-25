#pragma once
#include "unitysdk.h"

class <>c__DisplayClass0_0;
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define <>C__DISPLAYCLASS0_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D2D60)
#define <>C__DISPLAYCLASS0_1__REORDER_G__COMPAREDESCENDINGLOGICEFFECTTEMPLATECOUNT|2_OFFSET UNITYSDK_OFFSET(0x11D34C0)
#define <>C__DISPLAYCLASS0_1__REORDER_G__COMPAREASCENDINGLOGICEFFECTTEMPLATECOUNT|3_OFFSET UNITYSDK_OFFSET(0x11D3890)

	inline static constexpr unsigned int <>c__DisplayClass0_1_TypeDefinitionIndex = 13373;

	class <>c__DisplayClass0_1 : public Il2CppObject
	{
	public:
		Il2CppObject* parameters; // 0x10
		<>c__DisplayClass0_0* CS$__8__locals1; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS0_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 _Reorder_g__CompareDescendingLogicEffectTemplateCount|2(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS0_1__REORDER_G__COMPAREDESCENDINGLOGICEFFECTTEMPLATECOUNT|2_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 _Reorder_g__CompareAscendingLogicEffectTemplateCount|3(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS0_1__REORDER_G__COMPAREASCENDINGLOGICEFFECTTEMPLATECOUNT|3_OFFSET))(arg, arg2, nullptr);
		}

	};

