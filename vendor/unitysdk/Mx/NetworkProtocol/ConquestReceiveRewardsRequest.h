#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSREQUEST_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF40B20)
#define MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF40B30)
#define MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF40B40)
#define MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF40B50)
#define MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSREQUEST_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF40B60)
#define MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSREQUEST_GET_STEP_OFFSET UNITYSDK_OFFSET(0xF40B70)
#define MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF40B80)
#define MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSREQUEST_SET_STEP_OFFSET UNITYSDK_OFFSET(0xF40B90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestReceiveRewardsRequest_TypeDefinitionIndex = 11563;

	class ConquestReceiveRewardsRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x48
		::System::Int32 _Step_k__BackingField; // 0x4C

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSREQUEST_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSREQUEST_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int32 get_Step()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSREQUEST_GET_STEP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Step(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSREQUEST_SET_STEP_OFFSET))(arg, nullptr);
		}

	};
}

