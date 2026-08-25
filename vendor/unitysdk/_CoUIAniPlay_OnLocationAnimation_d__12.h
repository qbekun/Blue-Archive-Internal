#pragma once
#include "unitysdk.h"

class UIWorldRaidAniPlayer_821;

#define <COUIANIPLAY_ONLOCATIONANIMATION>D__12_.CTOR_OFFSET UNITYSDK_OFFSET(0xBF63F0)
#define <COUIANIPLAY_ONLOCATIONANIMATION>D__12_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF7950)
#define <COUIANIPLAY_ONLOCATIONANIMATION>D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBF7960)
#define <COUIANIPLAY_ONLOCATIONANIMATION>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBF81B0)
#define <COUIANIPLAY_ONLOCATIONANIMATION>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xBF81C0)
#define <COUIANIPLAY_ONLOCATIONANIMATION>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBF8210)

	inline static constexpr unsigned int <CoUIAniPlay_OnLocationAnimation>d__12_TypeDefinitionIndex = 8764;

	class <CoUIAniPlay_OnLocationAnimation>d__12 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIWorldRaidAniPlayer_821* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY_ONLOCATIONANIMATION>D__12_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY_ONLOCATIONANIMATION>D__12_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY_ONLOCATIONANIMATION>D__12_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY_ONLOCATIONANIMATION>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY_ONLOCATIONANIMATION>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY_ONLOCATIONANIMATION>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

