#pragma once
#include "unitysdk.h"

namespace MX::Visual::Battles { class BattleSceneHandler; }
namespace MX::Logic::Data { class BattleSetting; }

#define <CO_STARTGAME>D__59_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D75050)
#define <CO_STARTGAME>D__59_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D75D10)
#define <CO_STARTGAME>D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D75D20)
#define <CO_STARTGAME>D__59_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D76120)
#define <CO_STARTGAME>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D76130)
#define <CO_STARTGAME>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D76180)

	inline static constexpr unsigned int <co_StartGame>d__59_TypeDefinitionIndex = 20303;

	class <co_StartGame>d__59 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Visual::Battles::BattleSceneHandler* __4__this; // 0x20
		::MX::Logic::Data::BattleSetting* battleSetting; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTGAME>D__59_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTGAME>D__59_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTGAME>D__59_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTGAME>D__59_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTGAME>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTGAME>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

