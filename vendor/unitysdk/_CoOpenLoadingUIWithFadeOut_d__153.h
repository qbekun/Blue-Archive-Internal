#pragma once
#include "unitysdk.h"

class UIManager;
class <>c__DisplayClass153_0;

#define <COOPENLOADINGUIWITHFADEOUT>D__153_.CTOR_OFFSET UNITYSDK_OFFSET(0x268EC70)
#define <COOPENLOADINGUIWITHFADEOUT>D__153_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x26943C0)
#define <COOPENLOADINGUIWITHFADEOUT>D__153_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26943D0)
#define <COOPENLOADINGUIWITHFADEOUT>D__153_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2694780)
#define <COOPENLOADINGUIWITHFADEOUT>D__153_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2694790)
#define <COOPENLOADINGUIWITHFADEOUT>D__153_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26947E0)

	inline static constexpr unsigned int <CoOpenLoadingUIWithFadeOut>d__153_TypeDefinitionIndex = 6793;

	class <CoOpenLoadingUIWithFadeOut>d__153 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Action* afterUIOpenedAction; // 0x20
		UIManager* __4__this; // 0x28
		::System::Action* afterFadeOutAction; // 0x30
		<>c__DisplayClass153_0* __8__1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COOPENLOADINGUIWITHFADEOUT>D__153_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENLOADINGUIWITHFADEOUT>D__153_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENLOADINGUIWITHFADEOUT>D__153_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENLOADINGUIWITHFADEOUT>D__153_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENLOADINGUIWITHFADEOUT>D__153_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENLOADINGUIWITHFADEOUT>D__153_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

