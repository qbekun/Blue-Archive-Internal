#pragma once
#include "unitysdk.h"

namespace MX::AppData::DAO::Battle { class VisualEffectDAO; }
class ParticleInterrupt;
class EffectPlayer;
class EntityVisual;
namespace MX::Logic::BattleEntities { class IEntityBody; }
namespace UnityEngine { class Vector3; }
namespace MX::Logic::Coroutine { class WaitForLateUpdate; }

#define <COPLAYENDLOGICEFFECTDELAYED>D__39_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B8990)
#define <COPLAYENDLOGICEFFECTDELAYED>D__39_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B89B0)
#define <COPLAYENDLOGICEFFECTDELAYED>D__39_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13B89C0)
#define <COPLAYENDLOGICEFFECTDELAYED>D__39_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13B8D80)
#define <COPLAYENDLOGICEFFECTDELAYED>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x13B8D90)
#define <COPLAYENDLOGICEFFECTDELAYED>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13B8DE0)

	inline static constexpr unsigned int <CoPlayEndLogicEffectDelayed>d__39_TypeDefinitionIndex = 1002;

	class <CoPlayEndLogicEffectDelayed>d__39 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::AppData::DAO::Battle::VisualEffectDAO* effectData; // 0x20
		ParticleInterrupt* interruptLoop; // 0x98
		::System::Single logicEffectDurationSecond; // 0xA0
		EffectPlayer* __4__this; // 0xA8
		EntityVisual* casterVisual; // 0xB0
		EntityVisual* targetVisual; // 0xB8
		Il2CppObject* targetPosition; // 0xC0
		::MX::Logic::BattleEntities::IEntityBody* bulletBody; // 0xD0
		::UnityEngine::Vector3* bulletDestination; // 0xD8
		::System::Single _started_5__2; // 0xE4
		::MX::Logic::Coroutine::WaitForLateUpdate* _waitFor_5__3; // 0xE8

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENDLOGICEFFECTDELAYED>D__39_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENDLOGICEFFECTDELAYED>D__39_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENDLOGICEFFECTDELAYED>D__39_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENDLOGICEFFECTDELAYED>D__39_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENDLOGICEFFECTDELAYED>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENDLOGICEFFECTDELAYED>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

