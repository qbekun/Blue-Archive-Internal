#pragma once
#include "unitysdk.h"

class UICafeStudentInviteListSortingPopup;

#define <SHOWOPENANI>D__12_.CTOR_OFFSET UNITYSDK_OFFSET(0x228A4D0)
#define <SHOWOPENANI>D__12_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x228A9A0)
#define <SHOWOPENANI>D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x228A9B0)
#define <SHOWOPENANI>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x228AE70)
#define <SHOWOPENANI>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x228AE80)
#define <SHOWOPENANI>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x228AED0)

	inline static constexpr unsigned int <ShowOpenAni>d__12_TypeDefinitionIndex = 4683;

	class <ShowOpenAni>d__12 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICafeStudentInviteListSortingPopup* __4__this; // 0x20
		::System::Boolean forward; // 0x28
		::System::Action* endAction; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SHOWOPENANI>D__12_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWOPENANI>D__12_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWOPENANI>D__12_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWOPENANI>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWOPENANI>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWOPENANI>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

