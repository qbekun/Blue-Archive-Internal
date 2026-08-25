#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class FriendDB; }
namespace MX::GameLogic::DBModel { class CafeDB; }
namespace FlatData { class CafePresetType; }
class CafeCharacterDB;
namespace MX::GameLogic::DBModel { class CafePresetDB; }
namespace FlatData { class Rarity; }

#define CAFEINFOCOMPONENT_GET_ISMYCAFE_OFFSET UNITYSDK_OFFSET(0x19AF7B0)
#define CAFEINFOCOMPONENT_GET_NEEDSYNC_OFFSET UNITYSDK_OFFSET(0x19BEA20)
#define CAFEINFOCOMPONENT_GET_PRESETS_OFFSET UNITYSDK_OFFSET(0x19BEB60)
#define CAFEINFOCOMPONENT_SET_PRESETS_OFFSET UNITYSDK_OFFSET(0x19BEB70)
#define CAFEINFOCOMPONENT_GET_COPYPRESETS_OFFSET UNITYSDK_OFFSET(0x19BEB80)
#define CAFEINFOCOMPONENT_SET_COPYPRESETS_OFFSET UNITYSDK_OFFSET(0x19BEB90)
#define CAFEINFOCOMPONENT_GET_RAIDHISTORYFORTROPHY_OFFSET UNITYSDK_OFFSET(0x19BEBA0)
#define CAFEINFOCOMPONENT_SET_RAIDHISTORYFORTROPHY_OFFSET UNITYSDK_OFFSET(0x19BEBB0)
#define CAFEINFOCOMPONENT_GET_TROPHYHISTORY_OFFSET UNITYSDK_OFFSET(0x19BEBC0)
#define CAFEINFOCOMPONENT_SET_TROPHYHISTORY_OFFSET UNITYSDK_OFFSET(0x19BEBD0)
#define CAFEINFOCOMPONENT_GET_NEEDTROPHYHISTORY_OFFSET UNITYSDK_OFFSET(0x19BEBE0)
#define CAFEINFOCOMPONENT_GET_TRAVELCAFEOWNERDB_OFFSET UNITYSDK_OFFSET(0x19BEC10)
#define CAFEINFOCOMPONENT_GET_CAFESESSIONVERSION_OFFSET UNITYSDK_OFFSET(0x19BEC20)
#define CAFEINFOCOMPONENT_SET_CAFESESSIONVERSION_OFFSET UNITYSDK_OFFSET(0x19BEC30)
#define CAFEINFOCOMPONENT_GETCAFEDB_OFFSET UNITYSDK_OFFSET(0x19B9FF0)
#define CAFEINFOCOMPONENT_GETCAFEDBS_OFFSET UNITYSDK_OFFSET(0x19BEC50)
#define CAFEINFOCOMPONENT_SHOWVISITORS_OFFSET UNITYSDK_OFFSET(0x19BEC60)
#define CAFEINFOCOMPONENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19BED40)
#define CAFEINFOCOMPONENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x19BED50)
#define CAFEINFOCOMPONENT_SYNCCAFEDB_OFFSET UNITYSDK_OFFSET(0x19BEEA0)
#define CAFEINFOCOMPONENT_SYNCCAFEDBS_OFFSET UNITYSDK_OFFSET(0x19BF3C0)
#define CAFEINFOCOMPONENT_SYNCTRAVELCAFEDBS_OFFSET UNITYSDK_OFFSET(0x19BF710)
#define CAFEINFOCOMPONENT_SYNCCAFEINFO_OFFSET UNITYSDK_OFFSET(0x19BF7C0)
#define CAFEINFOCOMPONENT_SETVISITORPERSONALITIES_OFFSET UNITYSDK_OFFSET(0x19BF060)
#define CAFEINFOCOMPONENT_ONCLEARPRESET_OFFSET UNITYSDK_OFFSET(0x19BFBB0)
#define CAFEINFOCOMPONENT_ONSETPRESETNAME_OFFSET UNITYSDK_OFFSET(0x19BFDE0)
#define CAFEINFOCOMPONENT_ONUPDATEPRESETDB_OFFSET UNITYSDK_OFFSET(0x19BFE30)
#define CAFEINFOCOMPONENT_SYNCPRESETS_OFFSET UNITYSDK_OFFSET(0x19BFE70)
#define CAFEINFOCOMPONENT_SYNCCOPYPRESETS_OFFSET UNITYSDK_OFFSET(0x19BFF60)
#define CAFEINFOCOMPONENT_GETVISITEDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x19B3DF0)
#define CAFEINFOCOMPONENT_GETVISITEDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x19C0050)
#define CAFEINFOCOMPONENT_GETORDEREDVISITORIDS_OFFSET UNITYSDK_OFFSET(0x19B30F0)
#define CAFEINFOCOMPONENT_FINDVISITOR_OFFSET UNITYSDK_OFFSET(0x19AFEC0)
#define CAFEINFOCOMPONENT_ANYVISITORPERSONALITYID_OFFSET UNITYSDK_OFFSET(0x19C00C0)
#define CAFEINFOCOMPONENT_TRYGETVISITORIDBYPERSONALITYID_OFFSET UNITYSDK_OFFSET(0x19C0110)
#define CAFEINFOCOMPONENT_FINDPRESETDB_OFFSET UNITYSDK_OFFSET(0x19BFC40)
#define CAFEINFOCOMPONENT_FINDCOPYPRESETDB_OFFSET UNITYSDK_OFFSET(0x19BFD10)
#define CAFEINFOCOMPONENT_GETCURRENTCURRENCYRATIO_OFFSET UNITYSDK_OFFSET(0x19C0190)
#define CAFEINFOCOMPONENT_GETCURRENTCURRENCYRATIO_OFFSET UNITYSDK_OFFSET(0x19C01B0)
#define CAFEINFOCOMPONENT_SYNCRAIDHISTORYFORTROPHY_OFFSET UNITYSDK_OFFSET(0x19C05A0)
#define CAFEINFOCOMPONENT_CLEARTROPHYHISTORY_OFFSET UNITYSDK_OFFSET(0x19BEE60)
#define CAFEINFOCOMPONENT_BUILDTROPHYHISTORY_OFFSET UNITYSDK_OFFSET(0x19C05D0)
#define CAFEINFOCOMPONENT_GETTROPHYFURNITUREIDS_OFFSET UNITYSDK_OFFSET(0x19C0B50)
#define CAFEINFOCOMPONENT_TRYGETTROPHYINFO_OFFSET UNITYSDK_OFFSET(0x19C0F60)
#define CAFEINFOCOMPONENT_ISTROPHYOWNED_OFFSET UNITYSDK_OFFSET(0x19C0FC0)
#define CAFEINFOCOMPONENT_GETOWNTROPHYCOUNTOVERTOTAL_OFFSET UNITYSDK_OFFSET(0x19C1070)
#define CAFEINFOCOMPONENT_GETOWNTROPHYCOUNTOVERTOTALBYGROUP_OFFSET UNITYSDK_OFFSET(0x19C1250)
#define CAFEINFOCOMPONENT_ANYPLACEDTROPHY_OFFSET UNITYSDK_OFFSET(0x19C14D0)
#define CAFEINFOCOMPONENT_ANYPLACEDFURNITURE_OFFSET UNITYSDK_OFFSET(0x19C1630)
#define CAFEINFOCOMPONENT_GETAPPLICABLETEMPLATECOUNT_OFFSET UNITYSDK_OFFSET(0x19C1720)
#define CAFEINFOCOMPONENT_GETOWNEDCOUNTFORFURNITURE_OFFSET UNITYSDK_OFFSET(0x19C1B40)
#define CAFEINFOCOMPONENT_INVALIDATECAFEUPDATETIME_OFFSET UNITYSDK_OFFSET(0x19C1C00)
#define CAFEINFOCOMPONENT_GETFIRSTCAFEDBID_OFFSET UNITYSDK_OFFSET(0x19C1D20)
#define CAFEINFOCOMPONENT_OPENCAFE_OFFSET UNITYSDK_OFFSET(0x19C1E60)
#define CAFEINFOCOMPONENT_GETVISITINGCAFEDB_OFFSET UNITYSDK_OFFSET(0x19C1FB0)
#define CAFEINFOCOMPONENT_SETTRAVELCAFEOWNERDB_OFFSET UNITYSDK_OFFSET(0x19C2080)
#define CAFEINFOCOMPONENT_HASCURRENTCAFEPURCHASEDTICKET_OFFSET UNITYSDK_OFFSET(0x19C2090)
#define CAFEINFOCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x19C22B0)

	inline static constexpr unsigned int CafeInfoComponent_TypeDefinitionIndex = 1382;

	class CafeInfoComponent : public Il2CppObject
	{
	public:
		Il2CppObject* cafeDBs; // 0x10
		Il2CppObject* visitorPersonalities; // 0x18
		Il2CppObject* _Presets_k__BackingField; // 0x20
		Il2CppObject* _CopyPresets_k__BackingField; // 0x28
		Il2CppObject* _RaidHistoryForTrophy_k__BackingField; // 0x30
		Il2CppObject* _TrophyHistory_k__BackingField; // 0x38
		::MX::GameLogic::DBModel::FriendDB* travelCafeOwnerDB; // 0x40
		::System::Boolean TravelCafeAllowsCopy; // 0x48
		::System::Int64 _CafeSessionVersion_k__BackingField; // 0x50

		::System::Boolean get_IsMyCafe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GET_ISMYCAFE_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GET_NEEDSYNC_OFFSET))(nullptr);
		}

		Il2CppObject* get_Presets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GET_PRESETS_OFFSET))(nullptr);
		}

		::System::Void set_Presets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_SET_PRESETS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CopyPresets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GET_COPYPRESETS_OFFSET))(nullptr);
		}

		::System::Void set_CopyPresets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_SET_COPYPRESETS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RaidHistoryForTrophy()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GET_RAIDHISTORYFORTROPHY_OFFSET))(nullptr);
		}

		::System::Void set_RaidHistoryForTrophy(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_SET_RAIDHISTORYFORTROPHY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TrophyHistory()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GET_TROPHYHISTORY_OFFSET))(nullptr);
		}

		::System::Void set_TrophyHistory(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_SET_TROPHYHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NeedTrophyHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GET_NEEDTROPHYHISTORY_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::FriendDB* get_TravelCafeOwnerDB()
		{
			return ((::MX::GameLogic::DBModel::FriendDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GET_TRAVELCAFEOWNERDB_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeSessionVersion()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GET_CAFESESSIONVERSION_OFFSET))(nullptr);
		}

		::System::Void set_CafeSessionVersion(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_SET_CAFESESSIONVERSION_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CafeDB* GetCafeDB(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::CafeDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GETCAFEDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCafeDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GETCAFEDBS_OFFSET))(nullptr);
		}

		::System::Boolean ShowVisitors(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_SHOWVISITORS_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_CLEAR_OFFSET))(nullptr);
		}

		::System::Void SyncCafeDB(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_SYNCCAFEDB_OFFSET))(arg, nullptr);
		}

		::System::Void SyncCafeDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_SYNCCAFEDBS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncTravelCafeDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_SYNCTRAVELCAFEDBS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncCafeInfo(Il2CppObject* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_SYNCCAFEINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetVisitorPersonalities()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_SETVISITORPERSONALITIES_OFFSET))(nullptr);
		}

		::System::Void OnClearPreset(::FlatData::CafePresetType* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatData::CafePresetType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_ONCLEARPRESET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnSetPresetName(::FlatData::CafePresetType* arg, ::System::Int32 arg2, ::System::String* str)
		{
			((::System::Void(*)(::FlatData::CafePresetType*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_ONSETPRESETNAME_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::Void OnUpdatePresetDB(::FlatData::CafePresetType* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatData::CafePresetType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_ONUPDATEPRESETDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncPresets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_SYNCPRESETS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncCopyPresets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_SYNCCOPYPRESETS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetVisitedCharacters(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GETVISITEDCHARACTERS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetVisitedCharacters(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GETVISITEDCHARACTERS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOrderedVisitorIds(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GETORDEREDVISITORIDS_OFFSET))(arg, nullptr);
		}

		CafeCharacterDB* FindVisitor(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((CafeCharacterDB*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_FINDVISITOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AnyVisitorPersonalityId(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_ANYVISITORPERSONALITYID_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetVisitorIdByPersonalityId(::System::Int64 arg, int64_t&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_TRYGETVISITORIDBYPERSONALITYID_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::CafePresetDB* FindPresetDB(::System::Int32 arg)
		{
			return ((::MX::GameLogic::DBModel::CafePresetDB*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_FINDPRESETDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CafePresetDB* FindCopyPresetDB(::System::Int32 arg)
		{
			return ((::MX::GameLogic::DBModel::CafePresetDB*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_FINDCOPYPRESETDB_OFFSET))(arg, nullptr);
		}

		::System::Single GetCurrentCurrencyRatio(::System::Int64 arg)
		{
			return ((::System::Single(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GETCURRENTCURRENCYRATIO_OFFSET))(arg, nullptr);
		}

		::System::Single GetCurrentCurrencyRatio(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((::System::Single(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GETCURRENTCURRENCYRATIO_OFFSET))(arg, nullptr);
		}

		::System::Void SyncRaidHistoryForTrophy(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_SYNCRAIDHISTORYFORTROPHY_OFFSET))(arg, nullptr);
		}

		::System::Void ClearTrophyHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_CLEARTROPHYHISTORY_OFFSET))(nullptr);
		}

		::System::Void BuildTrophyHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_BUILDTROPHYHISTORY_OFFSET))(nullptr);
		}

		Il2CppObject* GetTrophyFurnitureIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GETTROPHYFURNITUREIDS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetTrophyInfo(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_TRYGETTROPHYINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsTrophyOwned(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_ISTROPHYOWNED_OFFSET))(arg, nullptr);
		}

		::System::String* GetOwnTrophyCountOverTotal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GETOWNTROPHYCOUNTOVERTOTAL_OFFSET))(nullptr);
		}

		::System::String* GetOwnTrophyCountOverTotalByGroup(::System::Int64 arg)
		{
			return ((::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GETOWNTROPHYCOUNTOVERTOTALBYGROUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean AnyPlacedTrophy(::System::Int64 arg, ::FlatData::Rarity* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_ANYPLACEDTROPHY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AnyPlacedFurniture(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_ANYPLACEDFURNITURE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetApplicableTemplateCount(Il2CppObject* arg)
		{
			return ((::System::Int64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GETAPPLICABLETEMPLATECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetOwnedCountForFurniture(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GETOWNEDCOUNTFORFURNITURE_OFFSET))(arg, nullptr);
		}

		::System::Void InvalidateCafeUpdateTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_INVALIDATECAFEUPDATETIME_OFFSET))(nullptr);
		}

		::System::Int64 GetFirstCafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GETFIRSTCAFEDBID_OFFSET))(nullptr);
		}

		::System::Void OpenCafe(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_OPENCAFE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CafeDB* GetVisitingCafeDB(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::CafeDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_GETVISITINGCAFEDB_OFFSET))(arg, nullptr);
		}

		::System::Void SetTravelCafeOwnerDB(::MX::GameLogic::DBModel::FriendDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FriendDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_SETTRAVELCAFEOWNERDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCurrentCafePurchasedTicket()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_HASCURRENTCAFEPURCHASEDTICKET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINFOCOMPONENT_.CTOR_OFFSET))(nullptr);
		}

	};

