#pragma once
#include "unitysdk.h"

class CharacterVisual;
namespace MX::Logic::Battles { class NormalAttackSpawnedEventArgs; }
class EntityVisual;
class EffectPlayer;

#define <>C__DISPLAYCLASS228_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1208DF0)
#define <>C__DISPLAYCLASS228_0__APPLYNORMALATTACKSPAWNED_B__0_OFFSET UNITYSDK_OFFSET(0x1208E00)

	inline static constexpr unsigned int <>c__DisplayClass228_0_TypeDefinitionIndex = 960;

	class <>c__DisplayClass228_0 : public Il2CppObject
	{
	public:
		CharacterVisual* __4__this; // 0x10
		::MX::Logic::Battles::NormalAttackSpawnedEventArgs* snapshot; // 0x18
		EntityVisual* targetVisual; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS228_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ApplyNormalAttackSpawned_b__0(EffectPlayer* arg)
		{
			((::System::Void(*)(EffectPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS228_0__APPLYNORMALATTACKSPAWNED_B__0_OFFSET))(arg, nullptr);
		}

	};

