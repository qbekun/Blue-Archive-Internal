#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class MiniGameTableBoardEncounterInputResponse; }
class UITBGBattleTop;

#define <COPLAYBATTLERESULT>D__42_.CTOR_OFFSET UNITYSDK_OFFSET(0xB41430)
#define <COPLAYBATTLERESULT>D__42_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB43220)
#define <COPLAYBATTLERESULT>D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB43230)
#define <COPLAYBATTLERESULT>D__42_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB43BC0)
#define <COPLAYBATTLERESULT>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB43BD0)
#define <COPLAYBATTLERESULT>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB43C20)

	inline static constexpr unsigned int <CoPlayBattleResult>d__42_TypeDefinitionIndex = 8343;

	class <CoPlayBattleResult>d__42 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::NetworkProtocol::MiniGameTableBoardEncounterInputResponse* response; // 0x20
		UITBGBattleTop* __4__this; // 0x28
		::System::Action* onFinished; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBATTLERESULT>D__42_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBATTLERESULT>D__42_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBATTLERESULT>D__42_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBATTLERESULT>D__42_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBATTLERESULT>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBATTLERESULT>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

