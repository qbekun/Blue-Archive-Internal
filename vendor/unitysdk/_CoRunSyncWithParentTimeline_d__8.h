#pragma once
#include "unitysdk.h"

class CharacterAnimationEventEffect;
namespace UnityEngine::Playables { class PlayableDirector; }

#define <CORUNSYNCWITHPARENTTIMELINE>D__8_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B1A60)
#define <CORUNSYNCWITHPARENTTIMELINE>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20B1C50)
#define <CORUNSYNCWITHPARENTTIMELINE>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20B1C60)
#define <CORUNSYNCWITHPARENTTIMELINE>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20B1E10)
#define <CORUNSYNCWITHPARENTTIMELINE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20B1E20)
#define <CORUNSYNCWITHPARENTTIMELINE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20B1E70)

	inline static constexpr unsigned int <CoRunSyncWithParentTimeline>d__8_TypeDefinitionIndex = 3582;

	class <CoRunSyncWithParentTimeline>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CharacterAnimationEventEffect* __4__this; // 0x20
		::UnityEngine::Playables::PlayableDirector* _playableDirector_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CORUNSYNCWITHPARENTTIMELINE>D__8_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORUNSYNCWITHPARENTTIMELINE>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORUNSYNCWITHPARENTTIMELINE>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORUNSYNCWITHPARENTTIMELINE>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORUNSYNCWITHPARENTTIMELINE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORUNSYNCWITHPARENTTIMELINE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

