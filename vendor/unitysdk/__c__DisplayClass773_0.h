#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define <>C__DISPLAYCLASS773_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x11365E0)
#define <>C__DISPLAYCLASS773_0__PROCESSEXTERNALBEHAVIORFORCECHANGEPHASE_G__COCHANGEPHASE|0_OFFSET UNITYSDK_OFFSET(0x11365F0)

	inline static constexpr unsigned int <>c__DisplayClass773_0_TypeDefinitionIndex = 13081;

	class <>c__DisplayClass773_0 : public Il2CppObject
	{
	public:
		::System::Int32 delay; // 0x10
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* __4__this; // 0x18
		::System::Int32 phase; // 0x20
		::System::Boolean keepATGWhenAIPhaseChange; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS773_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _ProcessExternalBehaviorForceChangePhase_g__CoChangePhase|0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS773_0__PROCESSEXTERNALBEHAVIORFORCECHANGEPHASE_G__COCHANGEPHASE|0_OFFSET))(nullptr);
		}

	};

