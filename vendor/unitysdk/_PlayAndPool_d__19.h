#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }
class ParticleInterrupt;
namespace UnityEngine { class WaitForEndOfFrame; }

#define <PLAYANDPOOL>D__19_.CTOR_OFFSET UNITYSDK_OFFSET(0x20CCF30)
#define <PLAYANDPOOL>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20CE630)
#define <PLAYANDPOOL>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20CE640)
#define <PLAYANDPOOL>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20CEC80)
#define <PLAYANDPOOL>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20CEC90)
#define <PLAYANDPOOL>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20CECE0)

	inline static constexpr unsigned int <PlayAndPool>d__19_TypeDefinitionIndex = 3688;

	class <PlayAndPool>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::ParticleSystem* particle; // 0x20
		::System::Single startDelay; // 0x28
		ParticleInterrupt* interrupt; // 0x30
		::System::Boolean isKeepDirectionUnchanged; // 0x38
		Il2CppObject* onParticleCreated; // 0x40
		::System::Single fixedDuration; // 0x48
		::System::Action* onEnd; // 0x50
		::UnityEngine::WaitForEndOfFrame* _wait_5__2; // 0x58
		::System::Single _timeStarted_5__3; // 0x60

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYANDPOOL>D__19_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYANDPOOL>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYANDPOOL>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYANDPOOL>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYANDPOOL>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYANDPOOL>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

