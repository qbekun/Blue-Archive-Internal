#pragma once
#include "unitysdk.h"

class ParticleInterrupt;
class IInterruptEffect;
namespace MX::AppData::DAO::Battle { class VisualEffectDAO; }
class EffectPlayer;
class EntityVisual;
namespace UnityEngine { class Vector3; }
class <>c__DisplayClass49_0;
namespace MX::Logic::BattleEntities { class IEntityBody; }

#define <PLAYEFFECT>D__49_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B94A0)
#define <PLAYEFFECT>D__49_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B94C0)
#define <PLAYEFFECT>D__49_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13B94D0)
#define <PLAYEFFECT>D__49_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13BA690)
#define <PLAYEFFECT>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x13BA6A0)
#define <PLAYEFFECT>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13BA6F0)

	inline static constexpr unsigned int <PlayEffect>d__49_TypeDefinitionIndex = 1006;

	class <PlayEffect>d__49 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ParticleInterrupt* interrupt; // 0x20
		IInterruptEffect* interruptByCaster; // 0x28
		::MX::AppData::DAO::Battle::VisualEffectDAO* effectData; // 0x30
		EffectPlayer* __4__this; // 0xA8
		EntityVisual* casterVisual; // 0xB0
		EntityVisual* targetVisual; // 0xB8
		Il2CppObject* targetPosition; // 0xC0
		Il2CppObject* bulletEntityPosition; // 0xD0
		::UnityEngine::Vector3* bulletEntityForward; // 0xE0
		::UnityEngine::Vector3* bulletDestination; // 0xEC
		::System::Single randomPositionRadius; // 0xF8
		::System::Single overrideDuration; // 0xFC
		Il2CppObject* onParticleCreated; // 0x100
		<>c__DisplayClass49_0* __8__1; // 0x108
		::MX::Logic::BattleEntities::IEntityBody* bulletBody; // 0x110
		Il2CppObject* _position_5__2; // 0x118

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYEFFECT>D__49_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEFFECT>D__49_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEFFECT>D__49_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEFFECT>D__49_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEFFECT>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEFFECT>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

