#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountDB; }

#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_GET_EXP_OFFSET UNITYSDK_OFFSET(0xFEC0A0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_SET_EXP_OFFSET UNITYSDK_OFFSET(0xFEC0B0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0xFEC0C0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0xFEC0D0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_GET_COLLECTEDCHARACTERSCOUNT_OFFSET UNITYSDK_OFFSET(0xFEC0E0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_SET_COLLECTEDCHARACTERSCOUNT_OFFSET UNITYSDK_OFFSET(0xFEC0F0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_GET_ARENASEASONBESTRANKING_OFFSET UNITYSDK_OFFSET(0xFEC100)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_SET_ARENASEASONBESTRANKING_OFFSET UNITYSDK_OFFSET(0xFEC110)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_GET_ARENASEASONCURRENTRANKING_OFFSET UNITYSDK_OFFSET(0xFEC120)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_SET_ARENASEASONCURRENTRANKING_OFFSET UNITYSDK_OFFSET(0xFEC130)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEC140)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEC150)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ClanMemberDescriptionDB_TypeDefinitionIndex = 12525;

	class ClanMemberDescriptionDB : public Il2CppObject
	{
	public:
		::System::Int64 _Exp_k__BackingField; // 0x10
		::System::String* _Comment_k__BackingField; // 0x18
		::System::Int32 _CollectedCharactersCount_k__BackingField; // 0x20
		::System::Int64 _ArenaSeasonBestRanking_k__BackingField; // 0x28
		::System::Int64 _ArenaSeasonCurrentRanking_k__BackingField; // 0x30

		::System::Int64 get_Exp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_GET_EXP_OFFSET))(nullptr);
		}

		::System::Void set_Exp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_SET_EXP_OFFSET))(arg, nullptr);
		}

		::System::String* get_Comment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_GET_COMMENT_OFFSET))(nullptr);
		}

		::System::Void set_Comment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_SET_COMMENT_OFFSET))(str, nullptr);
		}

		::System::Int32 get_CollectedCharactersCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_GET_COLLECTEDCHARACTERSCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CollectedCharactersCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_SET_COLLECTEDCHARACTERSCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ArenaSeasonBestRanking()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_GET_ARENASEASONBESTRANKING_OFFSET))(nullptr);
		}

		::System::Void set_ArenaSeasonBestRanking(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_SET_ARENASEASONBESTRANKING_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ArenaSeasonCurrentRanking()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_GET_ARENASEASONCURRENTRANKING_OFFSET))(nullptr);
		}

		::System::Void set_ArenaSeasonCurrentRanking(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_SET_ARENASEASONCURRENTRANKING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::AccountDB* arg, Il2CppObject* arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountDB*, Il2CppObject*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDESCRIPTIONDB_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

