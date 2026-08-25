#pragma once
#include "../../unitysdk.h"

class TBGEventHandler;
namespace MX::Data { class ITBGSeasonInfo; }
namespace FlatData { class TBGThemaType; }
namespace MX::TableBoard { class TBGHexaMapDB; }
namespace MX::TableBoard { class TBGPlayerDB; }
namespace MX::TableBoard { class TBGEncounterDB; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::TableBoard { class TBGBoardSaveDB; }
namespace MX::Core::Math { class IRandomService; }
namespace MX::Campaign { class HexLocation; }
namespace MX::TableBoard { class TBGHexaObjectDB; }

#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_EVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xEFC940)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_SET_EVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xEFC950)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0xEFC6B0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_HASACTIVEENCOUNTER_OFFSET UNITYSDK_OFFSET(0xEFC960)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_CURRENTMAP_OFFSET UNITYSDK_OFFSET(0xEFB310)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_ISCLEARTHEMA_OFFSET UNITYSDK_OFFSET(0xEFC990)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_SWEEPABLE_OFFSET UNITYSDK_OFFSET(0xEFCB30)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xEFCC80)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xEFCC90)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xEFCCA0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xEFCCB0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_ROUND_OFFSET UNITYSDK_OFFSET(0xEFCCC0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_SET_ROUND_OFFSET UNITYSDK_OFFSET(0xEFCCD0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_THEMAINDEX_OFFSET UNITYSDK_OFFSET(0xEFCCE0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_SET_THEMAINDEX_OFFSET UNITYSDK_OFFSET(0xEFCCF0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_CURRENTTHEMAMAPTYPE_OFFSET UNITYSDK_OFFSET(0xEFCD00)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_SET_CURRENTTHEMAMAPTYPE_OFFSET UNITYSDK_OFFSET(0xEFCD10)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_MAINMAP_OFFSET UNITYSDK_OFFSET(0xEFCD20)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_SET_MAINMAP_OFFSET UNITYSDK_OFFSET(0xEFCD30)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_HIDDENMAP_OFFSET UNITYSDK_OFFSET(0xEFCD40)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_SET_HIDDENMAP_OFFSET UNITYSDK_OFFSET(0xEFCD50)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0xEFCD60)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_SET_PLAYER_OFFSET UNITYSDK_OFFSET(0xEFCD70)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_ENCOUNTER_OFFSET UNITYSDK_OFFSET(0xEFCD80)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_SET_ENCOUNTER_OFFSET UNITYSDK_OFFSET(0xEFCD90)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_BESTCLEARRECORD_OFFSET UNITYSDK_OFFSET(0xEFCDA0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_SET_BESTCLEARRECORD_OFFSET UNITYSDK_OFFSET(0xEFCDB0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_HIDDENTREASURERECORD_OFFSET UNITYSDK_OFFSET(0xEFCDC0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_SET_HIDDENTREASURERECORD_OFFSET UNITYSDK_OFFSET(0xEFCDD0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_HIDDENPOTALOPENCONDITIONRECORD_OFFSET UNITYSDK_OFFSET(0xEFCDE0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_SET_HIDDENPOTALOPENCONDITIONRECORD_OFFSET UNITYSDK_OFFSET(0xEFCDF0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_GET_CURRENTREVIVALCOST_OFFSET UNITYSDK_OFFSET(0xEFCE00)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_CREATENEWBOARD_OFFSET UNITYSDK_OFFSET(0xEFCEE0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_RESOLVESAVEDB_OFFSET UNITYSDK_OFFSET(0xEFD370)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0xEFD3D0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_TRYENTERNEXTTHEMA_OFFSET UNITYSDK_OFFSET(0xEFD1F0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_TRYENTERNEXTTHEMA_OFFSET UNITYSDK_OFFSET(0xEFD730)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_DISPOSETHEMA_OFFSET UNITYSDK_OFFSET(0xEFD430)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_TRYMOVEPLAYERBYTILE_OFFSET UNITYSDK_OFFSET(0xEFE0C0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_TRYINVOKEENCOUNTER_OFFSET UNITYSDK_OFFSET(0xEFE5D0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_PAYCOSTENCOUNTER_OFFSET UNITYSDK_OFFSET(0xEFC3B0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_FINALIZEENCOUNTER_OFFSET UNITYSDK_OFFSET(0xEFBF70)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_DISPOSEENCOUNTER_OFFSET UNITYSDK_OFFSET(0xEFEC80)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_TRYMOVEPLAYERANOTHERMAPINTHEMA_OFFSET UNITYSDK_OFFSET(0xEFEAB0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_TRYGETPATHANDCOSTFORPLAYERMOVE_OFFSET UNITYSDK_OFFSET(0xEFECB0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_ONPAYCOSTREQUIRED_OFFSET UNITYSDK_OFFSET(0xEFEB80)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_TRYENTERPORTALCONDITION_OFFSET UNITYSDK_OFFSET(0xEFE720)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_FINDITEMEFFECTSTOREMOVEBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xEFDCD0)
#define MX_TABLEBOARD_TBGBOARDSAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xEFD0B0)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGBoardSaveDB_TypeDefinitionIndex = 11181;

	class TBGBoardSaveDB : public Il2CppObject
	{
	public:
		TBGEventHandler* _EventHandler_k__BackingField; // 0x10
		::MX::Data::ITBGSeasonInfo* _seasonInfoCache; // 0x18
		::System::Boolean WasHiddenTreasureRecorded; // 0x20
		::System::Boolean WasHiddenPotalOpenConditionRecorded; // 0x21
		::System::Int64 _AccountId_k__BackingField; // 0x28
		::System::Int64 _EventContentId_k__BackingField; // 0x30
		::System::Int32 _Round_k__BackingField; // 0x38
		::System::Int32 _ThemaIndex_k__BackingField; // 0x3C
		::FlatData::TBGThemaType* _CurrentThemaMapType_k__BackingField; // 0x40
		::MX::TableBoard::TBGHexaMapDB* _MainMap_k__BackingField; // 0x48
		::MX::TableBoard::TBGHexaMapDB* _HiddenMap_k__BackingField; // 0x50
		::MX::TableBoard::TBGPlayerDB* _Player_k__BackingField; // 0x58
		::MX::TableBoard::TBGEncounterDB* _Encounter_k__BackingField; // 0x60
		Il2CppObject* _BestClearRecord_k__BackingField; // 0x68
		Il2CppObject* _HiddenTreasureRecord_k__BackingField; // 0x70
		Il2CppObject* _HiddenPotalOpenConditionRecord_k__BackingField; // 0x78

		TBGEventHandler* get_EventHandler()
		{
			return ((TBGEventHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_EVENTHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_EventHandler(TBGEventHandler* arg)
		{
			((::System::Void(*)(TBGEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_SET_EVENTHANDLER_OFFSET))(arg, nullptr);
		}

		::MX::Data::ITBGSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::ITBGSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_HasActiveEncounter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_HASACTIVEENCOUNTER_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGHexaMapDB* get_CurrentMap()
		{
			return ((::MX::TableBoard::TBGHexaMapDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_CURRENTMAP_OFFSET))(nullptr);
		}

		::System::Boolean get_IsClearThema()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_ISCLEARTHEMA_OFFSET))(nullptr);
		}

		::System::Boolean get_Sweepable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_SWEEPABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Round()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Void set_Round(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_SET_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ThemaIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_THEMAINDEX_OFFSET))(nullptr);
		}

		::System::Void set_ThemaIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_SET_THEMAINDEX_OFFSET))(arg, nullptr);
		}

		::FlatData::TBGThemaType* get_CurrentThemaMapType()
		{
			return ((::FlatData::TBGThemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_CURRENTTHEMAMAPTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentThemaMapType(::FlatData::TBGThemaType* arg)
		{
			((::System::Void(*)(::FlatData::TBGThemaType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_SET_CURRENTTHEMAMAPTYPE_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGHexaMapDB* get_MainMap()
		{
			return ((::MX::TableBoard::TBGHexaMapDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_MAINMAP_OFFSET))(nullptr);
		}

		::System::Void set_MainMap(::MX::TableBoard::TBGHexaMapDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGHexaMapDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_SET_MAINMAP_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGHexaMapDB* get_HiddenMap()
		{
			return ((::MX::TableBoard::TBGHexaMapDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_HIDDENMAP_OFFSET))(nullptr);
		}

		::System::Void set_HiddenMap(::MX::TableBoard::TBGHexaMapDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGHexaMapDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_SET_HIDDENMAP_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGPlayerDB* get_Player()
		{
			return ((::MX::TableBoard::TBGPlayerDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_PLAYER_OFFSET))(nullptr);
		}

		::System::Void set_Player(::MX::TableBoard::TBGPlayerDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGPlayerDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_SET_PLAYER_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGEncounterDB* get_Encounter()
		{
			return ((::MX::TableBoard::TBGEncounterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_ENCOUNTER_OFFSET))(nullptr);
		}

		::System::Void set_Encounter(::MX::TableBoard::TBGEncounterDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGEncounterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_SET_ENCOUNTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BestClearRecord()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_BESTCLEARRECORD_OFFSET))(nullptr);
		}

		::System::Void set_BestClearRecord(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_SET_BESTCLEARRECORD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_HiddenTreasureRecord()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_HIDDENTREASURERECORD_OFFSET))(nullptr);
		}

		::System::Void set_HiddenTreasureRecord(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_SET_HIDDENTREASURERECORD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_HiddenPotalOpenConditionRecord()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_HIDDENPOTALOPENCONDITIONRECORD_OFFSET))(nullptr);
		}

		::System::Void set_HiddenPotalOpenConditionRecord(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_SET_HIDDENPOTALOPENCONDITIONRECORD_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_CurrentRevivalCost()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_GET_CURRENTREVIVALCOST_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGBoardSaveDB* CreateNewBoard(::MX::Core::Math::IRandomService* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::MX::TableBoard::TBGBoardSaveDB*(*)(::MX::Core::Math::IRandomService*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_CREATENEWBOARD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ResolveSaveDB()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_RESOLVESAVEDB_OFFSET))(nullptr);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_ONDESERIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryEnterNextThema(::MX::Core::Math::IRandomService* arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IRandomService*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_TRYENTERNEXTTHEMA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryEnterNextThema(::MX::Core::Math::IRandomService* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IRandomService*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_TRYENTERNEXTTHEMA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean DisposeThema()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_DISPOSETHEMA_OFFSET))(nullptr);
		}

		::MX::Campaign::HexLocation* TryMovePlayerByTile(::MX::Core::Math::IRandomService* arg, ::MX::Campaign::HexLocation* arg2, ::MX::TableBoard::TBGEncounterDB&* arg3, ::System::String&* arg4)
		{
			return ((::MX::Campaign::HexLocation*(*)(::MX::Core::Math::IRandomService*, ::MX::Campaign::HexLocation*, ::MX::TableBoard::TBGEncounterDB&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_TRYMOVEPLAYERBYTILE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean TryInvokeEncounter(::MX::TableBoard::TBGHexaObjectDB* arg, ::MX::TableBoard::TBGEncounterDB&* arg2)
		{
			return ((::System::Boolean(*)(::MX::TableBoard::TBGHexaObjectDB*, ::MX::TableBoard::TBGEncounterDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_TRYINVOKEENCOUNTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PayCostEncounter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_PAYCOSTENCOUNTER_OFFSET))(nullptr);
		}

		::System::Void FinalizeEncounter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_FINALIZEENCOUNTER_OFFSET))(nullptr);
		}

		::System::Void DisposeEncounter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_DISPOSEENCOUNTER_OFFSET))(nullptr);
		}

		::System::Boolean TryMovePlayerAnotherMapInThema(::MX::Core::Math::IRandomService* arg, ::MX::TableBoard::TBGHexaMapDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IRandomService*, ::MX::TableBoard::TBGHexaMapDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_TRYMOVEPLAYERANOTHERMAPINTHEMA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetPathAndCostForPlayerMove(::MX::Campaign::HexLocation* arg, Il2CppObject&* arg2, ::MX::GameLogic::Parcel::ParcelCost&* arg3)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexLocation*, Il2CppObject&*, ::MX::GameLogic::Parcel::ParcelCost&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_TRYGETPATHANDCOSTFORPLAYERMOVE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnPayCostRequired(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_ONPAYCOSTREQUIRED_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryEnterPortalCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_TRYENTERPORTALCONDITION_OFFSET))(nullptr);
		}

		Il2CppObject* FindItemEffectsToRemoveByUniqueId(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_FINDITEMEFFECTSTOREMOVEBYUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGBOARDSAVEDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

