#pragma once
#include "unitysdk.h"

class <>c__DisplayClass63_0;
class <>c__DisplayClass63_1;
class SpringPanel;

#define <<SETSCROLLTOBOTTOM>G__CO_MOVESCROLL|0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xCCE770)
#define <<SETSCROLLTOBOTTOM>G__CO_MOVESCROLL|0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCE790)
#define <<SETSCROLLTOBOTTOM>G__CO_MOVESCROLL|0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCCE7A0)
#define <<SETSCROLLTOBOTTOM>G__CO_MOVESCROLL|0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCCEA70)
#define <<SETSCROLLTOBOTTOM>G__CO_MOVESCROLL|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xCCEA80)
#define <<SETSCROLLTOBOTTOM>G__CO_MOVESCROLL|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCCEAD0)

	inline static constexpr unsigned int <<SetScrollToBottom>g__Co_MoveScroll|0>d_TypeDefinitionIndex = 9136;

	class <<SetScrollToBottom>g__Co_MoveScroll|0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass63_0* __4__this; // 0x20
		<>c__DisplayClass63_1* __8__1; // 0x28
		SpringPanel* _springPanel_5__2; // 0x30
		::System::Single _elapsedTime_5__3; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<SETSCROLLTOBOTTOM>G__CO_MOVESCROLL|0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETSCROLLTOBOTTOM>G__CO_MOVESCROLL|0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETSCROLLTOBOTTOM>G__CO_MOVESCROLL|0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETSCROLLTOBOTTOM>G__CO_MOVESCROLL|0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETSCROLLTOBOTTOM>G__CO_MOVESCROLL|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETSCROLLTOBOTTOM>G__CO_MOVESCROLL|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

