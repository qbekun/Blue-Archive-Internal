#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1000730)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x10009F0)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1000A00)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1000A10)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_SET_LOGINDATE_OFFSET UNITYSDK_OFFSET(0x1000A20)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_GET_LOGINCOUNT_OFFSET UNITYSDK_OFFSET(0x1000A30)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_GET_LOGINDATE_OFFSET UNITYSDK_OFFSET(0x1000A40)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_SET_COLLECTIONITEMRECEIVEDATE_OFFSET UNITYSDK_OFFSET(0x1000A50)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1000A60)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_GET_ISFINALMISSIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1000A70)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_SET_ISFINALMISSIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1000A80)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1000A90)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_SET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1000AA0)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1000AB0)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1000AC0)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_GET_COLLECTIONITEMRECEIVEDATE_OFFSET UNITYSDK_OFFSET(0x1001070)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1001080)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_SET_LOGINCOUNT_OFFSET UNITYSDK_OFFSET(0x1001240)
#define MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1001060)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int GuideMissionSeasonDB_TypeDefinitionIndex = 12635;

	class GuideMissionSeasonDB : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::Int64 _LoginCount_k__BackingField; // 0x18
		::System::DateTime* _StartDate_k__BackingField; // 0x20
		::System::DateTime* _LoginDate_k__BackingField; // 0x28
		::System::Boolean _IsComplete_k__BackingField; // 0x30
		::System::Boolean _IsFinalMissionComplete_k__BackingField; // 0x31
		Il2CppObject* _CollectionItemReceiveDate_k__BackingField; // 0x38

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_.CCTOR_OFFSET))(nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_GET_STARTDATE_OFFSET))(nullptr);
		}

		::System::Void set_LoginDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_SET_LOGINDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LoginCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_GET_LOGINCOUNT_OFFSET))(nullptr);
		}

		::System::DateTime* get_LoginDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_GET_LOGINDATE_OFFSET))(nullptr);
		}

		::System::Void set_CollectionItemReceiveDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_SET_COLLECTIONITEMRECEIVEDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFinalMissionComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_GET_ISFINALMISSIONCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void set_IsFinalMissionComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_SET_ISFINALMISSIONCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_SET_ISCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_GET_ISCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameLogic::DBModel::GuideMissionSeasonDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameLogic::DBModel::GuideMissionSeasonDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_CollectionItemReceiveDate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_GET_COLLECTIONITEMRECEIVEDATE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameLogic::DBModel::GuideMissionSeasonDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameLogic::DBModel::GuideMissionSeasonDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_LoginCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_SET_LOGINCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GUIDEMISSIONSEASONDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

