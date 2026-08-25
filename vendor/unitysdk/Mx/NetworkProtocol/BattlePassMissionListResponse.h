#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTRESPONSE_GET_MISSIONHISTORYUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xF11E50)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11E60)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTRESPONSE_SET_MISSIONHISTORYUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xF11E70)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11E80)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTRESPONSE_GET_PROGRESSDBS_OFFSET UNITYSDK_OFFSET(0xF11E90)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTRESPONSE_SET_PROGRESSDBS_OFFSET UNITYSDK_OFFSET(0xF11EA0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BattlePassMissionListResponse_TypeDefinitionIndex = 11338;

	class BattlePassMissionListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _MissionHistoryUniqueIds_k__BackingField; // 0x50
		Il2CppObject* _ProgressDBs_k__BackingField; // 0x58

		Il2CppObject* get_MissionHistoryUniqueIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTRESPONSE_GET_MISSIONHISTORYUNIQUEIDS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_MissionHistoryUniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTRESPONSE_SET_MISSIONHISTORYUNIQUEIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProgressDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTRESPONSE_GET_PROGRESSDBS_OFFSET))(nullptr);
		}

		::System::Void set_ProgressDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTRESPONSE_SET_PROGRESSDBS_OFFSET))(arg, nullptr);
		}

	};
}

