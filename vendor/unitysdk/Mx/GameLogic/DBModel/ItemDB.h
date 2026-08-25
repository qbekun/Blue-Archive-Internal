#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ItemDB; }
namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_DBMODEL_ITEMDB_GET_CANCONSUME_OFFSET UNITYSDK_OFFSET(0x1001550)
#define MX_GAMELOGIC_DBMODEL_ITEMDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1001560)
#define MX_GAMELOGIC_DBMODEL_ITEMDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x10015D0)
#define MX_GAMELOGIC_DBMODEL_ITEMDB_EQUIVALENT_OFFSET UNITYSDK_OFFSET(0x10015E0)
#define MX_GAMELOGIC_DBMODEL_ITEMDB_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1001630)
#define MX_GAMELOGIC_DBMODEL_ITEMDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1001720)
#define MX_GAMELOGIC_DBMODEL_ITEMDB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1001920)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ItemDB_TypeDefinitionIndex = 12639;

	class ItemDB : public Il2CppObject
	{
	public:
		::System::Boolean get_CanConsume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ITEMDB_GET_CANCONSUME_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ItemDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::ItemDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ITEMDB_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ITEMDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Equivalent(::MX::GameLogic::DBModel::ItemDB* arg, ::MX::GameLogic::DBModel::ItemDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ItemDB*, ::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ITEMDB_EQUIVALENT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ITEMDB_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ITEMDB_TOSTRING_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ITEMDB_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

