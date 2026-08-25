#pragma once
#include "unitysdk.h"

namespace Spine { class TrackEntry; }
class SpineClip;
class SpineBase;
class SoundKey;

#define <COPLAYSOUNDKEYS>D__81_.CTOR_OFFSET UNITYSDK_OFFSET(0x20E6CC0)
#define <COPLAYSOUNDKEYS>D__81_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20E6CE0)
#define <COPLAYSOUNDKEYS>D__81_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20E6CF0)
#define <COPLAYSOUNDKEYS>D__81_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20E6EA0)
#define <COPLAYSOUNDKEYS>D__81_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20E6EB0)
#define <COPLAYSOUNDKEYS>D__81_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20E6F00)

	inline static constexpr unsigned int <CoPlaySoundKeys>d__81_TypeDefinitionIndex = 3778;

	class <CoPlaySoundKeys>d__81 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::Spine::TrackEntry* entry; // 0x20
		SpineClip* sc; // 0x28
		SpineBase* __4__this; // 0x30
		::System::Int32 _k_5__2; // 0x38
		SoundKey* _currentKey_5__3; // 0x40
		::System::Single _lastTime_5__4; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSOUNDKEYS>D__81_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSOUNDKEYS>D__81_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSOUNDKEYS>D__81_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSOUNDKEYS>D__81_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSOUNDKEYS>D__81_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSOUNDKEYS>D__81_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

