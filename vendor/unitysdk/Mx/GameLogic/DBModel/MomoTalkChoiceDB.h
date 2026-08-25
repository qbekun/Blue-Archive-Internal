#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_SET_MESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x10049B0)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_SET_CHARACTERDBID_OFFSET UNITYSDK_OFFSET(0x10049C0)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_GET_CHARACTERDBID_OFFSET UNITYSDK_OFFSET(0x10049D0)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_GET_CHOSENMESSAGEID_OFFSET UNITYSDK_OFFSET(0x10049E0)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x10049F0)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_SET_CHOSENDATE_OFFSET UNITYSDK_OFFSET(0x1004A00)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_GET_MESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x1004A10)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_GET_CHOSENDATE_OFFSET UNITYSDK_OFFSET(0x1004A20)
#define MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_SET_CHOSENMESSAGEID_OFFSET UNITYSDK_OFFSET(0x1004A30)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MomoTalkChoiceDB_TypeDefinitionIndex = 12666;

	class MomoTalkChoiceDB : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterDBId_k__BackingField; // 0x10
		::System::Int64 _MessageGroupId_k__BackingField; // 0x18
		::System::Int64 _ChosenMessageId_k__BackingField; // 0x20
		::System::DateTime* _ChosenDate_k__BackingField; // 0x28

		::System::Void set_MessageGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_SET_MESSAGEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_SET_CHARACTERDBID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_GET_CHARACTERDBID_OFFSET))(nullptr);
		}

		::System::Int64 get_ChosenMessageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_GET_CHOSENMESSAGEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ChosenDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_SET_CHOSENDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MessageGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_GET_MESSAGEGROUPID_OFFSET))(nullptr);
		}

		::System::DateTime* get_ChosenDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_GET_CHOSENDATE_OFFSET))(nullptr);
		}

		::System::Void set_ChosenMessageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MOMOTALKCHOICEDB_SET_CHOSENMESSAGEID_OFFSET))(arg, nullptr);
		}

	};
}

