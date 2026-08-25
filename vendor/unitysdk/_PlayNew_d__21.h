#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class WaitForEndOfFrame; }

#define <PLAYNEW>D__21_.CTOR_OFFSET UNITYSDK_OFFSET(0x21215E0)
#define <PLAYNEW>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2123F00)
#define <PLAYNEW>D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2123F10)
#define <PLAYNEW>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21241F0)
#define <PLAYNEW>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2124200)
#define <PLAYNEW>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2124250)

	inline static constexpr unsigned int <PlayNew>d__21_TypeDefinitionIndex = 3891;

	class <PlayNew>d__21 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Animation* animation; // 0x20
		::System::String* clipName; // 0x28
		::System::Boolean unscaled; // 0x30
		::System::Boolean reverse; // 0x31
		::UnityEngine::AnimationState* __currState_5__2; // 0x38
		::System::Boolean _isPlaying_5__3; // 0x40
		::System::Single __progressTime_5__4; // 0x44
		::UnityEngine::WaitForEndOfFrame* _waitForEndOfFrame_5__5; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYNEW>D__21_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYNEW>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYNEW>D__21_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYNEW>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYNEW>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYNEW>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

