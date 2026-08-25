#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class EffectAreaSpawnedEventArgs; }
class CharacterVisual;
class EffectPlayer;

#define <>C__DISPLAYCLASS230_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x12097C0)
#define <>C__DISPLAYCLASS230_0__APPLYAREASPAWNED_B__0_OFFSET UNITYSDK_OFFSET(0x12097D0)

	inline static constexpr unsigned int <>c__DisplayClass230_0_TypeDefinitionIndex = 962;

	class <>c__DisplayClass230_0 : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::EffectAreaSpawnedEventArgs* snapshot; // 0x10
		CharacterVisual* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS230_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ApplyAreaSpawned_b__0(EffectPlayer* arg)
		{
			((::System::Void(*)(EffectPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS230_0__APPLYAREASPAWNED_B__0_OFFSET))(arg, nullptr);
		}

	};

