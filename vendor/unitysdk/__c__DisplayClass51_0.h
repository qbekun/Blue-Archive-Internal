#pragma once
#include "unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::BattleEntities { class StatusResult; }

#define <>C__DISPLAYCLASS51_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1177AA0)
#define <>C__DISPLAYCLASS51_0__HASLOGICEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x117DC10)

	inline static constexpr unsigned int <>c__DisplayClass51_0_TypeDefinitionIndex = 13239;

	class <>c__DisplayClass51_0 : public Il2CppObject
	{
	public:
		::FlatData::LogicEffectCategory* category; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS51_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _HasLogicEffect_b__0(::MX::Logic::BattleEntities::StatusResult* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::StatusResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS51_0__HASLOGICEFFECT_B__0_OFFSET))(arg, nullptr);
		}

	};

