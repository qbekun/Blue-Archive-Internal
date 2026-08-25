#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableBinding; }
namespace UnityEngine::Timeline { class TimelineAsset; }

#define <GET_OUTPUTS>D__27_.CTOR_OFFSET UNITYSDK_OFFSET(0xA193360)
#define <GET_OUTPUTS>D__27_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA196B30)
#define <GET_OUTPUTS>D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA196D10)
#define <GET_OUTPUTS>D__27___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xA1973C0)
#define <GET_OUTPUTS>D__27___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xA197310)
#define <GET_OUTPUTS>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.PLAYABLES.PLAYABLEBINDING_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA197470)
#define <GET_OUTPUTS>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA197490)
#define <GET_OUTPUTS>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA1974E0)
#define <GET_OUTPUTS>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.PLAYABLES.PLAYABLEBINDING_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA197530)
#define <GET_OUTPUTS>D__27_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA1975D0)

	inline static constexpr unsigned int <get_outputs>d__27_TypeDefinitionIndex = 36262;

	class <get_outputs>d__27 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::UnityEngine::Playables::PlayableBinding* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x38
		::UnityEngine::Timeline::TimelineAsset* __4__this; // 0x40
		Il2CppObject* __7__wrap1; // 0x48
		Il2CppObject* __7__wrap2; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__27_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__27_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__27_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__27___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__27___M__FINALLY2_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableBinding* System.Collections.Generic.IEnumerator_UnityEngine.Playables.PlayableBinding_.get_Current()
		{
			return (return (::UnityEngine::Playables::PlayableBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.PLAYABLES.PLAYABLEBINDING_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_UnityEngine.Playables.PlayableBinding_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.PLAYABLES.PLAYABLEBINDING_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__27_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

