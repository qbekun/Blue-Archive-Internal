#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class CharacterAnimationController; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace MX::MinigameShooting { class CharacterState; }

#define <COPLAYPUBLICTIMELINE>D__27_.CTOR_OFFSET UNITYSDK_OFFSET(0x145B380)
#define <COPLAYPUBLICTIMELINE>D__27_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x145B6A0)
#define <COPLAYPUBLICTIMELINE>D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x145B6B0)
#define <COPLAYPUBLICTIMELINE>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x145B840)
#define <COPLAYPUBLICTIMELINE>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x145B850)
#define <COPLAYPUBLICTIMELINE>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x145B8A0)

	inline static constexpr unsigned int <CoPlayPublicTimeline>d__27_TypeDefinitionIndex = 15034;

	class <CoPlayPublicTimeline>d__27 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::MinigameShooting::CharacterAnimationController* __4__this; // 0x20
		::UnityEngine::Playables::PlayableAsset* asset; // 0x28
		::System::Action* endCallback; // 0x30
		::UnityEngine::Playables::PlayableDirector* _playableDirector_5__2; // 0x38
		::System::Single _time_5__3; // 0x40
		::MX::MinigameShooting::CharacterState* _startState_5__4; // 0x44

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYPUBLICTIMELINE>D__27_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYPUBLICTIMELINE>D__27_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYPUBLICTIMELINE>D__27_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYPUBLICTIMELINE>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYPUBLICTIMELINE>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYPUBLICTIMELINE>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

