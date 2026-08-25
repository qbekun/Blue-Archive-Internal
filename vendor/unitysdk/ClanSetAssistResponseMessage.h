#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanAssistSlotDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ClanAssistRewardInfo; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CLANSETASSISTRESPONSEMESSAGE_SET_CLANASSISTREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1F2AAC0)
#define CLANSETASSISTRESPONSEMESSAGE_SET_CLANASSISTSLOTDB_OFFSET UNITYSDK_OFFSET(0x1F2AAD0)
#define CLANSETASSISTRESPONSEMESSAGE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0x1F2AAE0)
#define CLANSETASSISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F2A6C0)
#define CLANSETASSISTRESPONSEMESSAGE_GET_CLANASSISTREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1F2AAF0)
#define CLANSETASSISTRESPONSEMESSAGE_GET_CLANASSISTSLOTDB_OFFSET UNITYSDK_OFFSET(0x1F2AB00)
#define CLANSETASSISTRESPONSEMESSAGE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0x1F2AB10)

	inline static constexpr unsigned int ClanSetAssistResponseMessage_TypeDefinitionIndex = 2202;

	class ClanSetAssistResponseMessage : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClanAssistSlotDB* _ClanAssistSlotDB_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x28
		::MX::GameLogic::DBModel::ClanAssistRewardInfo* _ClanAssistRewardInfo_k__BackingField; // 0x30

		::System::Void set_ClanAssistRewardInfo(::MX::GameLogic::DBModel::ClanAssistRewardInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTRESPONSEMESSAGE_SET_CLANASSISTREWARDINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClanAssistSlotDB(::MX::GameLogic::DBModel::ClanAssistSlotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistSlotDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTRESPONSEMESSAGE_SET_CLANASSISTSLOTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTRESPONSEMESSAGE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::GameLogic::DBModel::ClanAssistSlotDB* arg2, ::MX::GameLogic::Parcel::ParcelResultDB* arg3, ::MX::GameLogic::DBModel::ClanAssistRewardInfo* arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::GameLogic::DBModel::ClanAssistSlotDB*, ::MX::GameLogic::Parcel::ParcelResultDB*, ::MX::GameLogic::DBModel::ClanAssistRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistRewardInfo* get_ClanAssistRewardInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistRewardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTRESPONSEMESSAGE_GET_CLANASSISTREWARDINFO_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistSlotDB* get_ClanAssistSlotDB()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistSlotDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTRESPONSEMESSAGE_GET_CLANASSISTSLOTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTRESPONSEMESSAGE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};

