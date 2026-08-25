#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG { class CCGDataProvider; }
namespace MX::GameLogic::DBModel { class MiniGameCCGSaveDB; }
namespace MX::MinigameCCG::Visual { class ScenarioDisplayOption; }
namespace MX::Data::Excel { class MinigameCCGLevelStageExcel; }
namespace MX::MinigameCCG { class CCGCharacter; }
namespace MX::MinigameCCG { class CCGCard; }
namespace MX::GameLogic::DBModel { class MiniGameCCGCharacterDB; }
namespace MX::GameLogic::DBModel { class MiniGameCCGCardDB; }
namespace MX::GameLogic::DBModel { class MiniGameCCGPlayHistory; }
namespace MX::NetworkProtocol { class MiniGameCCGEndStageEventResponse; }
namespace MX::MinigameCCG::UI { class UICardGame_CardReward; }
namespace MX::MinigameCCG::UI { class UICardGame_Map; }
namespace MX::MinigameCCG::UI { class UICardGame_Lobby; }

#define MINIGAMECCGOBJECT_GET_ISINTERACTIVEWORLDRAID_OFFSET UNITYSDK_OFFSET(0x26F3580)
#define MINIGAMECCGOBJECT_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0x26F3590)
#define MINIGAMECCGOBJECT_INITIALIZEDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x26F35A0)
#define MINIGAMECCGOBJECT_CANRECEIVERESULTREWARD_OFFSET UNITYSDK_OFFSET(0x26F3630)
#define MINIGAMECCGOBJECT_PLAYSCENARIOSEQUENCE_OFFSET UNITYSDK_OFFSET(0x26F3840)
#define MINIGAMECCGOBJECT_SET_ISPERKSELECTIONENABLED_OFFSET UNITYSDK_OFFSET(0x26F3910)
#define MINIGAMECCGOBJECT_SET_CANSWEEP_OFFSET UNITYSDK_OFFSET(0x26F3A00)
#define MINIGAMECCGOBJECT_CREATEDEFAULTCHARACTERENTITY_OFFSET UNITYSDK_OFFSET(0x26F3A10)
#define MINIGAMECCGOBJECT_GET_PERKS_OFFSET UNITYSDK_OFFSET(0x26F3B60)
#define MINIGAMECCGOBJECT_ONPLAYSCENARIO_OFFSET UNITYSDK_OFFSET(0x26F3B70)
#define MINIGAMECCGOBJECT__REQUESTENDSTAGE_G__OPENMAPANDINITIALIZE|39_2_OFFSET UNITYSDK_OFFSET(0x26F3C40)
#define MINIGAMECCGOBJECT_ISLOCKEDPERKONOFFFUNCTION_OFFSET UNITYSDK_OFFSET(0x26F4040)
#define MINIGAMECCGOBJECT_CREATEDEFAULTCARDENTITY_OFFSET UNITYSDK_OFFSET(0x26F4260)
#define MINIGAMECCGOBJECT_SYNCREWARDPOINT_OFFSET UNITYSDK_OFFSET(0x26F4290)
#define MINIGAMECCGOBJECT_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x26F42A0)
#define MINIGAMECCGOBJECT_REQUESTENDSTAGE_OFFSET UNITYSDK_OFFSET(0x26F42B0)
#define MINIGAMECCGOBJECT_SYNCPERKS_OFFSET UNITYSDK_OFFSET(0x26F4380)
#define MINIGAMECCGOBJECT_SYNCSAVEDB_OFFSET UNITYSDK_OFFSET(0x26F4390)
#define MINIGAMECCGOBJECT_GET_LOBBYPREFABKEY_OFFSET UNITYSDK_OFFSET(0x26F43A0)
#define MINIGAMECCGOBJECT_CREATECHARACTERENTITYFROMDB_OFFSET UNITYSDK_OFFSET(0x26F4400)
#define MINIGAMECCGOBJECT_OPENLOBBYUIASYNC_OFFSET UNITYSDK_OFFSET(0x26F4490)
#define MINIGAMECCGOBJECT_STARTSCENARIOGROUPCONTINUOUS_OFFSET UNITYSDK_OFFSET(0x26F46B0)
#define MINIGAMECCGOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26F4760)
#define MINIGAMECCGOBJECT_CREATECARDENTITYFROMDB_OFFSET UNITYSDK_OFFSET(0x26F4810)
#define MINIGAMECCGOBJECT_SET_ISINTERACTIVEWORLDRAID_OFFSET UNITYSDK_OFFSET(0x26F4850)
#define MINIGAMECCGOBJECT__LASTCLEARNODEID_B__33_0_OFFSET UNITYSDK_OFFSET(0x26F4860)
#define MINIGAMECCGOBJECT__REQUESTENDSTAGE_B__39_0_OFFSET UNITYSDK_OFFSET(0x26F4890)
#define MINIGAMECCGOBJECT_GET_CANSWEEP_OFFSET UNITYSDK_OFFSET(0x26F49C0)
#define MINIGAMECCGOBJECT__PLAYSCENARIOSEQUENCE_G__CO_STARTSCENARIOGROUPCONTINUOUS|38_0_OFFSET UNITYSDK_OFFSET(0x26F49D0)
#define MINIGAMECCGOBJECT_GET_REWARDPOINT_OFFSET UNITYSDK_OFFSET(0x26F4A50)
#define MINIGAMECCGOBJECT__REQUESTENDSTAGE_B__39_1_OFFSET UNITYSDK_OFFSET(0x26F4A60)
#define MINIGAMECCGOBJECT_OPENMAPUIASYNC_OFFSET UNITYSDK_OFFSET(0x26F3E90)
#define MINIGAMECCGOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26F4AA0)
#define MINIGAMECCGOBJECT_SET_BATTLETIMESCALE_OFFSET UNITYSDK_OFFSET(0x26F4B20)
#define MINIGAMECCGOBJECT_ISCLEARNODE_OFFSET UNITYSDK_OFFSET(0x26F4C20)
#define MINIGAMECCGOBJECT_SYNCCURRENTCARDGAMEDATA_OFFSET UNITYSDK_OFFSET(0x26F4D10)
#define MINIGAMECCGOBJECT_GET_BATTLETIMESCALE_OFFSET UNITYSDK_OFFSET(0x26F4DB0)
#define MINIGAMECCGOBJECT_GETMAPUI_OFFSET UNITYSDK_OFFSET(0x26F3DF0)
#define MINIGAMECCGOBJECT_LASTCLEARNODEID_OFFSET UNITYSDK_OFFSET(0x26F4EA0)
#define MINIGAMECCGOBJECT_GET_ISPERKSELECTIONENABLED_OFFSET UNITYSDK_OFFSET(0x26F4FD0)
#define MINIGAMECCGOBJECT_GETLOBBYUI_OFFSET UNITYSDK_OFFSET(0x26F50B0)
#define MINIGAMECCGOBJECT_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x26F51E0)

	inline static constexpr unsigned int MinigameCCGObject_TypeDefinitionIndex = 437;

	class MinigameCCGObject : public Il2CppObject
	{
	public:
		::System::Int64 eventContentId; // 0x10
		::System::Boolean _IsInteractiveWorldRaid_k__BackingField; // 0x18
		::System::Boolean _CanSweep_k__BackingField; // 0x19
		::MX::MinigameCCG::CCGDataProvider* DataProvider; // 0x20
		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* saveDB; // 0x28
		::System::Int32 rewardPoint; // 0x30
		Il2CppObject* perks; // 0x38

		::System::Boolean get_IsInteractiveWorldRaid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_GET_ISINTERACTIVEWORLDRAID_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* get_SaveDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_GET_SAVEDB_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* InitializeDataProvider()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_INITIALIZEDATAPROVIDER_OFFSET))(nullptr);
		}

		::System::Void CanReceiveResultReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_CANRECEIVERESULTREWARD_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayScenarioSequence(::MX::MinigameCCG::Visual::ScenarioDisplayOption* arg, ::MX::Data::Excel::MinigameCCGLevelStageExcel* arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::MinigameCCG::Visual::ScenarioDisplayOption*, ::MX::Data::Excel::MinigameCCGLevelStageExcel*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_PLAYSCENARIOSEQUENCE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_IsPerkSelectionEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_SET_ISPERKSELECTIONENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void set_CanSweep(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_SET_CANSWEEP_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGCharacter* CreateDefaultCharacterEntity(::System::Int64 arg)
		{
			return ((::MX::MinigameCCG::CCGCharacter*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_CREATEDEFAULTCHARACTERENTITY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Perks()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_GET_PERKS_OFFSET))(nullptr);
		}

		::System::Boolean OnPlayScenario(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_ONPLAYSCENARIO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _RequestEndStage_g__OpenMapAndInitialize|39_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT__REQUESTENDSTAGE_G__OPENMAPANDINITIALIZE|39_2_OFFSET))(nullptr);
		}

		::System::Boolean IsLockedPerkOnOffFunction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_ISLOCKEDPERKONOFFFUNCTION_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGCard* CreateDefaultCardEntity(::System::Int64 arg)
		{
			return ((::MX::MinigameCCG::CCGCard*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_CREATEDEFAULTCARDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void SyncRewardPoint(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_SYNCREWARDPOINT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void RequestEndStage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_REQUESTENDSTAGE_OFFSET))(nullptr);
		}

		::System::Void SyncPerks(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_SYNCPERKS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncSaveDB(::MX::GameLogic::DBModel::MiniGameCCGSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_SYNCSAVEDB_OFFSET))(arg, nullptr);
		}

		::System::String* get_LobbyPrefabKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_GET_LOBBYPREFABKEY_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGCharacter* CreateCharacterEntityFromDB(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* arg)
		{
			return ((::MX::MinigameCCG::CCGCharacter*(*)(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_CREATECHARACTERENTITYFROMDB_OFFSET))(arg, nullptr);
		}

		::System::Void OpenLobbyUIAsync(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_OPENLOBBYUIASYNC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void StartScenarioGroupContinuous(::MX::MinigameCCG::Visual::ScenarioDisplayOption* arg, ::MX::Data::Excel::MinigameCCGLevelStageExcel* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::MinigameCCG::Visual::ScenarioDisplayOption*, ::MX::Data::Excel::MinigameCCGLevelStageExcel*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_STARTSCENARIOGROUPCONTINUOUS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGCard* CreateCardEntityFromDB(::MX::GameLogic::DBModel::MiniGameCCGCardDB* arg)
		{
			return ((::MX::MinigameCCG::CCGCard*(*)(::MX::GameLogic::DBModel::MiniGameCCGCardDB*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_CREATECARDENTITYFROMDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsInteractiveWorldRaid(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_SET_ISINTERACTIVEWORLDRAID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _LastClearNodeId_b__33_0(::MX::GameLogic::DBModel::MiniGameCCGPlayHistory* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::MiniGameCCGPlayHistory*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT__LASTCLEARNODEID_B__33_0_OFFSET))(arg, nullptr);
		}

		::System::Void _RequestEndStage_b__39_0(::MX::NetworkProtocol::MiniGameCCGEndStageEventResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameCCGEndStageEventResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT__REQUESTENDSTAGE_B__39_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanSweep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_GET_CANSWEEP_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _PlayScenarioSequence_g__co_StartScenarioGroupContinuous|38_0(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT__PLAYSCENARIOSEQUENCE_G__CO_STARTSCENARIOGROUPCONTINUOUS|38_0_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_GET_REWARDPOINT_OFFSET))(nullptr);
		}

		::System::Void _RequestEndStage_b__39_1(::MX::MinigameCCG::UI::UICardGame_CardReward* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_CardReward*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT__REQUESTENDSTAGE_B__39_1_OFFSET))(arg, nullptr);
		}

		::System::Void OpenMapUIAsync(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_OPENMAPUIASYNC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_BattleTimeScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_SET_BATTLETIMESCALE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsClearNode(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_ISCLEARNODE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* SyncCurrentCardGameData(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_SYNCCURRENTCARDGAMEDATA_OFFSET))(arg, nullptr);
		}

		::System::Single get_BattleTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_GET_BATTLETIMESCALE_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::UI::UICardGame_Map* GetMapUI()
		{
			return ((::MX::MinigameCCG::UI::UICardGame_Map*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_GETMAPUI_OFFSET))(nullptr);
		}

		::System::Int64 LastClearNodeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_LASTCLEARNODEID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPerkSelectionEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_GET_ISPERKSELECTIONENABLED_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::UI::UICardGame_Lobby* GetLobbyUI()
		{
			return ((::MX::MinigameCCG::UI::UICardGame_Lobby*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_GETLOBBYUI_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECCGOBJECT_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};

