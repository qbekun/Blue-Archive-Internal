#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class WaitForEndOfFrame; }

#define <REVERSENONTIMESCALE>D__20_.CTOR_OFFSET UNITYSDK_OFFSET(0x2121520)
#define <REVERSENONTIMESCALE>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2123B80)
#define <REVERSENONTIMESCALE>D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2123B90)
#define <REVERSENONTIMESCALE>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2123E90)
#define <REVERSENONTIMESCALE>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2123EA0)
#define <REVERSENONTIMESCALE>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2123EF0)

	inline static constexpr unsigned int <ReverseNonTimeScale>d__20_TypeDefinitionIndex = 3890;

	class <ReverseNonTimeScale>d__20 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Animation* animation; // 0x20
		::UnityEngine::AnimationClip* _clip; // 0x28
		::System::Action* onComplete; // 0x30
		::UnityEngine::AnimationState* __currState_5__2; // 0x38
		::System::Boolean _isPlaying_5__3; // 0x40
		::System::Single __progressTime_5__4; // 0x44
		::System::Single __timeAtLastFrame_5__5; // 0x48
		::UnityEngine::WaitForEndOfFrame* _waitForEndOfFrame_5__6; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <REVERSENONTIMESCALE>D__20_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REVERSENONTIMESCALE>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <REVERSENONTIMESCALE>D__20_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REVERSENONTIMESCALE>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REVERSENONTIMESCALE>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REVERSENONTIMESCALE>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

