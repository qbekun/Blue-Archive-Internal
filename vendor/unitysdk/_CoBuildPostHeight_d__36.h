#pragma once
#include "unitysdk.h"

class FeedScrollManager;
class <>c__DisplayClass36_0;
class <>c__DisplayClass36_1;

#define <COBUILDPOSTHEIGHT>D__36_.CTOR_OFFSET UNITYSDK_OFFSET(0xADA010)
#define <COBUILDPOSTHEIGHT>D__36_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xADA030)
#define <COBUILDPOSTHEIGHT>D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xADA090)
#define <COBUILDPOSTHEIGHT>D__36___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xADB100)
#define <COBUILDPOSTHEIGHT>D__36_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xADB150)
#define <COBUILDPOSTHEIGHT>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xADB160)
#define <COBUILDPOSTHEIGHT>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xADB1B0)

	inline static constexpr unsigned int <CoBuildPostHeight>d__36_TypeDefinitionIndex = 8068;

	class <CoBuildPostHeight>d__36 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		FeedScrollManager* __4__this; // 0x20
		<>c__DisplayClass36_0* __8__1; // 0x28
		<>c__DisplayClass36_1* __8__2; // 0x30
		::System::Action* onBuildPostHeightFinished; // 0x38
		Il2CppObject* __7__wrap1; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COBUILDPOSTHEIGHT>D__36_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COBUILDPOSTHEIGHT>D__36_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COBUILDPOSTHEIGHT>D__36_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COBUILDPOSTHEIGHT>D__36___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COBUILDPOSTHEIGHT>D__36_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COBUILDPOSTHEIGHT>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COBUILDPOSTHEIGHT>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

