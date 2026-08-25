#pragma once
#include "unitysdk.h"

class SkillActorEffectPlayer;
namespace MX::AppData::DAO::Battle { class EntityEffectDAO; }
class EntityVisual;
namespace MX::Logic::BattleEntities { class Beam; }
class IInterruptEffect;
namespace MX::AppData::DAO::Battle { class VisualSkillEntityDAO; }
class <>c__DisplayClass14_0;
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace MX::Logic::BattleEntities { class EntityId; }

#define <COSHOTBEAM>D__14_.CTOR_OFFSET UNITYSDK_OFFSET(0x120D4D0)
#define <COSHOTBEAM>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1211EE0)
#define <COSHOTBEAM>D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1211EF0)
#define <COSHOTBEAM>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12128C0)
#define <COSHOTBEAM>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x12128D0)
#define <COSHOTBEAM>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1212920)

	inline static constexpr unsigned int <CoShotBeam>d__14_TypeDefinitionIndex = 985;

	class <CoShotBeam>d__14 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		SkillActorEffectPlayer* __4__this; // 0x20
		::MX::AppData::DAO::Battle::EntityEffectDAO* entityEffect; // 0x28
		EntityVisual* targetVisual; // 0x30
		Il2CppObject* targetPosition; // 0x38
		::MX::Logic::BattleEntities::Beam* beam; // 0x48
		IInterruptEffect* interruptEffect; // 0x50
		::MX::AppData::DAO::Battle::VisualSkillEntityDAO* beamData; // 0x58
		<>c__DisplayClass14_0* __8__1; // 0x60
		::MX::Visual::Battles::BattleActorComponent* battleActorComponent; // 0x68
		::MX::Logic::BattleEntities::EntityId* bulletEntityId; // 0x70
		::System::Int32 frameDuration; // 0x74
		::System::Int32 fireDelay; // 0x78

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSHOTBEAM>D__14_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOTBEAM>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOTBEAM>D__14_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOTBEAM>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOTBEAM>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOTBEAM>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

