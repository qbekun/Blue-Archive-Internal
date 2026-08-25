#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class OpenConditionDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_OPENCONDITIONSETREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B0A0)
#define MX_NETWORKPROTOCOL_OPENCONDITIONSETREQUEST_GET_CONDITIONDB_OFFSET UNITYSDK_OFFSET(0xF4B0B0)
#define MX_NETWORKPROTOCOL_OPENCONDITIONSETREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B0C0)
#define MX_NETWORKPROTOCOL_OPENCONDITIONSETREQUEST_SET_CONDITIONDB_OFFSET UNITYSDK_OFFSET(0xF4B0D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int OpenConditionSetRequest_TypeDefinitionIndex = 11985;

	class OpenConditionSetRequest : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::OpenConditionDB* _ConditionDB_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPENCONDITIONSETREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::OpenConditionDB* get_ConditionDB()
		{
			return ((::MX::GameLogic::DBModel::OpenConditionDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPENCONDITIONSETREQUEST_GET_CONDITIONDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPENCONDITIONSETREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ConditionDB(::MX::GameLogic::DBModel::OpenConditionDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::OpenConditionDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPENCONDITIONSETREQUEST_SET_CONDITIONDB_OFFSET))(arg, nullptr);
		}

	};
}

