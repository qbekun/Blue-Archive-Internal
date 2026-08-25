#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableBinding; }
namespace UnityEngine::Timeline { class AudioTrack; }

#define <GET_OUTPUTS>D__4_.CTOR_OFFSET UNITYSDK_OFFSET(0xA19FE90)
#define <GET_OUTPUTS>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1A01C0)
#define <GET_OUTPUTS>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA1A01D0)
#define <GET_OUTPUTS>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.PLAYABLES.PLAYABLEBINDING_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA1A0250)
#define <GET_OUTPUTS>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA1A0270)
#define <GET_OUTPUTS>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA1A02C0)
#define <GET_OUTPUTS>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.PLAYABLES.PLAYABLEBINDING_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA1A0310)
#define <GET_OUTPUTS>D__4_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA1A03B0)

	inline static constexpr unsigned int <get_outputs>d__4_TypeDefinitionIndex = 36273;

	class <get_outputs>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::UnityEngine::Playables::PlayableBinding* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x38
		::UnityEngine::Timeline::AudioTrack* __4__this; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__4_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableBinding* System.Collections.Generic.IEnumerator_UnityEngine.Playables.PlayableBinding_.get_Current()
		{
			return (return (::UnityEngine::Playables::PlayableBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.PLAYABLES.PLAYABLEBINDING_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_UnityEngine.Playables.PlayableBinding_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.PLAYABLES.PLAYABLEBINDING_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__4_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

