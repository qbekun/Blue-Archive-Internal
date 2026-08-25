#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }

#define <PLAYANIMATIONYIELD>D__29_.CTOR_OFFSET UNITYSDK_OFFSET(0x2121E60)
#define <PLAYANIMATIONYIELD>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x21244F0)
#define <PLAYANIMATIONYIELD>D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2124500)
#define <PLAYANIMATIONYIELD>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21246A0)
#define <PLAYANIMATIONYIELD>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x21246B0)
#define <PLAYANIMATIONYIELD>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2124700)

	inline static constexpr unsigned int <PlayAnimationYield>d__29_TypeDefinitionIndex = 3895;

	class <PlayAnimationYield>d__29 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Animation* anim; // 0x20
		::System::Action* callback; // 0x28
		::System::String* animName; // 0x30
		::System::Boolean isReverse; // 0x38
		::System::Single _durationTime_5__2; // 0x3C
		::System::Single _maxDuration_5__3; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYANIMATIONYIELD>D__29_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYANIMATIONYIELD>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYANIMATIONYIELD>D__29_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYANIMATIONYIELD>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYANIMATIONYIELD>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYANIMATIONYIELD>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

