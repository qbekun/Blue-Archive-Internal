#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConquestEventObjectDB; }
namespace MX::Data { class ConquestEventObjectType; }

#define MX_GAMELOGIC_DBMODEL_CONQUESTTREASUREBOXDB_CLONE_OFFSET UNITYSDK_OFFSET(0xFEF6C0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTREASUREBOXDB_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0xFEF700)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTREASUREBOXDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEF710)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ConquestTreasureBoxDB_TypeDefinitionIndex = 12546;

	class ConquestTreasureBoxDB : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ConquestEventObjectDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::ConquestEventObjectDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTREASUREBOXDB_CLONE_OFFSET))(nullptr);
		}

		::MX::Data::ConquestEventObjectType* get_ObjectType()
		{
			return ((::MX::Data::ConquestEventObjectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTREASUREBOXDB_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTREASUREBOXDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

