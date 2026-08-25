#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLEREQUEST_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xF4B2E0)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B2F0)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B300)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLEREQUEST_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF4B310)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLEREQUEST_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xF4B320)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLEREQUEST_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF4B330)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int PermanentRaidEnterBattleRequest_TypeDefinitionIndex = 11993;

	class PermanentRaidEnterBattleRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageId_k__BackingField; // 0x40
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x48

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLEREQUEST_GET_STAGEID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLEREQUEST_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLEREQUEST_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLEREQUEST_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

	};
}

