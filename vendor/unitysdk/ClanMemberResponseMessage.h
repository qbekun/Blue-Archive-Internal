#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanDB; }
namespace MX::GameLogic::DBModel { class ClanMemberDB; }
namespace MX::GameLogic::DBModel { class DetailedAccountInfoDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CLANMEMBERRESPONSEMESSAGE_SET_CLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0x1F28EA0)
#define CLANMEMBERRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F28B50)
#define CLANMEMBERRESPONSEMESSAGE_SET_CLANDB_OFFSET UNITYSDK_OFFSET(0x1F28EB0)
#define CLANMEMBERRESPONSEMESSAGE_GET_CLANDB_OFFSET UNITYSDK_OFFSET(0x1F28EC0)
#define CLANMEMBERRESPONSEMESSAGE_GET_DETAILEDACCOUNTINFODB_OFFSET UNITYSDK_OFFSET(0x1F28ED0)
#define CLANMEMBERRESPONSEMESSAGE_GET_CLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0x1F28EE0)
#define CLANMEMBERRESPONSEMESSAGE_SET_DETAILEDACCOUNTINFODB_OFFSET UNITYSDK_OFFSET(0x1F28EF0)

	inline static constexpr unsigned int ClanMemberResponseMessage_TypeDefinitionIndex = 2189;

	class ClanMemberResponseMessage : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClanDB* _ClanDB_k__BackingField; // 0x20
		::MX::GameLogic::DBModel::ClanMemberDB* _ClanMemberDB_k__BackingField; // 0x28
		::MX::GameLogic::DBModel::DetailedAccountInfoDB* _DetailedAccountInfoDB_k__BackingField; // 0x30

		::System::Void set_ClanMemberDB(::MX::GameLogic::DBModel::ClanMemberDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERRESPONSEMESSAGE_SET_CLANMEMBERDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::GameLogic::DBModel::ClanDB* arg2, ::MX::GameLogic::DBModel::ClanMemberDB* arg3, ::MX::GameLogic::DBModel::DetailedAccountInfoDB* arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::GameLogic::DBModel::ClanDB*, ::MX::GameLogic::DBModel::ClanMemberDB*, ::MX::GameLogic::DBModel::DetailedAccountInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_ClanDB(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERRESPONSEMESSAGE_SET_CLANDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanDB* get_ClanDB()
		{
			return ((::MX::GameLogic::DBModel::ClanDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERRESPONSEMESSAGE_GET_CLANDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::DetailedAccountInfoDB* get_DetailedAccountInfoDB()
		{
			return ((::MX::GameLogic::DBModel::DetailedAccountInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERRESPONSEMESSAGE_GET_DETAILEDACCOUNTINFODB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanMemberDB* get_ClanMemberDB()
		{
			return ((::MX::GameLogic::DBModel::ClanMemberDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERRESPONSEMESSAGE_GET_CLANMEMBERDB_OFFSET))(nullptr);
		}

		::System::Void set_DetailedAccountInfoDB(::MX::GameLogic::DBModel::DetailedAccountInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::DetailedAccountInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERRESPONSEMESSAGE_SET_DETAILEDACCOUNTINFODB_OFFSET))(arg, nullptr);
		}

	};

