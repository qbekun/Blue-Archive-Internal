#pragma once
#include "unitysdk.h"

class UIGachaDirecting;
namespace UnityEngine::Playables { class PlayableDirector; }
namespace FlatData { class GachaPhase; }

#define <CO_OPENANIMATION>D__30_.CTOR_OFFSET UNITYSDK_OFFSET(0x25913A0)
#define <CO_OPENANIMATION>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2592D70)
#define <CO_OPENANIMATION>D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2592D80)
#define <CO_OPENANIMATION>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2593020)
#define <CO_OPENANIMATION>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2593030)
#define <CO_OPENANIMATION>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2593080)

	inline static constexpr unsigned int <co_OpenAnimation>d__30_TypeDefinitionIndex = 6252;

	class <co_OpenAnimation>d__30 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIGachaDirecting* __4__this; // 0x20
		::UnityEngine::Playables::PlayableDirector* playableDirector; // 0x28
		::FlatData::GachaPhase* phase; // 0x30
		::System::Single _playTime_5__2; // 0x34

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_OPENANIMATION>D__30_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_OPENANIMATION>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_OPENANIMATION>D__30_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_OPENANIMATION>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_OPENANIMATION>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_OPENANIMATION>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

