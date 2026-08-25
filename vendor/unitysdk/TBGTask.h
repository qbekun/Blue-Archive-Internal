#pragma once
#include "unitysdk.h"

class TBGTask;
class TBGState;
namespace MX::Core::Math { class IRandomService; }
namespace MX::NetworkProtocol { class MiniGameTableBoardClearThemaResponse; }
namespace MX::Data { class ITBGSeasonInfo; }
namespace MX::Data { class ITBGObjectInfo; }
namespace MX::TableBoard { class TBGBoardSaveDB; }
namespace MX::NetworkProtocol { class MiniGameTableBoardSweepResponse; }
namespace MX::NetworkProtocol { class MiniGameTableBoardResurrectResponse; }
namespace FlatData { class TBGVoiceCondition; }
namespace MX::TableBoard { class TBGEncounterDB; }
namespace MX::TableBoard { class TBGThemaClearRecord; }
namespace MX::Data { class ITBGThemaInfo; }
namespace MX::Data { class ITBGThemaRewardInfo; }
namespace MX::Data { class ITBGItemInfo; }
namespace MX::NetworkProtocol { class MiniGameTableBoardMoveThemaResponse; }

#define TBGTASK_GET_ACTIVATEDTASK_OFFSET UNITYSDK_OFFSET(0x2037010)
#define TBGTASK_REQUESTCLEARTHEMA_OFFSET UNITYSDK_OFFSET(0x2037050)
#define TBGTASK__REQUESTCLEARTHEMA_B__61_0_OFFSET UNITYSDK_OFFSET(0x2037130)
#define TBGTASK_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x20372D0)
#define TBGTASK_REQUESTRESSURRECT_OFFSET UNITYSDK_OFFSET(0x2037380)
#define TBGTASK_GET_CURRENTOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x2037630)
#define TBGTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2037900)
#define TBGTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x2037970)
#define TBGTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x2037980)
#define TBGTASK_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0x2037870)
#define TBGTASK__REQUESTSWEEP_B__65_0_OFFSET UNITYSDK_OFFSET(0x20379B0)
#define TBGTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x2037B30)
#define TBGTASK_REQUESTSWEEP_OFFSET UNITYSDK_OFFSET(0x2037B40)
#define TBGTASK_GET_ENEMYHITPOINT_OFFSET UNITYSDK_OFFSET(0x2037C20)
#define TBGTASK_GET_PLAYERTILEPREFABNAME_OFFSET UNITYSDK_OFFSET(0x2037EA0)
#define TBGTASK_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x2038220)
#define TBGTASK_REQUESTMOVE_OFFSET UNITYSDK_OFFSET(0x2038460)
#define TBGTASK_GET_ISLASTTHEMAINROUND_OFFSET UNITYSDK_OFFSET(0x20385A0)
#define TBGTASK_REQUESTENCOUNTERINPUT_OFFSET UNITYSDK_OFFSET(0x20386A0)
#define TBGTASK__REQUESTRESSURRECT_B__64_0_OFFSET UNITYSDK_OFFSET(0x2038900)
#define TBGTASK_GET_TARGETTILEPREFABNAME_OFFSET UNITYSDK_OFFSET(0x2038A90)
#define TBGTASK_GET_ISHIDDENOPEN_OFFSET UNITYSDK_OFFSET(0x2038E10)
#define TBGTASK_CLEARTHEMA_OFFSET UNITYSDK_OFFSET(0x20372B0)
#define TBGTASK_PLAYVOICE_OFFSET UNITYSDK_OFFSET(0x2038F70)
#define TBGTASK_GET_DICECOUNT_OFFSET UNITYSDK_OFFSET(0x2039250)
#define TBGTASK_ISREWARDOPTIONSTAGE_OFFSET UNITYSDK_OFFSET(0x2039360)
#define TBGTASK_GETREWARDTBGITEMID_OFFSET UNITYSDK_OFFSET(0x2039440)
#define TBGTASK_GET_THEMACLEARRECORD_OFFSET UNITYSDK_OFFSET(0x2039720)
#define TBGTASK_GET_CANMOVE_OFFSET UNITYSDK_OFFSET(0x20398A0)
#define TBGTASK_GET_THEMAINFO_OFFSET UNITYSDK_OFFSET(0x2038070)
#define TBGTASK_GET_THEMAREWARDINFO_OFFSET UNITYSDK_OFFSET(0x20398B0)
#define TBGTASK_SET_STATE_OFFSET UNITYSDK_OFFSET(0x2039B10)
#define TBGTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2039B20)
#define TBGTASK_GETMAXSTACK_OFFSET UNITYSDK_OFFSET(0x2039B70)
#define TBGTASK_REQUESTUSEITEM_OFFSET UNITYSDK_OFFSET(0x2039DA0)
#define TBGTASK_GET_ENEMYMAXHITPOINT_OFFSET UNITYSDK_OFFSET(0x2039EE0)
#define TBGTASK_GET_ISINVENTORYFULL_OFFSET UNITYSDK_OFFSET(0x203A1C0)
#define TBGTASK_REQUESTMOVETHEMA_OFFSET UNITYSDK_OFFSET(0x203A320)
#define TBGTASK_GET_STATE_OFFSET UNITYSDK_OFFSET(0x203A3E0)
#define TBGTASK_CLEARDISPOSINGENCOUNTER_OFFSET UNITYSDK_OFFSET(0x2037440)
#define TBGTASK_REQUESTSYNC_OFFSET UNITYSDK_OFFSET(0x203A3F0)
#define TBGTASK_SET_ACTIVATEDTASK_OFFSET UNITYSDK_OFFSET(0x203A510)
#define TBGTASK__REQUESTMOVETHEMA_B__62_0_OFFSET UNITYSDK_OFFSET(0x203A560)

	inline static constexpr unsigned int TBGTask_TypeDefinitionIndex = 3245;

	class TBGTask : public Il2CppObject
	{
	public:
		Il2CppObject* OnRefreshState; // 0x10
		::System::Action* OnClearThema; // 0x18
		Il2CppObject* OnMove; // 0x20
		Il2CppObject* OnDiceResult; // 0x28
		Il2CppObject* OnUseItem; // 0x30
		::System::Action* OnResurrect; // 0x38
		Il2CppObject* OnSweep; // 0x40
		Il2CppObject* OnRewardOption; // 0x48
		Il2CppObject* OnParcelResult; // 0x50
		TBGTask* _ActivatedTask_k__BackingField; // 0x0
		TBGState* _State_k__BackingField; // 0x58
		::System::Int64 _EventContentId_k__BackingField; // 0x60
		::MX::Core::Math::IRandomService* random; // 0x68

		TBGTask* get_ActivatedTask()
		{
			return ((TBGTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_ACTIVATEDTASK_OFFSET))(nullptr);
		}

		::System::Void RequestClearThema(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_REQUESTCLEARTHEMA_OFFSET))(arg, nullptr);
		}

		::System::Void _RequestClearThema_b__61_0(::MX::NetworkProtocol::MiniGameTableBoardClearThemaResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameTableBoardClearThemaResponse*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK__REQUESTCLEARTHEMA_B__61_0_OFFSET))(arg, nullptr);
		}

		::MX::Data::ITBGSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::ITBGSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void RequestRessurrect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_REQUESTRESSURRECT_OFFSET))(nullptr);
		}

		::MX::Data::ITBGObjectInfo* get_CurrentObjectInfo()
		{
			return ((::MX::Data::ITBGObjectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_CURRENTOBJECTINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_RELEASE_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGBoardSaveDB* get_SaveDB()
		{
			return ((::MX::TableBoard::TBGBoardSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_SAVEDB_OFFSET))(nullptr);
		}

		::System::Void _RequestSweep_b__65_0(::MX::NetworkProtocol::MiniGameTableBoardSweepResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameTableBoardSweepResponse*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK__REQUESTSWEEP_B__65_0_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void RequestSweep(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_REQUESTSWEEP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EnemyHitPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_ENEMYHITPOINT_OFFSET))(nullptr);
		}

		::System::String* get_PlayerTilePrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_PLAYERTILEPREFABNAME_OFFSET))(nullptr);
		}

		::System::Void RefreshState(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_REFRESHSTATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RequestMove(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_REQUESTMOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLastThemaInRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_ISLASTTHEMAINROUND_OFFSET))(nullptr);
		}

		::System::Void RequestEncounterInput(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_REQUESTENCOUNTERINPUT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _RequestRessurrect_b__64_0(::MX::NetworkProtocol::MiniGameTableBoardResurrectResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameTableBoardResurrectResponse*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK__REQUESTRESSURRECT_B__64_0_OFFSET))(arg, nullptr);
		}

		::System::String* get_TargetTilePrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_TARGETTILEPREFABNAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsHiddenOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_ISHIDDENOPEN_OFFSET))(nullptr);
		}

		::System::Void ClearThema()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_CLEARTHEMA_OFFSET))(nullptr);
		}

		::System::Void PlayVoice(::FlatData::TBGVoiceCondition* arg)
		{
			((::System::Void(*)(::FlatData::TBGVoiceCondition*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_PLAYVOICE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DiceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_DICECOUNT_OFFSET))(nullptr);
		}

		::System::Boolean IsRewardOptionStage(::MX::TableBoard::TBGEncounterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::TableBoard::TBGEncounterDB*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_ISREWARDOPTIONSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetRewardTBGItemId(::MX::TableBoard::TBGEncounterDB* arg)
		{
			return ((::System::Int64(*)(::MX::TableBoard::TBGEncounterDB*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GETREWARDTBGITEMID_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGThemaClearRecord* get_ThemaClearRecord()
		{
			return ((::MX::TableBoard::TBGThemaClearRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_THEMACLEARRECORD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_CANMOVE_OFFSET))(nullptr);
		}

		::MX::Data::ITBGThemaInfo* get_ThemaInfo()
		{
			return ((::MX::Data::ITBGThemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_THEMAINFO_OFFSET))(nullptr);
		}

		::MX::Data::ITBGThemaRewardInfo* get_ThemaRewardInfo()
		{
			return ((::MX::Data::ITBGThemaRewardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_THEMAREWARDINFO_OFFSET))(nullptr);
		}

		::System::Void set_State(TBGState* arg)
		{
			((::System::Void(*)(TBGState*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxStack(::MX::Data::ITBGItemInfo* arg)
		{
			return ((::System::Int32(*)(::MX::Data::ITBGItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GETMAXSTACK_OFFSET))(arg, nullptr);
		}

		::System::Void RequestUseItem(::System::Int32 arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_REQUESTUSEITEM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 get_EnemyMaxHitPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_ENEMYMAXHITPOINT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInventoryFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_ISINVENTORYFULL_OFFSET))(nullptr);
		}

		::System::Void RequestMoveThema()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_REQUESTMOVETHEMA_OFFSET))(nullptr);
		}

		TBGState* get_State()
		{
			return ((TBGState*(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void ClearDisposingEncounter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_CLEARDISPOSINGENCOUNTER_OFFSET))(nullptr);
		}

		::System::Void RequestSync(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_REQUESTSYNC_OFFSET))(arg, nullptr);
		}

		::System::Void set_ActivatedTask(TBGTask* arg)
		{
			((::System::Void(*)(TBGTask*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK_SET_ACTIVATEDTASK_OFFSET))(arg, nullptr);
		}

		::System::Void _RequestMoveThema_b__62_0(::MX::NetworkProtocol::MiniGameTableBoardMoveThemaResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameTableBoardMoveThemaResponse*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTASK__REQUESTMOVETHEMA_B__62_0_OFFSET))(arg, nullptr);
		}

	};

