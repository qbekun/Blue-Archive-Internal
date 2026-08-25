#pragma once
#include "unitysdk.h"

class UICampaignVictory;
class PopupType;
class <>c__DisplayClass23_0;
class <>c__DisplayClass23_1;
class <>c__DisplayClass23_2;

#define <SHOWPOPUP>D__23_.CTOR_OFFSET UNITYSDK_OFFSET(0x22ACD50)
#define <SHOWPOPUP>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x22B14A0)
#define <SHOWPOPUP>D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x22B14B0)
#define <SHOWPOPUP>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22B1BD0)
#define <SHOWPOPUP>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x22B1BE0)
#define <SHOWPOPUP>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22B1C30)

	inline static constexpr unsigned int <ShowPopup>d__23_TypeDefinitionIndex = 4768;

	class <ShowPopup>d__23 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICampaignVictory* __4__this; // 0x20
		PopupType* popupType; // 0x28
		<>c__DisplayClass23_0* __8__1; // 0x30
		<>c__DisplayClass23_1* __8__2; // 0x38
		<>c__DisplayClass23_2* __8__3; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__23_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__23_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

