#pragma once
#include "unitysdk.h"

class UIMinigameRhythmLobbyBase;
class <>c__DisplayClass17_0;
class <>c__DisplayClass17_2;

#define <CREATESTACKUI>D__17_.CTOR_OFFSET UNITYSDK_OFFSET(0xD1FF00)
#define <CREATESTACKUI>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xD20D60)
#define <CREATESTACKUI>D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD20DC0)
#define <CREATESTACKUI>D__17___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xD21400)
#define <CREATESTACKUI>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD21450)
#define <CREATESTACKUI>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xD21460)
#define <CREATESTACKUI>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD214B0)

	inline static constexpr unsigned int <CreateStackUI>d__17_TypeDefinitionIndex = 701;

	class <CreateStackUI>d__17 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIMinigameRhythmLobbyBase* __4__this; // 0x20
		<>c__DisplayClass17_0* __8__1; // 0x28
		<>c__DisplayClass17_2* __8__2; // 0x30
		Il2CppObject* __7__wrap1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUI>D__17_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUI>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUI>D__17_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUI>D__17___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUI>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUI>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUI>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

