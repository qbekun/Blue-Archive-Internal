#pragma once
#include "unitysdk.h"

class EliminateRaidObject;
namespace MX::GameLogic::DBModel { class RaidDB; }
class EliminateRaidGiveUpNetworkTask;
class UIEliminateRaidLobby;
class EliminateRaidLobbyNetworkTask;

#define <GIVEUP>D__30_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ECBEC0)
#define <GIVEUP>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ECD030)
#define <GIVEUP>D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ECD040)
#define <GIVEUP>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ECD340)
#define <GIVEUP>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1ECD350)
#define <GIVEUP>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ECD3A0)

	inline static constexpr unsigned int <GiveUp>d__30_TypeDefinitionIndex = 1776;

	class <GiveUp>d__30 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		EliminateRaidObject* __4__this; // 0x20
		::MX::GameLogic::DBModel::RaidDB* db; // 0x28
		EliminateRaidGiveUpNetworkTask* _giveUpTask_5__2; // 0x30
		UIEliminateRaidLobby* _raidLobby_5__3; // 0x38
		EliminateRaidLobbyNetworkTask* _task_5__4; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GIVEUP>D__30_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GIVEUP>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GIVEUP>D__30_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GIVEUP>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GIVEUP>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GIVEUP>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

