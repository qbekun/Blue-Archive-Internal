#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF4AC40)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_SET_ECHELONID_OFFSET UNITYSDK_OFFSET(0xF4AC50)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4AC60)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_SET_ASSISTUSEINFOS_OFFSET UNITYSDK_OFFSET(0xF4AC70)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF4AC80)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_GET_ECHELONID_OFFSET UNITYSDK_OFFSET(0xF4AC90)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF4ACA0)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_GET_ASSISTUSEINFOS_OFFSET UNITYSDK_OFFSET(0xF4ACB0)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF4ACC0)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4ACD0)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF4ACE0)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF4ACF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MultiFloorRaidEndBattleRequest_TypeDefinitionIndex = 11971;

	class MultiFloorRaidEndBattleRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x40
		::System::Int32 _Difficulty_k__BackingField; // 0x48
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x50
		::System::Int32 _EchelonId_k__BackingField; // 0x58
		Il2CppObject* _AssistUseInfos_k__BackingField; // 0x60

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_EchelonId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_SET_ECHELONID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_AssistUseInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_SET_ASSISTUSEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Difficulty()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int32 get_EchelonId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_GET_ECHELONID_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_GET_SUMMARY_OFFSET))(nullptr);
		}

		Il2CppObject* get_AssistUseInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_GET_ASSISTUSEINFOS_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Difficulty(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDENDBATTLEREQUEST_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

	};
}

