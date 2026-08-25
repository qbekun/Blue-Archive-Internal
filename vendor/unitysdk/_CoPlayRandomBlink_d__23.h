#pragma once
#include "unitysdk.h"

class SpineClip;
class PortraitSpineCharacter;
namespace Spine { class AnimationState; }

#define <COPLAYRANDOMBLINK>D__23_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DF0D0)
#define <COPLAYRANDOMBLINK>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20E0080)
#define <COPLAYRANDOMBLINK>D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20E0090)
#define <COPLAYRANDOMBLINK>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20E0450)
#define <COPLAYRANDOMBLINK>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20E0460)
#define <COPLAYRANDOMBLINK>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20E04B0)

	inline static constexpr unsigned int <CoPlayRandomBlink>d__23_TypeDefinitionIndex = 3762;

	class <CoPlayRandomBlink>d__23 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		SpineClip* blinkClip; // 0x20
		PortraitSpineCharacter* __4__this; // 0x28
		::Spine::AnimationState* state; // 0x30
		SpineClip* ownerClip; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYRANDOMBLINK>D__23_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYRANDOMBLINK>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYRANDOMBLINK>D__23_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYRANDOMBLINK>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYRANDOMBLINK>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYRANDOMBLINK>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

