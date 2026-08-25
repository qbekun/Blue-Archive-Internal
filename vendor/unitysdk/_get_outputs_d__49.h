#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableBinding; }
namespace UnityEngine::Timeline { class AnimationTrack; }

#define <GET_OUTPUTS>D__49_.CTOR_OFFSET UNITYSDK_OFFSET(0xA190300)
#define <GET_OUTPUTS>D__49_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA190A10)
#define <GET_OUTPUTS>D__49_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA190A20)
#define <GET_OUTPUTS>D__49_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.PLAYABLES.PLAYABLEBINDING_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA190AA0)
#define <GET_OUTPUTS>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA190AC0)
#define <GET_OUTPUTS>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA190B10)
#define <GET_OUTPUTS>D__49_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.PLAYABLES.PLAYABLEBINDING_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA190B60)
#define <GET_OUTPUTS>D__49_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA190C00)

	inline static constexpr unsigned int <get_outputs>d__49_TypeDefinitionIndex = 36253;

	class <get_outputs>d__49 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::UnityEngine::Playables::PlayableBinding* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x38
		::UnityEngine::Timeline::AnimationTrack* __4__this; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__49_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__49_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__49_MOVENEXT_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableBinding* System.Collections.Generic.IEnumerator_UnityEngine.Playables.PlayableBinding_.get_Current()
		{
			return (return (::UnityEngine::Playables::PlayableBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__49_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.PLAYABLES.PLAYABLEBINDING_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_UnityEngine.Playables.PlayableBinding_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__49_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.PLAYABLES.PLAYABLEBINDING_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__49_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

