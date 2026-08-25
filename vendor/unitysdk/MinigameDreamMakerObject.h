#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameDreamMakerInfoDB; }
namespace MX::NetworkProtocol { class MiniGameDreamMakerDailyClosingResponse; }
namespace MX::NetworkProtocol { class MiniGameDreamMakerGetInfoResponse; }
namespace MX::NetworkProtocol { class MiniGameDreamMakerEndingResponse; }

#define MINIGAMEDREAMMAKEROBJECT_SYNCEVENTCONTENTOBJECT_OFFSET UNITYSDK_OFFSET(0xB91340)
#define MINIGAMEDREAMMAKEROBJECT_GET_PARAMETERDBS_OFFSET UNITYSDK_OFFSET(0xB913F0)
#define MINIGAMEDREAMMAKEROBJECT_SET_DREAMMAKERINFODB_OFFSET UNITYSDK_OFFSET(0xB91400)
#define MINIGAMEDREAMMAKEROBJECT_SET_PARAMETERDBS_OFFSET UNITYSDK_OFFSET(0xB91410)
#define MINIGAMEDREAMMAKEROBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB91420)
#define MINIGAMEDREAMMAKEROBJECT_GET_EVENTPOINTAMOUNT_OFFSET UNITYSDK_OFFSET(0xB914A0)
#define MINIGAMEDREAMMAKEROBJECT_GET_ALREADYRECEIVEPOINTREWARDIDS_OFFSET UNITYSDK_OFFSET(0xB914B0)
#define MINIGAMEDREAMMAKEROBJECT_SET_EVENTPOINTAMOUNT_OFFSET UNITYSDK_OFFSET(0xB914C0)
#define MINIGAMEDREAMMAKEROBJECT_SET_EVENTCONTENTCOLLECTIONDBS_OFFSET UNITYSDK_OFFSET(0xB914D0)
#define MINIGAMEDREAMMAKEROBJECT_SYNCDREAMMAKERDAILYCLOSING_OFFSET UNITYSDK_OFFSET(0xB914E0)
#define MINIGAMEDREAMMAKEROBJECT_GET_EVENTCONTENTCOLLECTIONDBS_OFFSET UNITYSDK_OFFSET(0xB91630)
#define MINIGAMEDREAMMAKEROBJECT_SYNCDREAMMAKERINFO_OFFSET UNITYSDK_OFFSET(0xB91640)
#define MINIGAMEDREAMMAKEROBJECT_GET_DREAMMAKERINFODB_OFFSET UNITYSDK_OFFSET(0xB91870)
#define MINIGAMEDREAMMAKEROBJECT_SYNCDBS_OFFSET UNITYSDK_OFFSET(0xB915F0)
#define MINIGAMEDREAMMAKEROBJECT_SYNCENDING_OFFSET UNITYSDK_OFFSET(0xB91880)
#define MINIGAMEDREAMMAKEROBJECT_SET_ALREADYRECEIVEPOINTREWARDIDS_OFFSET UNITYSDK_OFFSET(0xB91910)

	inline static constexpr unsigned int MinigameDreamMakerObject_TypeDefinitionIndex = 562;

	class MinigameDreamMakerObject : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB* _DreamMakerInfoDB_k__BackingField; // 0x10
		Il2CppObject* _ParameterDBs_k__BackingField; // 0x18
		Il2CppObject* EndingDBs; // 0x20
		Il2CppObject* _EventContentCollectionDBs_k__BackingField; // 0x28
		::System::Int64 _EventPointAmount_k__BackingField; // 0x30
		Il2CppObject* _AlreadyReceivePointRewardIds_k__BackingField; // 0x38

		::System::Void SyncEventContentObject(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDREAMMAKEROBJECT_SYNCEVENTCONTENTOBJECT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ParameterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDREAMMAKEROBJECT_GET_PARAMETERDBS_OFFSET))(nullptr);
		}

		::System::Void set_DreamMakerInfoDB(::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDREAMMAKEROBJECT_SET_DREAMMAKERINFODB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParameterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDREAMMAKEROBJECT_SET_PARAMETERDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDREAMMAKEROBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventPointAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDREAMMAKEROBJECT_GET_EVENTPOINTAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_AlreadyReceivePointRewardIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDREAMMAKEROBJECT_GET_ALREADYRECEIVEPOINTREWARDIDS_OFFSET))(nullptr);
		}

		::System::Void set_EventPointAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDREAMMAKEROBJECT_SET_EVENTPOINTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentCollectionDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDREAMMAKEROBJECT_SET_EVENTCONTENTCOLLECTIONDBS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncDreamMakerDailyClosing(::MX::NetworkProtocol::MiniGameDreamMakerDailyClosingResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameDreamMakerDailyClosingResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDREAMMAKEROBJECT_SYNCDREAMMAKERDAILYCLOSING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EventContentCollectionDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDREAMMAKEROBJECT_GET_EVENTCONTENTCOLLECTIONDBS_OFFSET))(nullptr);
		}

		::System::Void SyncDreamMakerInfo(::MX::NetworkProtocol::MiniGameDreamMakerGetInfoResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameDreamMakerGetInfoResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDREAMMAKEROBJECT_SYNCDREAMMAKERINFO_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB* get_DreamMakerInfoDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDREAMMAKEROBJECT_GET_DREAMMAKERINFODB_OFFSET))(nullptr);
		}

		::System::Void SyncDBs(::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDREAMMAKEROBJECT_SYNCDBS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncEnding(::MX::NetworkProtocol::MiniGameDreamMakerEndingResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameDreamMakerEndingResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDREAMMAKEROBJECT_SYNCENDING_OFFSET))(arg, nullptr);
		}

		::System::Void set_AlreadyReceivePointRewardIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDREAMMAKEROBJECT_SET_ALREADYRECEIVEPOINTREWARDIDS_OFFSET))(arg, nullptr);
		}

	};

