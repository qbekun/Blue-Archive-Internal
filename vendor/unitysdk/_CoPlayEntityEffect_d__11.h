#pragma once
#include "unitysdk.h"

namespace MX::AppData::DAO::Battle { class EntityEffectDAO; }
class SkillActorEffectPlayer;
class EntityVisual;
namespace MX::Logic::BattleEntities { class IEntityBody; }
namespace UnityEngine { class Vector3; }
class ParticleInterrupt;
class IInterruptEffect;
namespace UnityEngine { class WaitForEndOfFrame; }

#define <COPLAYENTITYEFFECT>D__11_.CTOR_OFFSET UNITYSDK_OFFSET(0x120BDE0)
#define <COPLAYENTITYEFFECT>D__11_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x120ED40)
#define <COPLAYENTITYEFFECT>D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x120ED50)
#define <COPLAYENTITYEFFECT>D__11_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1210B50)
#define <COPLAYENTITYEFFECT>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1210B60)
#define <COPLAYENTITYEFFECT>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1210BB0)

	inline static constexpr unsigned int <CoPlayEntityEffect>d__11_TypeDefinitionIndex = 980;

	class <CoPlayEntityEffect>d__11 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::AppData::DAO::Battle::EntityEffectDAO* entityEffect; // 0x20
		SkillActorEffectPlayer* __4__this; // 0x28
		EntityVisual* targetVisual; // 0x30
		Il2CppObject* targetPosition; // 0x38
		::MX::Logic::BattleEntities::IEntityBody* entityBody; // 0x48
		Il2CppObject* bulletEntityPosition; // 0x50
		::UnityEngine::Vector3* bulletEntityForward; // 0x60
		::UnityEngine::Vector3* bulletDestination; // 0x6C
		ParticleInterrupt* particleInterrupt; // 0x78
		IInterruptEffect* interruptEffect; // 0x80
		Il2CppObject* onCreatedFire; // 0x88
		Il2CppObject* onCreatedCreation; // 0x90
		Il2CppObject* onCreatedLoop; // 0x98
		Il2CppObject* onCreatedEnd; // 0xA0
		::System::Single _elapsed_5__2; // 0xA8
		::UnityEngine::WaitForEndOfFrame* _waitFor_5__3; // 0xB0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENTITYEFFECT>D__11_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENTITYEFFECT>D__11_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENTITYEFFECT>D__11_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENTITYEFFECT>D__11_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENTITYEFFECT>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENTITYEFFECT>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

