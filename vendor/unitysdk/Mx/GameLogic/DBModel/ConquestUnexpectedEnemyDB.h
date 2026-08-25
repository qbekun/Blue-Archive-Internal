#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConquestEventObjectDB; }
namespace MX::Data { class ConquestEventObjectType; }

#define MX_GAMELOGIC_DBMODEL_CONQUESTUNEXPECTEDENEMYDB_CLONE_OFFSET UNITYSDK_OFFSET(0xFEF720)
#define MX_GAMELOGIC_DBMODEL_CONQUESTUNEXPECTEDENEMYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEF760)
#define MX_GAMELOGIC_DBMODEL_CONQUESTUNEXPECTEDENEMYDB_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0xFEF770)
#define MX_GAMELOGIC_DBMODEL_CONQUESTUNEXPECTEDENEMYDB_GET_UNITID_OFFSET UNITYSDK_OFFSET(0xFEF780)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ConquestUnexpectedEnemyDB_TypeDefinitionIndex = 12547;

	class ConquestUnexpectedEnemyDB : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ConquestEventObjectDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::ConquestEventObjectDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTUNEXPECTEDENEMYDB_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTUNEXPECTEDENEMYDB_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::ConquestEventObjectType* get_ObjectType()
		{
			return ((::MX::Data::ConquestEventObjectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTUNEXPECTEDENEMYDB_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UnitId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTUNEXPECTEDENEMYDB_GET_UNITID_OFFSET))(nullptr);
		}

	};
}

