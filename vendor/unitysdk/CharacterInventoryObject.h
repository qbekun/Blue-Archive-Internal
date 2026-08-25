#pragma once
#include "unitysdk.h"

class CharacterInventoryFilter;
class InventoryFilterBase;
namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace FlatData { class Club; }
class CharacterObject;
namespace FlatData { class SquadType; }

#define CHARACTERINVENTORYOBJECT_GET_FILTEROPTION_OFFSET UNITYSDK_OFFSET(0x10B2A00)
#define CHARACTERINVENTORYOBJECT_GET_NEEDRESYNC_OFFSET UNITYSDK_OFFSET(0x10B2A10)
#define CHARACTERINVENTORYOBJECT_SET_NEEDRESYNC_OFFSET UNITYSDK_OFFSET(0x10B2A20)
#define CHARACTERINVENTORYOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10B2A30)
#define CHARACTERINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x10B2B80)
#define CHARACTERINVENTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x10B2D60)
#define CHARACTERINVENTORYOBJECT_REFRESHBATTLEENTITIESWITHPERSONALITYID_OFFSET UNITYSDK_OFFSET(0x10B3150)
#define CHARACTERINVENTORYOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x10B3520)
#define CHARACTERINVENTORYOBJECT_HASLEVELDATA_OFFSET UNITYSDK_OFFSET(0x10B3710)
#define CHARACTERINVENTORYOBJECT_GETLEVELEXP_OFFSET UNITYSDK_OFFSET(0x10B37A0)
#define CHARACTERINVENTORYOBJECT_CANADDLEVELUPINGREDIENT_OFFSET UNITYSDK_OFFSET(0x10B3830)
#define CHARACTERINVENTORYOBJECT_GETCHARACTERS_OFFSET UNITYSDK_OFFSET(0x10B3840)
#define CHARACTERINVENTORYOBJECT_GETCHARACTERSCOUNT_OFFSET UNITYSDK_OFFSET(0x10B3930)
#define CHARACTERINVENTORYOBJECT_GETCHARACTERSBYPERSONALITY_OFFSET UNITYSDK_OFFSET(0x10B3980)
#define CHARACTERINVENTORYOBJECT_GETFAVORRANKINFOBYPERSONALITYID_OFFSET UNITYSDK_OFFSET(0x10B3A70)
#define CHARACTERINVENTORYOBJECT_FINDININVENTORYORGETFIXEDCHARACTER_OFFSET UNITYSDK_OFFSET(0x10B3E30)
#define CHARACTERINVENTORYOBJECT_HASOBJECTWITHSAMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x10B3FE0)
#define CHARACTERINVENTORYOBJECT_FINDOBJECTSSAMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x10B40A0)
#define CHARACTERINVENTORYOBJECT_GETCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0x10B4170)
#define CHARACTERINVENTORYOBJECT_CREATECHARACTERSFORUI_OFFSET UNITYSDK_OFFSET(0x10B4390)
#define CHARACTERINVENTORYOBJECT_GETCURRENTCOSTUMEIDBYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x10B4510)
#define CHARACTERINVENTORYOBJECT_RESETFAVORITECACHE_OFFSET UNITYSDK_OFFSET(0x10B4870)
#define CHARACTERINVENTORYOBJECT_CHANGEFAVORITECACHE_OFFSET UNITYSDK_OFFSET(0x10B48C0)
#define CHARACTERINVENTORYOBJECT_GETFAVORITECHANGEDCACHE_OFFSET UNITYSDK_OFFSET(0x10B4920)
#define CHARACTERINVENTORYOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x10B4990)

	inline static constexpr unsigned int CharacterInventoryObject_TypeDefinitionIndex = 920;

	class CharacterInventoryObject : public <OnState>d__4
	{
	public:
		CharacterInventoryFilter* filterOption; // 0x20
		Il2CppObject* favoriteChangedCacheDic; // 0x28
		::System::Boolean _NeedResync_k__BackingField; // 0x30

		InventoryFilterBase* get_FilterOption()
		{
			return ((InventoryFilterBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_GET_FILTEROPTION_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedResync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_GET_NEEDRESYNC_OFFSET))(nullptr);
		}

		::System::Void set_NeedResync(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_SET_NEEDRESYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Sync(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshBattleEntitiesWithPersonalityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_REFRESHBATTLEENTITIESWITHPERSONALITYID_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasLevelData(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_HASLEVELDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetLevelExp(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_GETLEVELEXP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanAddLevelUpIngredient(::System::Int64 arg, Il2CppObject* arg2, ::System::Int64 arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_CANADDLEVELUPINGREDIENT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetCharacters(::FlatData::Club* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::Club*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_GETCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCharactersCount(::FlatData::Club* arg)
		{
			return ((::System::Int32(*)(::FlatData::Club*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_GETCHARACTERSCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCharactersByPersonality(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_GETCHARACTERSBYPERSONALITY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFavorRankInfoByPersonalityId(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_GETFAVORRANKINFOBYPERSONALITYID_OFFSET))(arg, nullptr);
		}

		CharacterObject* FindInInventoryOrGetFixedCharacter(::System::Int64 arg, ::System::Int64 arg2, ::FlatData::SquadType* arg3)
		{
			return ((CharacterObject*(*)(::System::Int64, ::System::Int64, ::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_FINDININVENTORYORGETFIXEDCHARACTER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean HasObjectWithSameUniqueId(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_HASOBJECTWITHSAMEUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindObjectsSameUniqueId(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_FINDOBJECTSSAMEUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCharacterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_GETCHARACTERDBS_OFFSET))(nullptr);
		}

		::System::Void CreateCharactersForUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_CREATECHARACTERSFORUI_OFFSET))(nullptr);
		}

		::System::Int64 GetCurrentCostumeIdByCharacterId(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_GETCURRENTCOSTUMEIDBYCHARACTERID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetFavoriteCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_RESETFAVORITECACHE_OFFSET))(nullptr);
		}

		::System::Void ChangeFavoriteCache(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_CHANGEFAVORITECACHE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetFavoriteChangedCache()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_GETFAVORITECHANGEDCACHE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

