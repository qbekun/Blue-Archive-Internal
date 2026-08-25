#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FurnitureLocation; }
namespace MX::GameLogic::DBModel { class FurnitureDB; }
namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_POSITIONX_OFFSET UNITYSDK_OFFSET(0xFFFC30)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_SET_POSITIONY_OFFSET UNITYSDK_OFFSET(0xFFFC40)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_ITEMDEPLOYSEQUENCE_OFFSET UNITYSDK_OFFSET(0xFFFC50)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xFFFC60)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_CANCONSUME_OFFSET UNITYSDK_OFFSET(0xFFFC70)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xFFFC80)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFFFC90)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_SET_POSITIONX_OFFSET UNITYSDK_OFFSET(0x10000A0)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x10000B0)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_SET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0x10001A0)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_CLONE_OFFSET UNITYSDK_OFFSET(0x10001B0)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1000260)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_EQUIVALENT_OFFSET UNITYSDK_OFFSET(0x1000270)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1000250)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_POSITIONY_OFFSET UNITYSDK_OFFSET(0x10002F0)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_SET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1000300)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1000310)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_SET_ITEMDEPLOYSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1000320)
#define MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1000330)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int FurnitureDB_TypeDefinitionIndex = 12631;

	class FurnitureDB : public Il2CppObject
	{
	public:
		::FlatData::FurnitureLocation* _Location_k__BackingField; // 0x28
		::System::Int64 _CafeDBId_k__BackingField; // 0x30
		::System::Single _PositionX_k__BackingField; // 0x38
		::System::Single _PositionY_k__BackingField; // 0x3C
		::System::Single _Rotation_k__BackingField; // 0x40
		::System::Int64 _ItemDeploySequence_k__BackingField; // 0x48

		::System::Single get_PositionX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_POSITIONX_OFFSET))(nullptr);
		}

		::System::Void set_PositionY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_SET_POSITIONY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ItemDeploySequence()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_ITEMDEPLOYSEQUENCE_OFFSET))(nullptr);
		}

		::System::Single get_Rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Boolean get_CanConsume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_CANCONSUME_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_CAFEDBID_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void set_PositionX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_SET_POSITIONX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void set_CafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_SET_CAFEDBID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::FurnitureDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::FurnitureDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_CLONE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Boolean Equivalent(::MX::GameLogic::DBModel::FurnitureDB* arg, ::MX::GameLogic::DBModel::FurnitureDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::FurnitureDB*, ::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_EQUIVALENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_PositionY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_POSITIONY_OFFSET))(nullptr);
		}

		::System::Void set_Location(::FlatData::FurnitureLocation* arg)
		{
			((::System::Void(*)(::FlatData::FurnitureLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_SET_LOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_Rotation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_ItemDeploySequence(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_SET_ITEMDEPLOYSEQUENCE_OFFSET))(arg, nullptr);
		}

		::FlatData::FurnitureLocation* get_Location()
		{
			return ((::FlatData::FurnitureLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_FURNITUREDB_GET_LOCATION_OFFSET))(nullptr);
		}

	};
}

