#pragma once
#include "unitysdk.h"

namespace MX::Visual::Battles { class BattleSceneHandler; }
class EvacuationHandler;
namespace MX::Logic::Data { class BattleSetting; }
namespace MX::Logic::Battles { class Battle; }

#define MXBATTLETASK_RETRY_OFFSET UNITYSDK_OFFSET(0x2022B60)
#define MXBATTLETASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2022CE0)
#define MXBATTLETASK_GET_FRAMEPERSECOND_OFFSET UNITYSDK_OFFSET(0x2022D50)
#define MXBATTLETASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x2022EE0)
#define MXBATTLETASK_COSTARTGAME_OFFSET UNITYSDK_OFFSET(0x2022C30)
#define MXBATTLETASK_SET_BATTLESETTING_OFFSET UNITYSDK_OFFSET(0x2022F10)
#define MXBATTLETASK_GET_EVACUATIONHANDLER_OFFSET UNITYSDK_OFFSET(0x2022F20)
#define MXBATTLETASK_SET_EVACUATIONHANDLER_OFFSET UNITYSDK_OFFSET(0x2022F30)
#define MXBATTLETASK_FORCECLEARBATTLE_OFFSET UNITYSDK_OFFSET(0x2022F40)
#define MXBATTLETASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2023040)
#define MXBATTLETASK_SET_AUDIOMIXERSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0x2023050)
#define MXBATTLETASK_GET_HANDLER_OFFSET UNITYSDK_OFFSET(0x2023060)
#define MXBATTLETASK_GET_BATTLESETTING_OFFSET UNITYSDK_OFFSET(0x2023070)
#define MXBATTLETASK_STARTGAME_OFFSET UNITYSDK_OFFSET(0x2023080)
#define MXBATTLETASK_GET_AUDIOMIXERSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0x2023130)
#define MXBATTLETASK_GET_BATTLE_OFFSET UNITYSDK_OFFSET(0x2022E60)
#define MXBATTLETASK_COUNLOADBATTLE_OFFSET UNITYSDK_OFFSET(0x2022A70)
#define MXBATTLETASK_GET_PLAYERGROUPLEADERID_OFFSET UNITYSDK_OFFSET(0x2023160)
#define MXBATTLETASK_COPRELOADBGM_OFFSET UNITYSDK_OFFSET(0x2023280)

	inline static constexpr unsigned int MXBattleTask_TypeDefinitionIndex = 3190;

	class MXBattleTask : public Il2CppObject
	{
	public:
		::MX::Visual::Battles::BattleSceneHandler* handler; // 0x10
		EvacuationHandler* _EvacuationHandler_k__BackingField; // 0x18
		::System::String* _AudioMixerSnapshotName_k__BackingField; // 0x20
		::MX::Logic::Data::BattleSetting* _BattleSetting_k__BackingField; // 0x28
		::System::Boolean IsOnStartProcess; // 0x30

		::System::Void Retry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_RETRY_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_INITIALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* get_FramePerSecond()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_GET_FRAMEPERSECOND_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoStartGame(::MX::Logic::Data::BattleSetting* arg, ::System::Boolean arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Data::BattleSetting*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_COSTARTGAME_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_BattleSetting(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_SET_BATTLESETTING_OFFSET))(arg, nullptr);
		}

		EvacuationHandler* get_EvacuationHandler()
		{
			return ((EvacuationHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_GET_EVACUATIONHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_EvacuationHandler(EvacuationHandler* arg)
		{
			((::System::Void(*)(EvacuationHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_SET_EVACUATIONHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void ForceClearBattle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_FORCECLEARBATTLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AudioMixerSnapshotName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_SET_AUDIOMIXERSNAPSHOTNAME_OFFSET))(str, nullptr);
		}

		::MX::Visual::Battles::BattleSceneHandler* get_Handler()
		{
			return ((::MX::Visual::Battles::BattleSceneHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_GET_HANDLER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleSetting* get_BattleSetting()
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_GET_BATTLESETTING_OFFSET))(nullptr);
		}

		::System::Void StartGame(::MX::Logic::Data::BattleSetting* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_STARTGAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_AudioMixerSnapshotName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_GET_AUDIOMIXERSNAPSHOTNAME_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Battle* get_Battle()
		{
			return ((::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_GET_BATTLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoUnloadBattle(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_COUNLOADBATTLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PlayerGroupLeaderId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_GET_PLAYERGROUPLEADERID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPreloadBGM()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBATTLETASK_COPRELOADBGM_OFFSET))(nullptr);
		}

	};

