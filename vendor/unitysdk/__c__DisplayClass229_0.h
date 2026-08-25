#pragma once
#include "unitysdk.h"

class ParticleInterrupt;
namespace MX::Logic::BattleEntities { class Aura; }
class CharacterVisual;
namespace MX::Logic::Battles { class AuraEventArgs; }
class EffectPlayer;

#define <>C__DISPLAYCLASS229_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1208FB0)
#define <>C__DISPLAYCLASS229_0__APPLYAURASPAWNED_G__AURA_EXPIRED|0_OFFSET UNITYSDK_OFFSET(0x1208FC0)
#define <>C__DISPLAYCLASS229_0__APPLYAURASPAWNED_G__AURA_CANCELLED|1_OFFSET UNITYSDK_OFFSET(0x1209050)
#define <>C__DISPLAYCLASS229_0__APPLYAURASPAWNED_G__SPAWNTARGETDIED|2_OFFSET UNITYSDK_OFFSET(0x1209480)
#define <>C__DISPLAYCLASS229_0__APPLYAURASPAWNED_B__3_OFFSET UNITYSDK_OFFSET(0x1209510)
#define <>C__DISPLAYCLASS229_0__APPLYAURASPAWNED_B__4_OFFSET UNITYSDK_OFFSET(0x12097A0)

	inline static constexpr unsigned int <>c__DisplayClass229_0_TypeDefinitionIndex = 961;

	class <>c__DisplayClass229_0 : public Il2CppObject
	{
	public:
		ParticleInterrupt* particleInterrupt; // 0x10
		::MX::Logic::BattleEntities::Aura* aura; // 0x18
		CharacterVisual* __4__this; // 0x20
		::MX::Logic::Battles::AuraEventArgs* snapshot; // 0x28
		Il2CppObject* __9__4; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS229_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ApplyAuraSpawned_g__Aura_Expired|0(::System::Object* arg, ::MX::Logic::Battles::AuraEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AuraEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS229_0__APPLYAURASPAWNED_G__AURA_EXPIRED|0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _ApplyAuraSpawned_g__Aura_Cancelled|1(::System::Object* arg, ::MX::Logic::Battles::AuraEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AuraEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS229_0__APPLYAURASPAWNED_G__AURA_CANCELLED|1_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _ApplyAuraSpawned_g__SpawnTargetDied|2(::System::Object* arg, ::MX::Logic::Battles::AuraEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AuraEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS229_0__APPLYAURASPAWNED_G__SPAWNTARGETDIED|2_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _ApplyAuraSpawned_b__3(EffectPlayer* arg)
		{
			((::System::Void(*)(EffectPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS229_0__APPLYAURASPAWNED_B__3_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ApplyAuraSpawned_b__4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS229_0__APPLYAURASPAWNED_B__4_OFFSET))(nullptr);
		}

	};

