#pragma once
#include "unitysdk.h"

class UIMinigameDefense_Lobby;
class <>c__DisplayClass22_0;
class <>c__DisplayClass22_2;

#define <CREATESTACKUI>D__22_.CTOR_OFFSET UNITYSDK_OFFSET(0xA5FE90)
#define <CREATESTACKUI>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA61340)
#define <CREATESTACKUI>D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA613A0)
#define <CREATESTACKUI>D__22___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xA619A0)
#define <CREATESTACKUI>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA619F0)
#define <CREATESTACKUI>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA61A00)
#define <CREATESTACKUI>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA61A50)

	inline static constexpr unsigned int <CreateStackUI>d__22_TypeDefinitionIndex = 521;

	class <CreateStackUI>d__22 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIMinigameDefense_Lobby* __4__this; // 0x20
		<>c__DisplayClass22_0* __8__1; // 0x28
		<>c__DisplayClass22_2* __8__2; // 0x30
		Il2CppObject* __7__wrap1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUI>D__22_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUI>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUI>D__22_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUI>D__22___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUI>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUI>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUI>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

