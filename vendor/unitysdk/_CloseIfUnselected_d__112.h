#pragma once
#include "unitysdk.h"

class UIPopupList;

#define <CLOSEIFUNSELECTED>D__112_.CTOR_OFFSET UNITYSDK_OFFSET(0xA31BB0)
#define <CLOSEIFUNSELECTED>D__112_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA31BD0)
#define <CLOSEIFUNSELECTED>D__112_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA31BE0)
#define <CLOSEIFUNSELECTED>D__112_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA31DC0)
#define <CLOSEIFUNSELECTED>D__112_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA31DD0)
#define <CLOSEIFUNSELECTED>D__112_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA31E20)

	inline static constexpr unsigned int <CloseIfUnselected>d__112_TypeDefinitionIndex = 60;

	class <CloseIfUnselected>d__112 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPopupList* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CLOSEIFUNSELECTED>D__112_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CLOSEIFUNSELECTED>D__112_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CLOSEIFUNSELECTED>D__112_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CLOSEIFUNSELECTED>D__112_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CLOSEIFUNSELECTED>D__112_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CLOSEIFUNSELECTED>D__112_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

