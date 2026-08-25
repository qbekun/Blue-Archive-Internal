#pragma once
#include "unitysdk.h"

class UIPopupList;
class TweenPosition;

#define <UPDATETWEENPOSITION>D__95_.CTOR_OFFSET UNITYSDK_OFFSET(0xA31930)
#define <UPDATETWEENPOSITION>D__95_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA31950)
#define <UPDATETWEENPOSITION>D__95_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA31960)
#define <UPDATETWEENPOSITION>D__95_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA31B40)
#define <UPDATETWEENPOSITION>D__95_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA31B50)
#define <UPDATETWEENPOSITION>D__95_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA31BA0)

	inline static constexpr unsigned int <UpdateTweenPosition>d__95_TypeDefinitionIndex = 59;

	class <UpdateTweenPosition>d__95 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPopupList* __4__this; // 0x20
		TweenPosition* _tp_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <UPDATETWEENPOSITION>D__95_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATETWEENPOSITION>D__95_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATETWEENPOSITION>D__95_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATETWEENPOSITION>D__95_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATETWEENPOSITION>D__95_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATETWEENPOSITION>D__95_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

