#pragma once
#include "unitysdk.h"

class PortraitSpineCharacterSet;
class UIWidget;
class <>c__DisplayClass6_0;

#define <COSETPORTRAITS>D__6_.CTOR_OFFSET UNITYSDK_OFFSET(0x20E0590)
#define <COSETPORTRAITS>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20E10A0)
#define <COSETPORTRAITS>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20E10B0)
#define <COSETPORTRAITS>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20E1680)
#define <COSETPORTRAITS>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20E1690)
#define <COSETPORTRAITS>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20E16E0)

	inline static constexpr unsigned int <CoSetPortraits>d__6_TypeDefinitionIndex = 3767;

	class <CoSetPortraits>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		PortraitSpineCharacterSet* __4__this; // 0x20
		UIWidget* renderOrder; // 0x28
		Il2CppObject* entities; // 0x30
		::System::Boolean useDiorama; // 0x38
		<>c__DisplayClass6_0* __8__1; // 0x40
		Il2CppObject* callback; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSETPORTRAITS>D__6_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETPORTRAITS>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETPORTRAITS>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETPORTRAITS>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETPORTRAITS>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETPORTRAITS>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

