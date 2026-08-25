#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class AccumulateDamageFromTargetsEffect; }
class EffectPlayer;
class EntityVisual;
namespace UnityEngine { class Vector3; }
namespace MX::Logic::Coroutine { class WaitForLateUpdate; }
namespace MX::AppData::DAO::Battle { class AccumulateDamageFromTargetsVisualEffectDAO; }
class ParticleInterrupt;

#define <COPLAYACCUMULATEDAMAGEFROMTARGETSVISUAL>D__36_.CTOR_OFFSET UNITYSDK_OFFSET(0x1215020)
#define <COPLAYACCUMULATEDAMAGEFROMTARGETSVISUAL>D__36_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x121EAC0)
#define <COPLAYACCUMULATEDAMAGEFROMTARGETSVISUAL>D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x121EAD0)
#define <COPLAYACCUMULATEDAMAGEFROMTARGETSVISUAL>D__36_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12201F0)
#define <COPLAYACCUMULATEDAMAGEFROMTARGETSVISUAL>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1220200)
#define <COPLAYACCUMULATEDAMAGEFROMTARGETSVISUAL>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1220250)

	inline static constexpr unsigned int <CoPlayAccumulateDamageFromTargetsVisual>d__36_TypeDefinitionIndex = 1000;

	class <CoPlayAccumulateDamageFromTargetsVisual>d__36 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Skills::LogicEffects::AccumulateDamageFromTargetsEffect* effect; // 0x20
		Il2CppObject* effectList; // 0x28
		EffectPlayer* __4__this; // 0x30
		EntityVisual* casterVisual; // 0x38
		EntityVisual* targetVisual; // 0x40
		::UnityEngine::Vector3* bulletDestination; // 0x48
		::MX::Logic::Coroutine::WaitForLateUpdate* _waitFor_5__2; // 0x58
		::MX::AppData::DAO::Battle::AccumulateDamageFromTargetsVisualEffectDAO* _curPhase_5__3; // 0x60
		ParticleInterrupt* _currentLoopInterrupt_5__4; // 0x68

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACCUMULATEDAMAGEFROMTARGETSVISUAL>D__36_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACCUMULATEDAMAGEFROMTARGETSVISUAL>D__36_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACCUMULATEDAMAGEFROMTARGETSVISUAL>D__36_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACCUMULATEDAMAGEFROMTARGETSVISUAL>D__36_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACCUMULATEDAMAGEFROMTARGETSVISUAL>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACCUMULATEDAMAGEFROMTARGETSVISUAL>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

