#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGBoardSaveDB; }
namespace MX::Data { class ITBGObjectInfo; }
namespace MX::Data { class ITBGEncounterInfo; }
namespace FlatData { class TBGThemaType; }
namespace MX::Campaign { class HexLocation; }
namespace MX::TableBoard { class TBGObjectInteractionType; }
namespace MX::TableBoard { class TBGHexaObjectDB; }

#define MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_BEFORESTORYOPTION_OFFSET UNITYSDK_OFFSET(0xF090C0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ISFAKETREASURE_OFFSET UNITYSDK_OFFSET(0xF090D0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_ISFAKETREASURE_OFFSET UNITYSDK_OFFSET(0xF05740)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0xF090E0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ENCOUNTERINFO_OFFSET UNITYSDK_OFFSET(0xF090F0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_CHANGEENCOUNTERID_OFFSET UNITYSDK_OFFSET(0xF05750)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0xF091A0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ISBLOCKINGPLAYER_OFFSET UNITYSDK_OFFSET(0xF091C0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0xF09290)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_BEFORESTORYOPTION_OFFSET UNITYSDK_OFFSET(0xF092A0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_ENCOUNTERID_OFFSET UNITYSDK_OFFSET(0xF092B0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ISPASSABLE_OFFSET UNITYSDK_OFFSET(0xF06C10)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ENCOUNTERID_OFFSET UNITYSDK_OFFSET(0xF092C0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_LOCATION_OFFSET UNITYSDK_OFFSET(0xF092D0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_CANSKIPBEFORESTORY_OFFSET UNITYSDK_OFFSET(0xF092E0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xF09430)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ENCOUNTERCOSTALREADYPAID_OFFSET UNITYSDK_OFFSET(0xF09440)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF09450)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF09460)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_RESOLVESAVEDB_OFFSET UNITYSDK_OFFSET(0xF09470)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_INTERACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xF09480)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_SHOULDPAYENCOUNTERCOST_OFFSET UNITYSDK_OFFSET(0xF09550)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_HITPOINT_OFFSET UNITYSDK_OFFSET(0xF09610)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_FIXREWARDUNIQUEIDBYINDEX_OFFSET UNITYSDK_OFFSET(0xF09620)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0xF09630)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_ENCOUNTERCOSTALREADYPAID_OFFSET UNITYSDK_OFFSET(0xF05780)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_DAMAGE_OFFSET UNITYSDK_OFFSET(0xF09640)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_MAPTYPE_OFFSET UNITYSDK_OFFSET(0xF097B0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xF097C0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xF097D0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0xF00330)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_OBJECTINFO_OFFSET UNITYSDK_OFFSET(0xEFF3E0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ISINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xF05E30)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_MAPTYPE_OFFSET UNITYSDK_OFFSET(0xF097E0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_CREATEOBJECTDB_OFFSET UNITYSDK_OFFSET(0xF059A0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_FIXREWARDUNIQUEIDBYINDEX_OFFSET UNITYSDK_OFFSET(0xF097F0)
#define MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_HITPOINT_OFFSET UNITYSDK_OFFSET(0xF05770)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGHexaObjectDB_TypeDefinitionIndex = 11207;

	class TBGHexaObjectDB : public Il2CppObject
	{
	public:
		::MX::TableBoard::TBGBoardSaveDB* _saveDB; // 0x10
		::System::Boolean _IsDirty_k__BackingField; // 0x18
		::MX::Data::ITBGObjectInfo* _objectInfoCache; // 0x20
		::MX::Data::ITBGEncounterInfo* _encounterInfoCache; // 0x28
		::System::Int64 _ServerId_k__BackingField; // 0x30
		::System::Int64 _UniqueId_k__BackingField; // 0x38
		::System::Int64 _EncounterId_k__BackingField; // 0x40
		::FlatData::TBGThemaType* _MapType_k__BackingField; // 0x48
		::MX::Campaign::HexLocation* _Location_k__BackingField; // 0x4C
		::System::Boolean _activated; // 0x58
		Il2CppObject* _hitPoint; // 0x5C
		Il2CppObject* _beforeStoryOption; // 0x64
		::System::Boolean _encounterCostAlreadyPaid; // 0x6C
		Il2CppObject* _isFakeTrasure; // 0x6D
		Il2CppObject* _FixRewardUniqueIdByIndex; // 0x70

		::System::Void set_BeforeStoryOption(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_BEFORESTORYOPTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_IsFakeTreasure()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ISFAKETREASURE_OFFSET))(nullptr);
		}

		::System::Void set_IsFakeTreasure(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_ISFAKETREASURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Activated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ACTIVATED_OFFSET))(nullptr);
		}

		::MX::Data::ITBGEncounterInfo* get_EncounterInfo()
		{
			return ((::MX::Data::ITBGEncounterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ENCOUNTERINFO_OFFSET))(nullptr);
		}

		::System::Void ChangeEncounterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_CHANGEENCOUNTERID_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexLocation* get_Location()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBlockingPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ISBLOCKINGPLAYER_OFFSET))(nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_SERVERID_OFFSET))(nullptr);
		}

		Il2CppObject* get_BeforeStoryOption()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_BEFORESTORYOPTION_OFFSET))(nullptr);
		}

		::System::Void set_EncounterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_ENCOUNTERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPassable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ISPASSABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_EncounterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ENCOUNTERID_OFFSET))(nullptr);
		}

		::System::Void set_Location(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_LOCATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanSkipBeforeStory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_CANSKIPBEFORESTORY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ISDIRTY_OFFSET))(nullptr);
		}

		::System::Boolean get_EncounterCostAlreadyPaid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ENCOUNTERCOSTALREADYPAID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void ResolveSaveDB(::MX::TableBoard::TBGBoardSaveDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_RESOLVESAVEDB_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGObjectInteractionType* get_InteractionType()
		{
			return ((::MX::TableBoard::TBGObjectInteractionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_INTERACTIONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ShouldPayEncounterCost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_SHOULDPAYENCOUNTERCOST_OFFSET))(nullptr);
		}

		Il2CppObject* get_HitPoint()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_HITPOINT_OFFSET))(nullptr);
		}

		Il2CppObject* get_FixRewardUniqueIdByIndex()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_FIXREWARDUNIQUEIDBYINDEX_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EncounterCostAlreadyPaid(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_ENCOUNTERCOSTALREADYPAID_OFFSET))(arg, nullptr);
		}

		::System::Boolean Damage(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_DAMAGE_OFFSET))(arg, nullptr);
		}

		::FlatData::TBGThemaType* get_MapType()
		{
			return ((::FlatData::TBGThemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_MAPTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsDirty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_ISDIRTY_OFFSET))(arg, nullptr);
		}

		::System::Void set_Activated(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_ACTIVATED_OFFSET))(arg, nullptr);
		}

		::MX::Data::ITBGObjectInfo* get_ObjectInfo()
		{
			return ((::MX::Data::ITBGObjectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_OBJECTINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_GET_ISINTERACTABLE_OFFSET))(nullptr);
		}

		::System::Void set_MapType(::FlatData::TBGThemaType* arg)
		{
			((::System::Void(*)(::FlatData::TBGThemaType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_MAPTYPE_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGHexaObjectDB* CreateObjectDB(::MX::TableBoard::TBGBoardSaveDB* arg, ::MX::Data::ITBGObjectInfo* arg2, ::System::Int64 arg3, ::FlatData::TBGThemaType* arg4, ::MX::Campaign::HexLocation* arg5, ::System::Int64 arg6)
		{
			return ((::MX::TableBoard::TBGHexaObjectDB*(*)(::MX::TableBoard::TBGBoardSaveDB*, ::MX::Data::ITBGObjectInfo*, ::System::Int64, ::FlatData::TBGThemaType*, ::MX::Campaign::HexLocation*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_CREATEOBJECTDB_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void set_FixRewardUniqueIdByIndex(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_FIXREWARDUNIQUEIDBYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_HitPoint(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAOBJECTDB_SET_HITPOINT_OFFSET))(arg, nullptr);
		}

	};
}

