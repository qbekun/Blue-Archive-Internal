#pragma once
#include "unitysdk.h"

class SkillActorEffectPlayer;
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class IEntityBody; }
class EntityVisual;
class IInterruptEffect;
class ParticleInterrupt;

#define <COPLAYAREASHOTEFFECTINTERNAL>D__10_.CTOR_OFFSET UNITYSDK_OFFSET(0x120D370)
#define <COPLAYAREASHOTEFFECTINTERNAL>D__10_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x120E8B0)
#define <COPLAYAREASHOTEFFECTINTERNAL>D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x120E8C0)
#define <COPLAYAREASHOTEFFECTINTERNAL>D__10_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x120ECD0)
#define <COPLAYAREASHOTEFFECTINTERNAL>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x120ECE0)
#define <COPLAYAREASHOTEFFECTINTERNAL>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x120ED30)

	inline static constexpr unsigned int <CoPlayAreaShotEffectInternal>d__10_TypeDefinitionIndex = 979;

	class <CoPlayAreaShotEffectInternal>d__10 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		SkillActorEffectPlayer* __4__this; // 0x20
		Il2CppObject* isAreaExpired; // 0x28
		::System::Boolean isFixedInMovingArea; // 0x30
		::MX::Logic::Skills::SkillSpecification* skillSpecification; // 0x38
		::System::String* entityName; // 0x40
		::MX::Logic::BattleEntities::IEntityBody* areaBody; // 0x48
		EntityVisual* targetVisual; // 0x50
		Il2CppObject* targetPosition; // 0x58
		IInterruptEffect* interruptEffect; // 0x68
		ParticleInterrupt* particleInterrupt; // 0x70

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYAREASHOTEFFECTINTERNAL>D__10_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYAREASHOTEFFECTINTERNAL>D__10_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYAREASHOTEFFECTINTERNAL>D__10_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYAREASHOTEFFECTINTERNAL>D__10_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYAREASHOTEFFECTINTERNAL>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYAREASHOTEFFECTINTERNAL>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

