#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConquestInfoDB; }
namespace MX::GameLogic::DBModel { class ConquestEventObjectDB; }
namespace MX::Data { class ConquestEventObjectType; }

#define MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_GETCONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0xFEE710)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_GET_EROSIONID_OFFSET UNITYSDK_OFFSET(0xFEE720)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_SET_CONDITIONSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xFEE730)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_COPYFROM_OFFSET UNITYSDK_OFFSET(0xFEE740)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEE7C0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_SET_CREATEDATE_OFFSET UNITYSDK_OFFSET(0xFEE7E0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_GET_CONDITIONSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xFEE7F0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_GET_CREATEDATE_OFFSET UNITYSDK_OFFSET(0xFEE800)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_CLONE_OFFSET UNITYSDK_OFFSET(0xFEE810)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0xFEE850)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_CANINTERACT_OFFSET UNITYSDK_OFFSET(0xFEE860)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ConquestErosionDB_TypeDefinitionIndex = 12536;

	class ConquestErosionDB : public Il2CppObject
	{
	public:
		::System::Int64 _ConditionSnapshot_k__BackingField; // 0x40
		::System::DateTime* _CreateDate_k__BackingField; // 0x48

		::System::Int64 GetConditionValue(::MX::GameLogic::DBModel::ConquestInfoDB* arg)
		{
			return ((::System::Int64(*)(::MX::GameLogic::DBModel::ConquestInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_GETCONDITIONVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ErosionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_GET_EROSIONID_OFFSET))(nullptr);
		}

		::System::Void set_ConditionSnapshot(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_SET_CONDITIONSNAPSHOT_OFFSET))(arg, nullptr);
		}

		::System::Void CopyFrom(::MX::GameLogic::DBModel::ConquestEventObjectDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestEventObjectDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CreateDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_SET_CREATEDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ConditionSnapshot()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_GET_CONDITIONSNAPSHOT_OFFSET))(nullptr);
		}

		::System::DateTime* get_CreateDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_GET_CREATEDATE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConquestEventObjectDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::ConquestEventObjectDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_CLONE_OFFSET))(nullptr);
		}

		::MX::Data::ConquestEventObjectType* get_ObjectType()
		{
			return ((::MX::Data::ConquestEventObjectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean CanInteract(::MX::GameLogic::DBModel::ConquestInfoDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ConquestInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEROSIONDB_CANINTERACT_OFFSET))(arg, nullptr);
		}

	};
}

