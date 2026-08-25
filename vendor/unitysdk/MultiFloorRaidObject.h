#pragma once
#include "unitysdk.h"

class MultiFloorRaidTower;
namespace MX::GameLogic::DBModel { class MultiFloorRaidDB; }
class MultiFloorRaidRetryInfo;
namespace MX::NetworkProtocol { class MultiFloorRaidSyncResponse; }
class UIMultiFloorRaid_Floor;
namespace MX::Logic::Data { class BattleSetting; }
namespace MX::Data::Excel { class MultiFloorRaidSeasonManageExcel; }

#define MULTIFLOORRAIDOBJECT__RETURNFROMFORMATION_B__40_1_OFFSET UNITYSDK_OFFSET(0x269D050)
#define MULTIFLOORRAIDOBJECT__CHECKENTEREDSEASONCLOSED_B__43_1_OFFSET UNITYSDK_OFFSET(0x269D1B0)
#define MULTIFLOORRAIDOBJECT_GET_NEWRECORDPOPUPOPEN_OFFSET UNITYSDK_OFFSET(0x269D320)
#define MULTIFLOORRAIDOBJECT_OPENFLOORLISTPOPUP_OFFSET UNITYSDK_OFFSET(0x269D330)
#define MULTIFLOORRAIDOBJECT_SET_PLAYEDFLOOR_OFFSET UNITYSDK_OFFSET(0x269D4F0)
#define MULTIFLOORRAIDOBJECT_SET_NEWRECORDPOPUPOPEN_OFFSET UNITYSDK_OFFSET(0x269D500)
#define MULTIFLOORRAIDOBJECT_SET_ISRETRY_OFFSET UNITYSDK_OFFSET(0x269D510)
#define MULTIFLOORRAIDOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x269D520)
#define MULTIFLOORRAIDOBJECT_GET_TOWER_OFFSET UNITYSDK_OFFSET(0x269D590)
#define MULTIFLOORRAIDOBJECT_CHECKENTEREDSEASONCLOSED_OFFSET UNITYSDK_OFFSET(0x269D5A0)
#define MULTIFLOORRAIDOBJECT__RETURNFROMFORMATION_B__40_2_OFFSET UNITYSDK_OFFSET(0x269D810)
#define MULTIFLOORRAIDOBJECT_SET_SELECTEDFLOORFORRETURNFORMATION_OFFSET UNITYSDK_OFFSET(0x269D850)
#define MULTIFLOORRAIDOBJECT_SET_NEXTSEASONIDNULLABLE_OFFSET UNITYSDK_OFFSET(0x269D860)
#define MULTIFLOORRAIDOBJECT_RETRY_OFFSET UNITYSDK_OFFSET(0x269D870)
#define MULTIFLOORRAIDOBJECT_GET_SELECTEDFLOORFORRETURNFORMATION_OFFSET UNITYSDK_OFFSET(0x269DA20)
#define MULTIFLOORRAIDOBJECT_REENTERSEASON_OFFSET UNITYSDK_OFFSET(0x269D1C0)
#define MULTIFLOORRAIDOBJECT_ENTERLIVESEASONLOBBY_OFFSET UNITYSDK_OFFSET(0x269DBD0)
#define MULTIFLOORRAIDOBJECT_GET_NEXTSEASONIDNULLABLE_OFFSET UNITYSDK_OFFSET(0x269DDD0)
#define MULTIFLOORRAIDOBJECT_SYNCLOGIN_OFFSET UNITYSDK_OFFSET(0x269DDE0)
#define MULTIFLOORRAIDOBJECT_GETACTIVESEASONEXCELS_OFFSET UNITYSDK_OFFSET(0x269DDF0)
#define MULTIFLOORRAIDOBJECT_SET_TOWER_OFFSET UNITYSDK_OFFSET(0x269DEB0)
#define MULTIFLOORRAIDOBJECT_GET_PLAYEDFLOOR_OFFSET UNITYSDK_OFFSET(0x269DEC0)
#define MULTIFLOORRAIDOBJECT_GET_CURRENTSEASONDB_OFFSET UNITYSDK_OFFSET(0x269DED0)
#define MULTIFLOORRAIDOBJECT_ENTERSEASON_OFFSET UNITYSDK_OFFSET(0x269DD00)
#define MULTIFLOORRAIDOBJECT_SYNCDB_OFFSET UNITYSDK_OFFSET(0x269D180)
#define MULTIFLOORRAIDOBJECT_GETPREPARESUBSCENETIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x269DEE0)
#define MULTIFLOORRAIDOBJECT_RETURNFROMFORMATION_OFFSET UNITYSDK_OFFSET(0x269E000)
#define MULTIFLOORRAIDOBJECT_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x269E0D0)
#define MULTIFLOORRAIDOBJECT_ISCONTENTOPEN_OFFSET UNITYSDK_OFFSET(0x269DA40)
#define MULTIFLOORRAIDOBJECT_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x269D8A0)
#define MULTIFLOORRAIDOBJECT_TRYOPENNEWRECORDPOPUP_OFFSET UNITYSDK_OFFSET(0x269E160)
#define MULTIFLOORRAIDOBJECT_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x269E350)
#define MULTIFLOORRAIDOBJECT_GET_ISRETRY_OFFSET UNITYSDK_OFFSET(0x269E7F0)
#define MULTIFLOORRAIDOBJECT__RETURNFROMFORMATION_B__40_0_OFFSET UNITYSDK_OFFSET(0x269E800)
#define MULTIFLOORRAIDOBJECT_SYNCLASTCLEAREDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x269E920)
#define MULTIFLOORRAIDOBJECT_GET_SEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x269D7D0)
#define MULTIFLOORRAIDOBJECT_ISSEASONOPEN_OFFSET UNITYSDK_OFFSET(0x269E930)
#define MULTIFLOORRAIDOBJECT_SET_CURRENTSEASONDB_OFFSET UNITYSDK_OFFSET(0x269E970)

	inline static constexpr unsigned int MultiFloorRaidObject_TypeDefinitionIndex = 6835;

	class MultiFloorRaidObject : public Il2CppObject
	{
	public:
		Il2CppObject* _NextSeasonIdNullable_k__BackingField; // 0x10
		::System::Boolean _IsRetry_k__BackingField; // 0x20
		MultiFloorRaidTower* _Tower_k__BackingField; // 0x28
		::MX::GameLogic::DBModel::MultiFloorRaidDB* _CurrentSeasonDB_k__BackingField; // 0x30
		MultiFloorRaidRetryInfo* retryInfo; // 0x38
		::System::Int32 _PlayedFloor_k__BackingField; // 0x40
		::System::Int32 _SelectedFloorForReturnFormation_k__BackingField; // 0x44
		::System::Boolean _NewRecordPopupOpen_k__BackingField; // 0x48
		::System::Int64 LastClearedDifficulty; // 0x50

		::System::Void _ReturnFromFormation_b__40_1(::MX::NetworkProtocol::MultiFloorRaidSyncResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MultiFloorRaidSyncResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT__RETURNFROMFORMATION_B__40_1_OFFSET))(arg, nullptr);
		}

		::System::Void _CheckEnteredSeasonClosed_b__43_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT__CHECKENTEREDSEASONCLOSED_B__43_1_OFFSET))(nullptr);
		}

		::System::Boolean get_NewRecordPopupOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_GET_NEWRECORDPOPUPOPEN_OFFSET))(nullptr);
		}

		::System::Void OpenFloorListPopup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_OPENFLOORLISTPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void set_PlayedFloor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_SET_PLAYEDFLOOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_NewRecordPopupOpen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_SET_NEWRECORDPOPUPOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsRetry(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_SET_ISRETRY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_.CTOR_OFFSET))(nullptr);
		}

		MultiFloorRaidTower* get_Tower()
		{
			return ((MultiFloorRaidTower*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_GET_TOWER_OFFSET))(nullptr);
		}

		::System::Boolean CheckEnteredSeasonClosed(::System::Action* arg)
		{
			return ((::System::Boolean(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_CHECKENTEREDSEASONCLOSED_OFFSET))(arg, nullptr);
		}

		::System::Void _ReturnFromFormation_b__40_2(UIMultiFloorRaid_Floor* arg)
		{
			((::System::Void(*)(UIMultiFloorRaid_Floor*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT__RETURNFROMFORMATION_B__40_2_OFFSET))(arg, nullptr);
		}

		::System::Void set_SelectedFloorForReturnFormation(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_SET_SELECTEDFLOORFORRETURNFORMATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_NextSeasonIdNullable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_SET_NEXTSEASONIDNULLABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Retry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_RETRY_OFFSET))(nullptr);
		}

		::System::Int32 get_SelectedFloorForReturnFormation()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_GET_SELECTEDFLOORFORRETURNFORMATION_OFFSET))(nullptr);
		}

		::System::Void ReEnterSeason(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_REENTERSEASON_OFFSET))(arg, nullptr);
		}

		::System::Void EnterLiveSeasonLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_ENTERLIVESEASONLOBBY_OFFSET))(nullptr);
		}

		Il2CppObject* get_NextSeasonIdNullable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_GET_NEXTSEASONIDNULLABLE_OFFSET))(nullptr);
		}

		::System::Void SyncLogin(::MX::GameLogic::DBModel::MultiFloorRaidDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MultiFloorRaidDB*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_SYNCLOGIN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetActiveSeasonExcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_GETACTIVESEASONEXCELS_OFFSET))(nullptr);
		}

		::System::Void set_Tower(MultiFloorRaidTower* arg)
		{
			((::System::Void(*)(MultiFloorRaidTower*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_SET_TOWER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PlayedFloor()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_GET_PLAYEDFLOOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MultiFloorRaidDB* get_CurrentSeasonDB()
		{
			return ((::MX::GameLogic::DBModel::MultiFloorRaidDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_GET_CURRENTSEASONDB_OFFSET))(nullptr);
		}

		::System::Void EnterSeason(::System::Int64 arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_ENTERSEASON_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SyncDB(::MX::GameLogic::DBModel::MultiFloorRaidDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MultiFloorRaidDB*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_SYNCDB_OFFSET))(arg, nullptr);
		}

		::System::String* GetPrepareSubsceneTimelinePath(::System::Int64 arg, ::System::Int32 arg2)
		{
			return ((::System::String*(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_GETPREPARESUBSCENETIMELINEPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ReturnFromFormation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_RETURNFROMFORMATION_OFFSET))(nullptr);
		}

		::System::Boolean ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_SHOWREDDOT_OFFSET))(nullptr);
		}

		::System::Boolean IsContentOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_ISCONTENTOPEN_OFFSET))(nullptr);
		}

		::System::Void EnterBattle(::System::Int32 arg, ::System::Int32 arg2, Il2CppObject* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_ENTERBATTLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean TryOpenNewRecordPopup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_TRYOPENNEWRECORDPOPUP_OFFSET))(nullptr);
		}

		::System::Void StartBattle(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_STARTBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRetry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_GET_ISRETRY_OFFSET))(nullptr);
		}

		::System::Void _ReturnFromFormation_b__40_0(UIMultiFloorRaid_Floor* arg)
		{
			((::System::Void(*)(UIMultiFloorRaid_Floor*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT__RETURNFROMFORMATION_B__40_0_OFFSET))(arg, nullptr);
		}

		::System::Void SyncLastClearedDifficulty(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_SYNCLASTCLEAREDDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* get_SeasonExcel()
		{
			return ((::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_GET_SEASONEXCEL_OFFSET))(nullptr);
		}

		::System::Boolean IsSeasonOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_ISSEASONOPEN_OFFSET))(nullptr);
		}

		::System::Void set_CurrentSeasonDB(::MX::GameLogic::DBModel::MultiFloorRaidDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MultiFloorRaidDB*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDOBJECT_SET_CURRENTSEASONDB_OFFSET))(arg, nullptr);
		}

	};

