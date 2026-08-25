#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class StatusResult; }

#define <>C__DISPLAYCLASS49_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x11778F0)
#define <>C__DISPLAYCLASS49_0__HASLOGICEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x117DBA0)

	inline static constexpr unsigned int <>c__DisplayClass49_0_TypeDefinitionIndex = 13237;

	class <>c__DisplayClass49_0 : public Il2CppObject
	{
	public:
		::System::String* logicEffectGroupId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _HasLogicEffect_b__0(::MX::Logic::BattleEntities::StatusResult* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::StatusResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_0__HASLOGICEFFECT_B__0_OFFSET))(arg, nullptr);
		}

	};

