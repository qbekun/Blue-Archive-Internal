#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConsumeRequestDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHREQUEST_SET_CONSUMEREQUESTDB_OFFSET UNITYSDK_OFFSET(0xF15AC0)
#define MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHREQUEST_GET_CONSUMEREQUESTDB_OFFSET UNITYSDK_OFFSET(0xF15AD0)
#define MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15AE0)
#define MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHREQUEST_GET_TARGETCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xF15AF0)
#define MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHREQUEST_SET_TARGETCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xF15B00)
#define MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15B10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterExpGrowthRequest_TypeDefinitionIndex = 11464;

	class CharacterExpGrowthRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TargetCharacterServerId_k__BackingField; // 0x40
		::MX::GameLogic::DBModel::ConsumeRequestDB* _ConsumeRequestDB_k__BackingField; // 0x48

		::System::Void set_ConsumeRequestDB(::MX::GameLogic::DBModel::ConsumeRequestDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHREQUEST_SET_CONSUMEREQUESTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* get_ConsumeRequestDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHREQUEST_GET_CONSUMEREQUESTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetCharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHREQUEST_GET_TARGETCHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_TargetCharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHREQUEST_SET_TARGETCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

