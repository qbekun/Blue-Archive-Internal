#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
class CharacterVisual;
class EntityVisual;
namespace UnityEngine { class Vector3; }
class EffectPlayer;

#define <>C__DISPLAYCLASS209_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1205700)
#define <>C__DISPLAYCLASS209_0__APPLYBARRIERLOGICEFFECTHIT_B__0_OFFSET UNITYSDK_OFFSET(0x1205710)

	inline static constexpr unsigned int <>c__DisplayClass209_0_TypeDefinitionIndex = 950;

	class <>c__DisplayClass209_0 : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::LogicEffectHitEventArgs* hitLogicEffect; // 0x10
		CharacterVisual* __4__this; // 0x18
		EntityVisual* caster; // 0x20
		::UnityEngine::Vector3* bulletDestination; // 0x28
		::System::Single durationSecond; // 0x34

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS209_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ApplyBarrierLogicEffectHit_b__0(EffectPlayer* arg)
		{
			((::System::Void(*)(EffectPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS209_0__APPLYBARRIERLOGICEFFECTHIT_B__0_OFFSET))(arg, nullptr);
		}

	};

