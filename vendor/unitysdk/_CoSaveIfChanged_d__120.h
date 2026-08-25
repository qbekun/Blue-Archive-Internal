#pragma once
#include "unitysdk.h"

class UIEchelonInfo;

#define <COSAVEIFCHANGED>D__120_.CTOR_OFFSET UNITYSDK_OFFSET(0x24F0310)
#define <COSAVEIFCHANGED>D__120_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24F7F20)
#define <COSAVEIFCHANGED>D__120_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24F7F30)
#define <COSAVEIFCHANGED>D__120_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24F8050)
#define <COSAVEIFCHANGED>D__120_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24F8060)
#define <COSAVEIFCHANGED>D__120_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24F80B0)

	inline static constexpr unsigned int <CoSaveIfChanged>d__120_TypeDefinitionIndex = 6046;

	class <CoSaveIfChanged>d__120 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEchelonInfo* __4__this; // 0x20
		::System::Action* endAction; // 0x28
		::System::Boolean _isChanged_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSAVEIFCHANGED>D__120_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSAVEIFCHANGED>D__120_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSAVEIFCHANGED>D__120_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSAVEIFCHANGED>D__120_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSAVEIFCHANGED>D__120_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSAVEIFCHANGED>D__120_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

