#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ClanJoinOption; }

#define MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANCHANNELNAME_OFFSET UNITYSDK_OFFSET(0xFEBD80)
#define MX_GAMELOGIC_DBMODEL_CLANDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEBD90)
#define MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFEBDA0)
#define MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANJOINOPTION_OFFSET UNITYSDK_OFFSET(0xFEBDB0)
#define MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANNOTICE_OFFSET UNITYSDK_OFFSET(0xFEBDC0)
#define MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANNAME_OFFSET UNITYSDK_OFFSET(0xFEBDD0)
#define MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANNOTICE_OFFSET UNITYSDK_OFFSET(0xFEBDE0)
#define MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANPRESIDENTREPRESENTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEBDF0)
#define MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANCHANNELNAME_OFFSET UNITYSDK_OFFSET(0xFEBE00)
#define MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANDBID_OFFSET UNITYSDK_OFFSET(0xFEBE10)
#define MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANNAME_OFFSET UNITYSDK_OFFSET(0xFEBE20)
#define MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANPRESIDENTREPRESENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0xFEBE30)
#define MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFEBE40)
#define MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANPRESIDENTNICKNAME_OFFSET UNITYSDK_OFFSET(0xFEBE50)
#define MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANPRESIDENTREPRESENTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEBE60)
#define MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANPRESIDENTNICKNAME_OFFSET UNITYSDK_OFFSET(0xFEBE70)
#define MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANPRESIDENTREPRESENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0xFEBE80)
#define MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANJOINOPTION_OFFSET UNITYSDK_OFFSET(0xFEBE90)
#define MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANDBID_OFFSET UNITYSDK_OFFSET(0xFEBEA0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ClanDB_TypeDefinitionIndex = 12523;

	class ClanDB : public Il2CppObject
	{
	public:
		::System::Int64 _ClanDBId_k__BackingField; // 0x10
		::System::String* _ClanName_k__BackingField; // 0x18
		::System::String* _ClanChannelName_k__BackingField; // 0x20
		::System::String* _ClanPresidentNickName_k__BackingField; // 0x28
		::System::Int64 _ClanPresidentRepresentCharacterUniqueId_k__BackingField; // 0x30
		::System::Int64 _ClanPresidentRepresentCharacterCostumeId_k__BackingField; // 0x38
		::System::String* _ClanNotice_k__BackingField; // 0x40
		::System::Int64 _ClanMemberCount_k__BackingField; // 0x48
		::FlatData::ClanJoinOption* _ClanJoinOption_k__BackingField; // 0x50

		::System::Void set_ClanChannelName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANCHANNELNAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ClanMemberCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANMEMBERCOUNT_OFFSET))(nullptr);
		}

		::FlatData::ClanJoinOption* get_ClanJoinOption()
		{
			return ((::FlatData::ClanJoinOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANJOINOPTION_OFFSET))(nullptr);
		}

		::System::String* get_ClanNotice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANNOTICE_OFFSET))(nullptr);
		}

		::System::String* get_ClanName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANNAME_OFFSET))(nullptr);
		}

		::System::Void set_ClanNotice(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANNOTICE_OFFSET))(str, nullptr);
		}

		::System::Int64 get_ClanPresidentRepresentCharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANPRESIDENTREPRESENTCHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_ClanChannelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANCHANNELNAME_OFFSET))(nullptr);
		}

		::System::Void set_ClanDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANDBID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClanName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANNAME_OFFSET))(str, nullptr);
		}

		::System::Int64 get_ClanPresidentRepresentCharacterCostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANPRESIDENTREPRESENTCHARACTERCOSTUMEID_OFFSET))(nullptr);
		}

		::System::Void set_ClanMemberCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANMEMBERCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClanPresidentNickName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANPRESIDENTNICKNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_ClanPresidentRepresentCharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANPRESIDENTREPRESENTCHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::String* get_ClanPresidentNickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANPRESIDENTNICKNAME_OFFSET))(nullptr);
		}

		::System::Void set_ClanPresidentRepresentCharacterCostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANPRESIDENTREPRESENTCHARACTERCOSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClanJoinOption(::FlatData::ClanJoinOption* arg)
		{
			((::System::Void(*)(::FlatData::ClanJoinOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_SET_CLANJOINOPTION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ClanDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANDB_GET_CLANDBID_OFFSET))(nullptr);
		}

	};
}

