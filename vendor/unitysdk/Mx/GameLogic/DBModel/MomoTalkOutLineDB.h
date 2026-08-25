#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_GET_LASTUPDATEDATE_OFFSET UNITYSDK_OFFSET(0x1004900)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_SET_LASTUPDATEDATE_OFFSET UNITYSDK_OFFSET(0x1004910)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1004920)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_SET_CHARACTERDBID_OFFSET UNITYSDK_OFFSET(0x1004930)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_SET_CHOSENMESSAGEID_OFFSET UNITYSDK_OFFSET(0x1004940)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_GET_CHARACTERDBID_OFFSET UNITYSDK_OFFSET(0x1004950)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1004960)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_GET_CHOSENMESSAGEID_OFFSET UNITYSDK_OFFSET(0x1004970)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_GET_LATESTMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x1004980)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_SET_LATESTMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x1004990)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x10049A0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MomoTalkOutLineDB_TypeDefinitionIndex = 12665;

	class MomoTalkOutLineDB : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterDBId_k__BackingField; // 0x10
		::System::Int64 _CharacterId_k__BackingField; // 0x18
		::System::Int64 _LatestMessageGroupId_k__BackingField; // 0x20
		Il2CppObject* _ChosenMessageId_k__BackingField; // 0x28
		::System::DateTime* _LastUpdateDate_k__BackingField; // 0x38

		::System::DateTime* get_LastUpdateDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_GET_LASTUPDATEDATE_OFFSET))(nullptr);
		}

		::System::Void set_LastUpdateDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_SET_LASTUPDATEDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_SET_CHARACTERDBID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ChosenMessageId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_SET_CHOSENMESSAGEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_GET_CHARACTERDBID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ChosenMessageId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_GET_CHOSENMESSAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_LatestMessageGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_GET_LATESTMESSAGEGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_LatestMessageGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_SET_LATESTMESSAGEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKOUTLINEDB_GET_CHARACTERID_OFFSET))(nullptr);
		}

	};
}

