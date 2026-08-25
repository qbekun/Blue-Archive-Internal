#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDCREATEBATTLEREQUEST_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF429C0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDCREATEBATTLEREQUEST_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF429D0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDCREATEBATTLEREQUEST_SET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF429E0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDCREATEBATTLEREQUEST_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF429F0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDCREATEBATTLEREQUEST_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF42A00)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDCREATEBATTLEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42A10)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDCREATEBATTLEREQUEST_GET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF42A20)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDCREATEBATTLEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42A30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidCreateBattleRequest_TypeDefinitionIndex = 11643;

	class EliminateRaidCreateBattleRequest : public Il2CppObject
	{
	public:
		::System::Int64 _RaidUniqueId_k__BackingField; // 0x40
		::System::Boolean _IsPractice_k__BackingField; // 0x48
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x50

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDCREATEBATTLEREQUEST_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDCREATEBATTLEREQUEST_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Void set_RaidUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDCREATEBATTLEREQUEST_SET_RAIDUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDCREATEBATTLEREQUEST_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDCREATEBATTLEREQUEST_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDCREATEBATTLEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDCREATEBATTLEREQUEST_GET_RAIDUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDCREATEBATTLEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

