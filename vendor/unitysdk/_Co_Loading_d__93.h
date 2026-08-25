#pragma once
#include "unitysdk.h"

class UIManager;
class <>c__DisplayClass93_0;

#define <CO_LOADING>D__93_.CTOR_OFFSET UNITYSDK_OFFSET(0x268B1C0)
#define <CO_LOADING>D__93_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2691890)
#define <CO_LOADING>D__93_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26918A0)
#define <CO_LOADING>D__93_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2692030)
#define <CO_LOADING>D__93_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2692040)
#define <CO_LOADING>D__93_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2692090)

	inline static constexpr unsigned int <Co_Loading>d__93_TypeDefinitionIndex = 6776;

	class <Co_Loading>d__93 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIManager* __4__this; // 0x20
		Il2CppObject* insertDepthUnderUI; // 0x28
		Il2CppObject* afterLoadingCallback; // 0x30
		::System::String* uiName; // 0x38
		<>c__DisplayClass93_0* __8__1; // 0x40
		Il2CppObject* opendCallback; // 0x48
		::System::Boolean _isClearTargetUI_5__2; // 0x50
		::System::Boolean _clearCompletely_5__3; // 0x51

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADING>D__93_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADING>D__93_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADING>D__93_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADING>D__93_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADING>D__93_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADING>D__93_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

