#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class OptionDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_OPTIONSAVEREQUEST_GET_OPTIONDB_OFFSET UNITYSDK_OFFSET(0xF4B1E0)
#define MX_NETWORKPROTOCOL_OPTIONSAVEREQUEST_SET_OPTIONDB_OFFSET UNITYSDK_OFFSET(0xF4B1F0)
#define MX_NETWORKPROTOCOL_OPTIONSAVEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B200)
#define MX_NETWORKPROTOCOL_OPTIONSAVEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B210)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int OptionSaveRequest_TypeDefinitionIndex = 11989;

	class OptionSaveRequest : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::OptionDB* _OptionDB_k__BackingField; // 0x40

		::MX::GameLogic::DBModel::OptionDB* get_OptionDB()
		{
			return ((::MX::GameLogic::DBModel::OptionDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPTIONSAVEREQUEST_GET_OPTIONDB_OFFSET))(nullptr);
		}

		::System::Void set_OptionDB(::MX::GameLogic::DBModel::OptionDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::OptionDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPTIONSAVEREQUEST_SET_OPTIONDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPTIONSAVEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPTIONSAVEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

