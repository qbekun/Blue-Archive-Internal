#pragma once
#include "../../unitysdk.h"

namespace FlatData { class MissionCategory; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDREQUEST_SET_MISSIONCATEGORY_OFFSET UNITYSDK_OFFSET(0xF11F90)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11FA0)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDREQUEST_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0xF11FB0)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11FC0)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDREQUEST_GET_MISSIONCATEGORY_OFFSET UNITYSDK_OFFSET(0xF11FD0)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDREQUEST_SET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0xF11FE0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BattlePassMissionMultipleRewardRequest_TypeDefinitionIndex = 11341;

	class BattlePassMissionMultipleRewardRequest : public Il2CppObject
	{
	public:
		::FlatData::MissionCategory* _MissionCategory_k__BackingField; // 0x40
		::System::Int64 _BattlePassId_k__BackingField; // 0x48

		::System::Void set_MissionCategory(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDREQUEST_SET_MISSIONCATEGORY_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDREQUEST_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::MissionCategory* get_MissionCategory()
		{
			return ((::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDREQUEST_GET_MISSIONCATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_BattlePassId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDREQUEST_SET_BATTLEPASSID_OFFSET))(arg, nullptr);
		}

	};
}

