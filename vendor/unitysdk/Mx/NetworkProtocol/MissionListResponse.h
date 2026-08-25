#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class MissionInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_GET_DAILYSUDDENMISSIONINFO_OFFSET UNITYSDK_OFFSET(0xF4A4C0)
#define MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_SET_MISSIONHISTORYUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xF4A4D0)
#define MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_SET_CLEAREDORIGNALMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xF4A4E0)
#define MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_SET_DAILYSUDDENMISSIONINFO_OFFSET UNITYSDK_OFFSET(0xF4A4F0)
#define MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_SET_PROGRESSDBS_OFFSET UNITYSDK_OFFSET(0xF4A500)
#define MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_GET_PROGRESSDBS_OFFSET UNITYSDK_OFFSET(0xF4A510)
#define MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A520)
#define MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A530)
#define MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_GET_CLEAREDORIGNALMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xF4A540)
#define MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_GET_MISSIONHISTORYUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xF4A550)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MissionListResponse_TypeDefinitionIndex = 11948;

	class MissionListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _MissionHistoryUniqueIds_k__BackingField; // 0x50
		Il2CppObject* _ProgressDBs_k__BackingField; // 0x58
		::MX::Data::MissionInfo* _DailySuddenMissionInfo_k__BackingField; // 0x60
		Il2CppObject* _ClearedOrignalMissionIds_k__BackingField; // 0x68

		::MX::Data::MissionInfo* get_DailySuddenMissionInfo()
		{
			return ((::MX::Data::MissionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_GET_DAILYSUDDENMISSIONINFO_OFFSET))(nullptr);
		}

		::System::Void set_MissionHistoryUniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_SET_MISSIONHISTORYUNIQUEIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClearedOrignalMissionIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_SET_CLEAREDORIGNALMISSIONIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_DailySuddenMissionInfo(::MX::Data::MissionInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MissionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_SET_DAILYSUDDENMISSIONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_ProgressDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_SET_PROGRESSDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ProgressDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_GET_PROGRESSDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ClearedOrignalMissionIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_GET_CLEAREDORIGNALMISSIONIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_MissionHistoryUniqueIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONLISTRESPONSE_GET_MISSIONHISTORYUNIQUEIDS_OFFSET))(nullptr);
		}

	};
}

