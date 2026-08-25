#pragma once
#include "unitysdk.h"

class UIPopup_System;
class <>c__DisplayClass105_0;
namespace MX::Data::Excel { class MessagePopupExcel; }

#define <LOADIMAGES>D__105_.CTOR_OFFSET UNITYSDK_OFFSET(0x277AD00)
#define <LOADIMAGES>D__105_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x277C6C0)
#define <LOADIMAGES>D__105_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x277C6D0)
#define <LOADIMAGES>D__105_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x277C9F0)
#define <LOADIMAGES>D__105_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x277CA00)
#define <LOADIMAGES>D__105_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x277CA50)

	inline static constexpr unsigned int <LoadImages>d__105_TypeDefinitionIndex = 7370;

	class <LoadImages>d__105 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPopup_System* __4__this; // 0x20
		<>c__DisplayClass105_0* __8__1; // 0x28
		::MX::Data::Excel::MessagePopupExcel* excel; // 0x30
		::System::Action* callback; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <LOADIMAGES>D__105_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADIMAGES>D__105_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADIMAGES>D__105_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADIMAGES>D__105_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADIMAGES>D__105_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADIMAGES>D__105_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

