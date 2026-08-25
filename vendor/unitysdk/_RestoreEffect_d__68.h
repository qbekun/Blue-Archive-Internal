#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }
class UIMinigameRhythmBattle;

#define <RESTOREEFFECT>D__68_.CTOR_OFFSET UNITYSDK_OFFSET(0xD1ABB0)
#define <RESTOREEFFECT>D__68_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1B020)
#define <RESTOREEFFECT>D__68_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD1B030)
#define <RESTOREEFFECT>D__68_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD1B210)
#define <RESTOREEFFECT>D__68_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xD1B220)
#define <RESTOREEFFECT>D__68_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD1B270)

	inline static constexpr unsigned int <RestoreEffect>d__68_TypeDefinitionIndex = 682;

	class <RestoreEffect>d__68 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::ParticleSystem* effect; // 0x20
		UIMinigameRhythmBattle* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <RESTOREEFFECT>D__68_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RESTOREEFFECT>D__68_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <RESTOREEFFECT>D__68_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <RESTOREEFFECT>D__68_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RESTOREEFFECT>D__68_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <RESTOREEFFECT>D__68_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

