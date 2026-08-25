#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class UIVictory;
namespace UnityEngine { class WaitForEndOfFrame; }

#define <PLAY>D__107_.CTOR_OFFSET UNITYSDK_OFFSET(0xBB2E90)
#define <PLAY>D__107_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB9F80)
#define <PLAY>D__107_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBB9F90)
#define <PLAY>D__107_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBBA250)
#define <PLAY>D__107_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xBBA260)
#define <PLAY>D__107_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBBA2B0)

	inline static constexpr unsigned int <Play>d__107_TypeDefinitionIndex = 8590;

	class <Play>d__107 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Animation* animation; // 0x20
		::System::String* clipName; // 0x28
		UIVictory* __4__this; // 0x30
		::System::Boolean _isPlaying_5__2; // 0x38
		::System::Single __timeAtLastFrame_5__3; // 0x3C
		::UnityEngine::WaitForEndOfFrame* _waitForEndOfFrame_5__4; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAY>D__107_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAY>D__107_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAY>D__107_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAY>D__107_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAY>D__107_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAY>D__107_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

