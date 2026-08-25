#pragma once
#include "unitysdk.h"

namespace FlatData { class FurnitureLocation; }
namespace MX::Data::Excel { class FurnitureExcel; }
namespace UnityEngine { class Vector2; }
namespace MX::GameLogic::DBModel { class FurnitureDB; }
namespace FlatData { class FurnitureCategory; }
namespace FlatData { class FurnitureSubCategory; }
class SecureLong;
namespace FlatData { class CurrencyTypes; }
class FurnitureObject;

#define FURNITUREOBJECT_GET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0x1E4A240)
#define FURNITUREOBJECT_SET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0x1E4A250)
#define FURNITUREOBJECT_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1E4A260)
#define FURNITUREOBJECT_SET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1E4A270)
#define FURNITUREOBJECT_GET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1E4A280)
#define FURNITUREOBJECT_SET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1E4A290)
#define FURNITUREOBJECT_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1E4A2D0)
#define FURNITUREOBJECT_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1E4A2E0)
#define FURNITUREOBJECT_GET_PLACEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1E4A2F0)
#define FURNITUREOBJECT_GET_INVENTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1E4A300)
#define FURNITUREOBJECT_SET_INVENTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1E4A310)
#define FURNITUREOBJECT_GET_ISMAXSTACK_OFFSET UNITYSDK_OFFSET(0x1E4A320)
#define FURNITUREOBJECT_GET_HASLEVEL_OFFSET UNITYSDK_OFFSET(0x1E4A380)
#define FURNITUREOBJECT_GET_ISSTACKABLE_OFFSET UNITYSDK_OFFSET(0x1E4A390)
#define FURNITUREOBJECT_GET_MAXSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1E4A3C0)
#define FURNITUREOBJECT_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET UNITYSDK_OFFSET(0x1E4A3F0)
#define FURNITUREOBJECT_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1E4A400)
#define FURNITUREOBJECT_GET_LEVELUPFEEDEXP_OFFSET UNITYSDK_OFFSET(0x1E4A410)
#define FURNITUREOBJECT_GET_TYPESPRITE_OFFSET UNITYSDK_OFFSET(0x1E4A420)
#define FURNITUREOBJECT_GET_TEXTUREDIR_OFFSET UNITYSDK_OFFSET(0x1E4A470)
#define FURNITUREOBJECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E4A4A0)
#define FURNITUREOBJECT_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E4A530)
#define FURNITUREOBJECT_GET_CANBECONSUMED_OFFSET UNITYSDK_OFFSET(0x1E4A5C0)
#define FURNITUREOBJECT_GET_SETGROUPID_OFFSET UNITYSDK_OFFSET(0x1E4A5D0)
#define FURNITUREOBJECT_GET_REVERSEROTATION_OFFSET UNITYSDK_OFFSET(0x1E4A600)
#define FURNITUREOBJECT_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1E4A630)
#define FURNITUREOBJECT_SET_TAGS_OFFSET UNITYSDK_OFFSET(0x1E4A640)
#define FURNITUREOBJECT_GET_CANINTERACTFURNITURE_OFFSET UNITYSDK_OFFSET(0x1E4A660)
#define FURNITUREOBJECT_GET_CHECKFLOORDECORATION_OFFSET UNITYSDK_OFFSET(0x1E4A6E0)
#define FURNITUREOBJECT_GET_AVAILABLECHARACTERSTATES_OFFSET UNITYSDK_OFFSET(0x1E4A710)
#define FURNITUREOBJECT_GET_ISATTACHDISABLED_OFFSET UNITYSDK_OFFSET(0x1E4A720)
#define FURNITUREOBJECT_CANATTACHSTATEANY_OFFSET UNITYSDK_OFFSET(0x1E4A840)
#define FURNITUREOBJECT_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0x1E4A9B0)
#define FURNITUREOBJECT_CANTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x1E4A9C0)
#define FURNITUREOBJECT_GETEXPRATIO_OFFSET UNITYSDK_OFFSET(0x1E4A9D0)
#define FURNITUREOBJECT_GETTOTALEXPBASETOCUREXP_OFFSET UNITYSDK_OFFSET(0x1E4A9E0)
#define FURNITUREOBJECT_GETTOTALEXPBASELEVELTOMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1E4A9F0)
#define FURNITUREOBJECT_GETLEVELUPCURRENCYREQUIREDCOST_OFFSET UNITYSDK_OFFSET(0x1E4AA00)
#define FURNITUREOBJECT_GET_FURNITUREEXCEL_OFFSET UNITYSDK_OFFSET(0x1E4AA10)
#define FURNITUREOBJECT_SET_FURNITUREEXCEL_OFFSET UNITYSDK_OFFSET(0x1E4AA20)
#define FURNITUREOBJECT_GET_ROTATIONDEGREE_OFFSET UNITYSDK_OFFSET(0x1E4AFD0)
#define FURNITUREOBJECT_SET_ROTATIONDEGREE_OFFSET UNITYSDK_OFFSET(0x1E4AFE0)
#define FURNITUREOBJECT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1E4B050)
#define FURNITUREOBJECT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1E4B060)
#define FURNITUREOBJECT_GET_DB_OFFSET UNITYSDK_OFFSET(0x1E4B090)
#define FURNITUREOBJECT_SET_DB_OFFSET UNITYSDK_OFFSET(0x1E4B0A0)
#define FURNITUREOBJECT_SETLTRB_OFFSET UNITYSDK_OFFSET(0x1E4B020)
#define FURNITUREOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E481F0)
#define FURNITUREOBJECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E484A0)
#define FURNITUREOBJECT_SETTAGS_OFFSET UNITYSDK_OFFSET(0x1E4B4F0)
#define FURNITUREOBJECT_SETAVAILABLESTATES_OFFSET UNITYSDK_OFFSET(0x1E4AA50)
#define FURNITUREOBJECT_COPYPROPERTYFROMDB_OFFSET UNITYSDK_OFFSET(0x1E4B3E0)
#define FURNITUREOBJECT_ROTATE_OFFSET UNITYSDK_OFFSET(0x1E4B6E0)
#define FURNITUREOBJECT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1E4B960)
#define FURNITUREOBJECT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1E4B990)
#define FURNITUREOBJECT_GET_OTHERSIZE_OFFSET UNITYSDK_OFFSET(0x1E4B9C0)
#define FURNITUREOBJECT_GET_ISFLOORDECORATION_OFFSET UNITYSDK_OFFSET(0x1E4B9F0)
#define FURNITUREOBJECT_GET_ISWALLDECORATION_OFFSET UNITYSDK_OFFSET(0x1E4BA00)
#define FURNITUREOBJECT_GET_ISINTERIOR_OFFSET UNITYSDK_OFFSET(0x1E4BA10)
#define FURNITUREOBJECT_GET_CANROTATE_OFFSET UNITYSDK_OFFSET(0x1E4B930)
#define FURNITUREOBJECT_GET_LEFTTOP_OFFSET UNITYSDK_OFFSET(0x1E4BA20)
#define FURNITUREOBJECT_SET_LEFTTOP_OFFSET UNITYSDK_OFFSET(0x1E4BA30)
#define FURNITUREOBJECT_GET_RIGHTBOTTOM_OFFSET UNITYSDK_OFFSET(0x1E4BA40)
#define FURNITUREOBJECT_SET_RIGHTBOTTOM_OFFSET UNITYSDK_OFFSET(0x1E4BA50)
#define FURNITUREOBJECT_GET_CURRENTWIDTH_OFFSET UNITYSDK_OFFSET(0x1E4BA60)
#define FURNITUREOBJECT_GET_CURRENTHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E4BAE0)
#define FURNITUREOBJECT_ISOVERLAPPED_OFFSET UNITYSDK_OFFSET(0x1E4BB60)
#define FURNITUREOBJECT_CANOVERLAP_OFFSET UNITYSDK_OFFSET(0x1E4BCC0)
#define FURNITUREOBJECT_CANOVERLAPBYFURNITURECATEGORY_OFFSET UNITYSDK_OFFSET(0x1E4BD70)
#define FURNITUREOBJECT_CANOVERLAPBYFURNITURESUBCATEGORY_OFFSET UNITYSDK_OFFSET(0x1E4BDA0)
#define FURNITUREOBJECT_ISOVERLAPPED_OFFSET UNITYSDK_OFFSET(0x1E4BD40)
#define FURNITUREOBJECT_ISINTERRAIN_OFFSET UNITYSDK_OFFSET(0x1E4BE20)
#define FURNITUREOBJECT_MOVETO_OFFSET UNITYSDK_OFFSET(0x1E4BEB0)
#define FURNITUREOBJECT_TODB_OFFSET UNITYSDK_OFFSET(0x1E49910)
#define FURNITUREOBJECT_GET_INVALIDID_OFFSET UNITYSDK_OFFSET(0x1E4C120)
#define FURNITUREOBJECT_GET_VISUALOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x1E4C170)
#define FURNITUREOBJECT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E4C230)
#define FURNITUREOBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4C240)
#define FURNITUREOBJECT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C480)
#define FURNITUREOBJECT__SETLTRB_G__GETLEFTTOP|86_0_OFFSET UNITYSDK_OFFSET(0x1E4B0C0)
#define FURNITUREOBJECT__SETLTRB_G__GETRIGHTBOTTOM|86_1_OFFSET UNITYSDK_OFFSET(0x1E4B250)

	inline static constexpr unsigned int FurnitureObject_TypeDefinitionIndex = 1691;

	class FurnitureObject : public ::System::Numerics::DoubleUlong
	{
	public:
		::System::Int64 _CafeDBId_k__BackingField; // 0x68
		::FlatData::FurnitureLocation* _Location_k__BackingField; // 0x70
		::System::Int64 _TotalCount_k__BackingField; // 0x78
		::System::Int64 _InventoryCount_k__BackingField; // 0x80
		Il2CppObject* _Tags_k__BackingField; // 0x88
		Il2CppObject* availableCharacterStates; // 0x90
		::MX::Data::Excel::FurnitureExcel* furnitureExcel; // 0x98
		::System::Single rotationDegree; // 0xA8
		::UnityEngine::Vector2* position; // 0xAC
		::MX::GameLogic::DBModel::FurnitureDB* _DB_k__BackingField; // 0xB8
		::FlatData::FurnitureCategory* Category; // 0xC0
		::FlatData::FurnitureSubCategory* SubCategory; // 0xC4
		::UnityEngine::Vector2* _LeftTop_k__BackingField; // 0xC8
		::UnityEngine::Vector2* _RightBottom_k__BackingField; // 0xD0
		::System::Int64 _InvalidId_k__BackingField; // 0x0

		::System::Int64 get_CafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_CAFEDBID_OFFSET))(nullptr);
		}

		::System::Void set_CafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_SET_CAFEDBID_OFFSET))(arg, nullptr);
		}

		::FlatData::FurnitureLocation* get_Location()
		{
			return ((::FlatData::FurnitureLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Void set_Location(::FlatData::FurnitureLocation* arg)
		{
			((::System::Void(*)(::FlatData::FurnitureLocation*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_SET_LOCATION_OFFSET))(arg, nullptr);
		}

		SecureLong* get_StackCount()
		{
			return ((SecureLong*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_STACKCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_StackCount(SecureLong* arg)
		{
			((::System::Void(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_SET_STACKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TotalCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_TOTALCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_TotalCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_SET_TOTALCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PlacedCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_PLACEDCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_InventoryCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_INVENTORYCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_InventoryCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_SET_INVENTORYCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMaxStack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_ISMAXSTACK_OFFSET))(nullptr);
		}

		::System::Boolean get_HasLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_HASLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStackable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_ISSTACKABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxStarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_MAXSTARGRADE_OFFSET))(nullptr);
		}

		::FlatData::CurrencyTypes* get_LevelUpFeedCostCurrency()
		{
			return ((::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedCostAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_LEVELUPFEEDEXP_OFFSET))(nullptr);
		}

		::System::String* get_TypeSprite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_TYPESPRITE_OFFSET))(nullptr);
		}

		::System::String* get_TextureDir()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_TEXTUREDIR_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Boolean get_CanBeConsumed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_CANBECONSUMED_OFFSET))(nullptr);
		}

		::System::Int64 get_SetGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_SETGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_ReverseRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_REVERSEROTATION_OFFSET))(nullptr);
		}

		Il2CppObject* get_Tags()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Void set_Tags(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_SET_TAGS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanInteractFurniture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_CANINTERACTFURNITURE_OFFSET))(nullptr);
		}

		::System::Boolean get_CheckFloorDecoration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_CHECKFLOORDECORATION_OFFSET))(nullptr);
		}

		Il2CppObject* get_AvailableCharacterStates()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_AVAILABLECHARACTERSTATES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAttachDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_ISATTACHDISABLED_OFFSET))(nullptr);
		}

		::System::Boolean CanAttachStateAny(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_CANATTACHSTATEANY_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_CANLEVELUP_OFFSET))(nullptr);
		}

		::System::Boolean CanTranscendence()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_CANTRANSCENDENCE_OFFSET))(nullptr);
		}

		::System::Single GetExpRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GETEXPRATIO_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalExpBaseToCurExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GETTOTALEXPBASETOCUREXP_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalExpBaseLevelToMaxLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GETTOTALEXPBASELEVELTOMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 GetLevelUpCurrencyRequiredCost(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GETLEVELUPCURRENCYREQUIREDCOST_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::FurnitureExcel* get_FurnitureExcel()
		{
			return ((::MX::Data::Excel::FurnitureExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_FURNITUREEXCEL_OFFSET))(nullptr);
		}

		::System::Void set_FurnitureExcel(::MX::Data::Excel::FurnitureExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::FurnitureExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_SET_FURNITUREEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Single get_RotationDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_ROTATIONDEGREE_OFFSET))(nullptr);
		}

		::System::Void set_RotationDegree(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_SET_ROTATIONDEGREE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Position()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::FurnitureDB* get_DB()
		{
			return ((::MX::GameLogic::DBModel::FurnitureDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_DB_OFFSET))(nullptr);
		}

		::System::Void set_DB(::MX::GameLogic::DBModel::FurnitureDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_SET_DB_OFFSET))(arg, nullptr);
		}

		::System::Void SetLTRB()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_SETLTRB_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::FurnitureDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::GameLogic::DBModel::FurnitureDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTags()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_SETTAGS_OFFSET))(nullptr);
		}

		::System::Void SetAvailableStates()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_SETAVAILABLESTATES_OFFSET))(nullptr);
		}

		::System::Void CopyPropertyFromDB(::MX::GameLogic::DBModel::FurnitureDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_COPYPROPERTYFROMDB_OFFSET))(arg, nullptr);
		}

		::System::Void Rotate(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_ROTATE_OFFSET))(arg, nullptr);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_OtherSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_OTHERSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFloorDecoration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_ISFLOORDECORATION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWallDecoration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_ISWALLDECORATION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInterior()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_ISINTERIOR_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_CANROTATE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_LeftTop()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_LEFTTOP_OFFSET))(nullptr);
		}

		::System::Void set_LeftTop(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_SET_LEFTTOP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_RightBottom()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_RIGHTBOTTOM_OFFSET))(nullptr);
		}

		::System::Void set_RightBottom(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_SET_RIGHTBOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Single get_CurrentWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_CURRENTWIDTH_OFFSET))(nullptr);
		}

		::System::Single get_CurrentHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_CURRENTHEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean IsOverlapped(FurnitureObject* arg)
		{
			return ((::System::Boolean(*)(FurnitureObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_ISOVERLAPPED_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanOverlap(FurnitureObject* arg)
		{
			return ((::System::Boolean(*)(FurnitureObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_CANOVERLAP_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanOverlapByFurnitureCategory(FurnitureObject* arg)
		{
			return ((::System::Boolean(*)(FurnitureObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_CANOVERLAPBYFURNITURECATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanOverlapByFurnitureSubCategory(FurnitureObject* arg)
		{
			return ((::System::Boolean(*)(FurnitureObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_CANOVERLAPBYFURNITURESUBCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOverlapped(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_ISOVERLAPPED_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsInTerrain(::UnityEngine::Vector2* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_ISINTERRAIN_OFFSET))(arg, nullptr);
		}

		::System::Void MoveTo(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_MOVETO_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::FurnitureDB* ToDB()
		{
			return ((::MX::GameLogic::DBModel::FurnitureDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_TODB_OFFSET))(nullptr);
		}

		::System::Int64 get_InvalidId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_INVALIDID_OFFSET))(nullptr);
		}

		::System::String* get_VisualObjectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_VISUALOBJECTNAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* _SetLTRB_g__GetLeftTop|86_0()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT__SETLTRB_G__GETLEFTTOP|86_0_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* _SetLTRB_g__GetRightBottom|86_1()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREOBJECT__SETLTRB_G__GETRIGHTBOTTOM|86_1_OFFSET))(nullptr);
		}

	};

