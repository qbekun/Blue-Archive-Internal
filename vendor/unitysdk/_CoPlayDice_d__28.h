#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class MiniGameTableBoardEncounterInputResponse; }
class UITBGDiceResult;
class <>c__DisplayClass28_0;

#define <COPLAYDICE>D__28_.CTOR_OFFSET UNITYSDK_OFFSET(0xB52360)
#define <COPLAYDICE>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB52510)
#define <COPLAYDICE>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB52520)
#define <COPLAYDICE>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB53460)
#define <COPLAYDICE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB53470)
#define <COPLAYDICE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB534C0)

	inline static constexpr unsigned int <CoPlayDice>d__28_TypeDefinitionIndex = 8375;

	class <CoPlayDice>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::NetworkProtocol::MiniGameTableBoardEncounterInputResponse* response; // 0x20
		UITBGDiceResult* __4__this; // 0x28
		::System::Int32 temporaryBuffValue; // 0x30
		::System::Int32 permanentBuffValue; // 0x34
		<>c__DisplayClass28_0* __8__1; // 0x38
		::System::Action* onComplete; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYDICE>D__28_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYDICE>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYDICE>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYDICE>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYDICE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYDICE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

