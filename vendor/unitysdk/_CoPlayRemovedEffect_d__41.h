#pragma once
#include "unitysdk.h"

class ParticleInterrupt;
class EffectPlayer;
namespace MX::AppData::DAO::Battle { class VisualEffectDAO; }
class EntityVisual;
namespace MX::Logic::BattleEntities { class IEntityBody; }
namespace UnityEngine { class Vector3; }
namespace MX::Logic::Coroutine { class WaitForLateUpdate; }

#define <COPLAYREMOVEDEFFECT>D__41_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B8FD0)
#define <COPLAYREMOVEDEFFECT>D__41_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B8FF0)
#define <COPLAYREMOVEDEFFECT>D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13B9000)
#define <COPLAYREMOVEDEFFECT>D__41_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13B9360)
#define <COPLAYREMOVEDEFFECT>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x13B9370)
#define <COPLAYREMOVEDEFFECT>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13B93C0)

	inline static constexpr unsigned int <CoPlayRemovedEffect>d__41_TypeDefinitionIndex = 1004;

	class <CoPlayRemovedEffect>d__41 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ParticleInterrupt* interruptLoop; // 0x20
		EffectPlayer* __4__this; // 0x28
		::MX::AppData::DAO::Battle::VisualEffectDAO* effectData; // 0x30
		EntityVisual* casterVisual; // 0xA8
		EntityVisual* targetVisual; // 0xB0
		Il2CppObject* targetPosition; // 0xB8
		::MX::Logic::BattleEntities::IEntityBody* bulletBody; // 0xC8
		::UnityEngine::Vector3* bulletDestination; // 0xD0
		::MX::Logic::Coroutine::WaitForLateUpdate* _waitFor_5__2; // 0xE0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYREMOVEDEFFECT>D__41_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYREMOVEDEFFECT>D__41_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYREMOVEDEFFECT>D__41_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYREMOVEDEFFECT>D__41_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYREMOVEDEFFECT>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYREMOVEDEFFECT>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

