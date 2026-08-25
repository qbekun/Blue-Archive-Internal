#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }

#define <>C__DISPLAYCLASS40_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1166C00)
#define <>C__DISPLAYCLASS40_0__HASLOGICEFFECTTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1166C10)

	inline static constexpr unsigned int <>c__DisplayClass40_0_TypeDefinitionIndex = 13175;

	class <>c__DisplayClass40_0 : public Il2CppObject
	{
	public:
		::System::Type* type; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS40_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _HasLogicEffectType_b__0(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS40_0__HASLOGICEFFECTTYPE_B__0_OFFSET))(arg, nullptr);
		}

	};

