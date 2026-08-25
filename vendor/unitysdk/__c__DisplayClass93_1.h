#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class LogicEffectValue; }
class <>c__DisplayClass93_0;
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }

#define <>C__DISPLAYCLASS93_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1197F90)
#define <>C__DISPLAYCLASS93_1__APPLYABILITY_B__1_OFFSET UNITYSDK_OFFSET(0x1199590)

	inline static constexpr unsigned int <>c__DisplayClass93_1_TypeDefinitionIndex = 13299;

	class <>c__DisplayClass93_1 : public Il2CppObject
	{
	public:
		::MX::Logic::Data::LogicEffectValue* value; // 0x10
		<>c__DisplayClass93_0* CS$__8__locals2; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS93_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ApplyAbility_b__1(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS93_1__APPLYABILITY_B__1_OFFSET))(arg, nullptr);
		}

	};

