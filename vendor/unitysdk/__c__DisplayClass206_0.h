#pragma once
#include "unitysdk.h"

class CharacterVisual;
namespace MX::Logic::Battles { class AttackEventArgs; }
class EntityVisual;
class EffectPlayer;

#define <>C__DISPLAYCLASS206_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1202810)
#define <>C__DISPLAYCLASS206_0__APPLYHITRESULT_B__0_OFFSET UNITYSDK_OFFSET(0x1202820)

	inline static constexpr unsigned int <>c__DisplayClass206_0_TypeDefinitionIndex = 947;

	class <>c__DisplayClass206_0 : public Il2CppObject
	{
	public:
		CharacterVisual* __4__this; // 0x10
		::MX::Logic::Battles::AttackEventArgs* snapshot; // 0x18
		EntityVisual* caster; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS206_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ApplyHitResult_b__0(EffectPlayer* arg)
		{
			((::System::Void(*)(EffectPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS206_0__APPLYHITRESULT_B__0_OFFSET))(arg, nullptr);
		}

	};

