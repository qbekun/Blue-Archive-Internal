#pragma once
#include "unitysdk.h"

class EntityVisual;
namespace MX::Logic::Skills::LogicEffects { class AccumulateEffect; }
class EffectPlayer;
namespace UnityEngine { class Vector3; }
namespace MX::Logic::BattleEntities { class AccumulateEffectInfo; }
namespace MX::Logic::Coroutine { class WaitForLateUpdate; }
namespace MX::AppData::DAO::Battle { class AccumulateVisualEffectDAO; }
class ParticleInterrupt;

#define <COPLAYACCUMULATEEFFECT>D__34_.CTOR_OFFSET UNITYSDK_OFFSET(0x1214D90)
#define <COPLAYACCUMULATEEFFECT>D__34_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x121D970)
#define <COPLAYACCUMULATEEFFECT>D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x121D980)
#define <COPLAYACCUMULATEEFFECT>D__34_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x121EA10)
#define <COPLAYACCUMULATEEFFECT>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x121EA20)
#define <COPLAYACCUMULATEEFFECT>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x121EA70)

	inline static constexpr unsigned int <CoPlayAccumulateEffect>d__34_TypeDefinitionIndex = 998;

	class <CoPlayAccumulateEffect>d__34 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		EntityVisual* targetVisual; // 0x20
		::MX::Logic::Skills::LogicEffects::AccumulateEffect* effect; // 0x28
		Il2CppObject* effectList; // 0x30
		EffectPlayer* __4__this; // 0x38
		EntityVisual* casterVisual; // 0x40
		::UnityEngine::Vector3* bulletDestination; // 0x48
		::MX::Logic::BattleEntities::AccumulateEffectInfo* _info_5__2; // 0x58
		::MX::Logic::Coroutine::WaitForLateUpdate* _waitFor_5__3; // 0x60
		::MX::AppData::DAO::Battle::AccumulateVisualEffectDAO* _lastPlayed_5__4; // 0x68
		ParticleInterrupt* _lastParticleInterrupt_5__5; // 0x70
		Il2CppObject* _loopList_5__6; // 0x78

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACCUMULATEEFFECT>D__34_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACCUMULATEEFFECT>D__34_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACCUMULATEEFFECT>D__34_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACCUMULATEEFFECT>D__34_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACCUMULATEEFFECT>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACCUMULATEEFFECT>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

