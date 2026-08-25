#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidDB; }
class RaidGiveUpNetworkTask;
class UIRaidLobby;
class RaidLobbyNetworkTask;

#define <GIVEUP>D__7_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ED1CE0)
#define <GIVEUP>D__7_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ED1D00)
#define <GIVEUP>D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ED1D10)
#define <GIVEUP>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ED1FF0)
#define <GIVEUP>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1ED2000)
#define <GIVEUP>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ED2050)

	inline static constexpr unsigned int <GiveUp>d__7_TypeDefinitionIndex = 1790;

	class <GiveUp>d__7 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::GameLogic::DBModel::RaidDB* db; // 0x20
		RaidGiveUpNetworkTask* _giveUpTask_5__2; // 0x28
		UIRaidLobby* _raidLobby_5__3; // 0x30
		RaidLobbyNetworkTask* _task_5__4; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GIVEUP>D__7_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GIVEUP>D__7_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GIVEUP>D__7_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GIVEUP>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GIVEUP>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GIVEUP>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

