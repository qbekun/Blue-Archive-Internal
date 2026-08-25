#pragma once
#include "unitysdk.h"

class UIPopup_InteractiveWorldRaidArcade;

#define <COOPENANIMATION>D__32_.CTOR_OFFSET UNITYSDK_OFFSET(0x2630720)
#define <COOPENANIMATION>D__32_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2631B10)
#define <COOPENANIMATION>D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2631B20)
#define <COOPENANIMATION>D__32_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2631BE0)
#define <COOPENANIMATION>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2631BF0)
#define <COOPENANIMATION>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2631C40)

	inline static constexpr unsigned int <CoOpenAnimation>d__32_TypeDefinitionIndex = 6567;

	class <CoOpenAnimation>d__32 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPopup_InteractiveWorldRaidArcade* __4__this; // 0x20
		::System::Boolean close; // 0x28
		::System::Action* endAction; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COOPENANIMATION>D__32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENANIMATION>D__32_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENANIMATION>D__32_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENANIMATION>D__32_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENANIMATION>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENANIMATION>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

