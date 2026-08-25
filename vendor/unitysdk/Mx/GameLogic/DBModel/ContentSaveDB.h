#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_BIECHELON4_OFFSET UNITYSDK_OFFSET(0xFF3AE0)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_BIECHELON3_OFFSET UNITYSDK_OFFSET(0xFF3AF0)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xFF3B00)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE8940)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_BIECHELON_OFFSET UNITYSDK_OFFSET(0xFF3B10)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_BIECHELON3_OFFSET UNITYSDK_OFFSET(0xFF3B20)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xFF3B30)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_ACCOUNTLEVELWHENCREATEDB_OFFSET UNITYSDK_OFFSET(0xFF3B40)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_LASTENTERSTAGEECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0xFF3B50)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_CREATETIME_OFFSET UNITYSDK_OFFSET(0xFF3B60)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_ENEMYKILLCOUNTBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFF3B70)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_STAGEENTRANCEFEE_OFFSET UNITYSDK_OFFSET(0xFF3B80)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_BIECHELON1_OFFSET UNITYSDK_OFFSET(0xFF3B90)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_ACCOUNTLEVELWHENCREATEDB_OFFSET UNITYSDK_OFFSET(0xFF3BA0)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_BIECHELON_OFFSET UNITYSDK_OFFSET(0xFF3BB0)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_TACTICCLEARTIMEMSCSUM_OFFSET UNITYSDK_OFFSET(0xFF3BC0)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_TACTICCLEARTIMEMSCSUM_OFFSET UNITYSDK_OFFSET(0xFF3BD0)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_CREATETIME_OFFSET UNITYSDK_OFFSET(0xFF3BE0)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_BIECHELON2_OFFSET UNITYSDK_OFFSET(0xFF3BF0)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_BIECHELON2_OFFSET UNITYSDK_OFFSET(0xFF3C00)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_BIECHELON4_OFFSET UNITYSDK_OFFSET(0xFF3C10)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_STAGEENTRANCEFEE_OFFSET UNITYSDK_OFFSET(0xFF3C20)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFF3C30)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFF3C40)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_BIECHELON1_OFFSET UNITYSDK_OFFSET(0xFF3C50)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_LASTENTERSTAGEECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0xFF3C60)
#define MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_ENEMYKILLCOUNTBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFF3C70)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ContentSaveDB_TypeDefinitionIndex = 12562;

	class ContentSaveDB : public Il2CppObject
	{
	public:
		::System::Int64 _AccountServerId_k__BackingField; // 0x10
		::System::DateTime* _CreateTime_k__BackingField; // 0x18
		::System::Int64 _StageUniqueId_k__BackingField; // 0x20
		::System::Int64 _LastEnterStageEchelonNumber_k__BackingField; // 0x28
		Il2CppObject* _StageEntranceFee_k__BackingField; // 0x30
		Il2CppObject* _EnemyKillCountByUniqueId_k__BackingField; // 0x38
		::System::Int64 _TacticClearTimeMscSum_k__BackingField; // 0x40
		::System::Int64 _AccountLevelWhenCreateDB_k__BackingField; // 0x48
		::System::String* _BIEchelon_k__BackingField; // 0x50
		::System::String* _BIEchelon1_k__BackingField; // 0x58
		::System::String* _BIEchelon2_k__BackingField; // 0x60
		::System::String* _BIEchelon3_k__BackingField; // 0x68
		::System::String* _BIEchelon4_k__BackingField; // 0x70

		::System::String* get_BIEchelon4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_BIECHELON4_OFFSET))(nullptr);
		}

		::System::Void set_BIEchelon3(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_BIECHELON3_OFFSET))(str, nullptr);
		}

		::System::Int64 get_AccountServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_ACCOUNTSERVERID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_BIEchelon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_BIECHELON_OFFSET))(nullptr);
		}

		::System::String* get_BIEchelon3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_BIECHELON3_OFFSET))(nullptr);
		}

		::System::Void set_AccountServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_ACCOUNTSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountLevelWhenCreateDB()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_ACCOUNTLEVELWHENCREATEDB_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_LastEnterStageEchelonNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_LASTENTERSTAGEECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_CreateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_CREATETIME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EnemyKillCountByUniqueId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_ENEMYKILLCOUNTBYUNIQUEID_OFFSET))(nullptr);
		}

		Il2CppObject* get_StageEntranceFee()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_STAGEENTRANCEFEE_OFFSET))(nullptr);
		}

		::System::Void set_BIEchelon1(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_BIECHELON1_OFFSET))(str, nullptr);
		}

		::System::Void set_AccountLevelWhenCreateDB(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_ACCOUNTLEVELWHENCREATEDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_BIEchelon(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_BIECHELON_OFFSET))(str, nullptr);
		}

		::System::Int64 get_TacticClearTimeMscSum()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_TACTICCLEARTIMEMSCSUM_OFFSET))(nullptr);
		}

		::System::Void set_TacticClearTimeMscSum(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_TACTICCLEARTIMEMSCSUM_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_CreateTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_CREATETIME_OFFSET))(nullptr);
		}

		::System::Void set_BIEchelon2(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_BIECHELON2_OFFSET))(str, nullptr);
		}

		::System::String* get_BIEchelon2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_BIECHELON2_OFFSET))(nullptr);
		}

		::System::Void set_BIEchelon4(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_BIECHELON4_OFFSET))(str, nullptr);
		}

		::System::Void set_StageEntranceFee(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_STAGEENTRANCEFEE_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_BIEchelon1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_GET_BIECHELON1_OFFSET))(nullptr);
		}

		::System::Void set_LastEnterStageEchelonNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_LASTENTERSTAGEECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void set_EnemyKillCountByUniqueId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONTENTSAVEDB_SET_ENEMYKILLCOUNTBYUNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

