#pragma once
#include "unitysdk.h"

class UIGachaDirecting;
namespace FlatData { class GachaPhase; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define <CO_ANIMATIONPROCESS>D__29_.CTOR_OFFSET UNITYSDK_OFFSET(0x258F8E0)
#define <CO_ANIMATIONPROCESS>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2592790)
#define <CO_ANIMATIONPROCESS>D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x25927A0)
#define <CO_ANIMATIONPROCESS>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2592D00)
#define <CO_ANIMATIONPROCESS>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2592D10)
#define <CO_ANIMATIONPROCESS>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2592D60)

	inline static constexpr unsigned int <co_AnimationProcess>d__29_TypeDefinitionIndex = 6251;

	class <co_AnimationProcess>d__29 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIGachaDirecting* __4__this; // 0x20
		::Il2CppArray<::System::Object*>* __7__wrap1; // 0x28
		::System::Int32 __7__wrap2; // 0x30
		::FlatData::GachaPhase* _phase_5__4; // 0x34
		::UnityEngine::Playables::PlayableDirector* _director_5__5; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_ANIMATIONPROCESS>D__29_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ANIMATIONPROCESS>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ANIMATIONPROCESS>D__29_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ANIMATIONPROCESS>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ANIMATIONPROCESS>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ANIMATIONPROCESS>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

