#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanAssistRentHistoryDB; }

#define MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_SET_ASSISTCHARACTERACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFEB760)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_SET_ASSISTCHARACTERID_OFFSET UNITYSDK_OFFSET(0xFEB770)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_CLONEWITHENCODEDCHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xFEB780)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_SET_ASSISTCHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xFEB810)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_GET_RENTDATE_OFFSET UNITYSDK_OFFSET(0xFEB820)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_GET_ASSISTCHARACTERID_OFFSET UNITYSDK_OFFSET(0xFEB830)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_GET_ASSISTCHARACTERACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFEB840)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_SET_RENTDATE_OFFSET UNITYSDK_OFFSET(0xFEB850)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEB800)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_GET_ASSISTCHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xFEB860)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_ISRENTAVAILABLE_OFFSET UNITYSDK_OFFSET(0xFEB870)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ClanAssistRentHistoryDB_TypeDefinitionIndex = 12519;

	class ClanAssistRentHistoryDB : public Il2CppObject
	{
	public:
		::System::Int64 _AssistCharacterAccountId_k__BackingField; // 0x10
		::System::Int64 _AssistCharacterDBId_k__BackingField; // 0x18
		::System::DateTime* _RentDate_k__BackingField; // 0x20
		::System::Int64 _AssistCharacterId_k__BackingField; // 0x28

		::System::Void set_AssistCharacterAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_SET_ASSISTCHARACTERACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_SET_ASSISTCHARACTERID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistRentHistoryDB* CloneWithEncodedCharacterDBId(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::ClanAssistRentHistoryDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_CLONEWITHENCODEDCHARACTERDBID_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistCharacterDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_SET_ASSISTCHARACTERDBID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_RentDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_GET_RENTDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_AssistCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_GET_ASSISTCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_AssistCharacterAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_GET_ASSISTCHARACTERACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_RentDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_SET_RENTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_AssistCharacterDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_GET_ASSISTCHARACTERDBID_OFFSET))(nullptr);
		}

		::System::Boolean IsRentAvailable(::System::DateTime* arg)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTRENTHISTORYDB_ISRENTAVAILABLE_OFFSET))(arg, nullptr);
		}

	};
}

