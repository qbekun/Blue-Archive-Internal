#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableBinding; }
namespace UnityEngine::Timeline { class AnimationPlayableAsset; }

#define <GET_OUTPUTS>D__45_.CTOR_OFFSET UNITYSDK_OFFSET(0xA18A830)
#define <GET_OUTPUTS>D__45_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA18B470)
#define <GET_OUTPUTS>D__45_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA18B480)
#define <GET_OUTPUTS>D__45_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.PLAYABLES.PLAYABLEBINDING_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA18B500)
#define <GET_OUTPUTS>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA18B520)
#define <GET_OUTPUTS>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA18B570)
#define <GET_OUTPUTS>D__45_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.PLAYABLES.PLAYABLEBINDING_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA18B5C0)
#define <GET_OUTPUTS>D__45_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA18B660)

	inline static constexpr unsigned int <get_outputs>d__45_TypeDefinitionIndex = 36246;

	class <get_outputs>d__45 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::UnityEngine::Playables::PlayableBinding* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x38
		::UnityEngine::Timeline::AnimationPlayableAsset* __4__this; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__45_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__45_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__45_MOVENEXT_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableBinding* System.Collections.Generic.IEnumerator_UnityEngine.Playables.PlayableBinding_.get_Current()
		{
			return (return (::UnityEngine::Playables::PlayableBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__45_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.PLAYABLES.PLAYABLEBINDING_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_UnityEngine.Playables.PlayableBinding_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__45_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.PLAYABLES.PLAYABLEBINDING_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_OUTPUTS>D__45_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

