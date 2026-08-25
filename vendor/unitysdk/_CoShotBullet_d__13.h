#pragma once
#include "unitysdk.h"

class SkillActorEffectPlayer;
namespace MX::AppData::DAO::Battle { class EntityEffectDAO; }
class EntityVisual;
namespace MX::Logic::BattleEntities { class IEntityBody; }
namespace UnityEngine { class Vector3; }
class IInterruptEffect;
namespace MX::AppData::DAO::Battle { class VisualSkillEntityDAO; }
class <>c__DisplayClass13_1;
class <>c__DisplayClass13_0;
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace MX::Logic::BattleEntities { class EntityId; }

#define <COSHOTBULLET>D__13_.CTOR_OFFSET UNITYSDK_OFFSET(0x120CD60)
#define <COSHOTBULLET>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1210F10)
#define <COSHOTBULLET>D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1210F20)
#define <COSHOTBULLET>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1211B10)
#define <COSHOTBULLET>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1211B20)
#define <COSHOTBULLET>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1211B70)

	inline static constexpr unsigned int <CoShotBullet>d__13_TypeDefinitionIndex = 983;

	class <CoShotBullet>d__13 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		SkillActorEffectPlayer* __4__this; // 0x20
		::MX::AppData::DAO::Battle::EntityEffectDAO* entityEffect; // 0x28
		EntityVisual* targetVisual; // 0x30
		Il2CppObject* targetPosition; // 0x38
		::MX::Logic::BattleEntities::IEntityBody* bulletBody; // 0x48
		Il2CppObject* bulletEntityPosition; // 0x50
		::UnityEngine::Vector3* bulletEntityForward; // 0x60
		IInterruptEffect* interruptEffect; // 0x70
		::MX::AppData::DAO::Battle::VisualSkillEntityDAO* bulletData; // 0x78
		<>c__DisplayClass13_1* __8__1; // 0x80
		<>c__DisplayClass13_0* __8__2; // 0x88
		::MX::Visual::Battles::BattleActorComponent* battleActorComponent; // 0x90
		::MX::Logic::BattleEntities::EntityId* bulletEntityId; // 0x98
		::System::Int32 frameDuration; // 0x9C
		::System::Int32 fireDelay; // 0xA0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSHOTBULLET>D__13_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOTBULLET>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOTBULLET>D__13_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOTBULLET>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOTBULLET>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOTBULLET>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

