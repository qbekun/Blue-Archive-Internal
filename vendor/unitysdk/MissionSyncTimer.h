#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class MissionSyncRequest; }
class MissionContentBase;

#define MISSIONSYNCTIMER_ISMISSIONSYNCREQUIRED_OFFSET UNITYSDK_OFFSET(0x2046D50)
#define MISSIONSYNCTIMER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20471C0)
#define MISSIONSYNCTIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x2047210)
#define MISSIONSYNCTIMER_GET_TARGETMISSION_OFFSET UNITYSDK_OFFSET(0x2047010)
#define MISSIONSYNCTIMER_REQUESTMISSIONSYNC_OFFSET UNITYSDK_OFFSET(0x2047280)
#define MISSIONSYNCTIMER_HANDLERESPONSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MISSIONSYNCTIMER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2047380)

	inline static constexpr unsigned int MissionSyncTimer_TypeDefinitionIndex = 3267;

	class MissionSyncTimer : public Il2CppObject
	{
	public:
		::System::Single timer; // 0x18
		::System::Single interval; // 0x1C
		::MX::NetworkProtocol::MissionSyncRequest* request; // 0x20

		::System::Boolean IsMissionSyncRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONSYNCTIMER_ISMISSIONSYNCREQUIRED_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONSYNCTIMER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONSYNCTIMER_UPDATE_OFFSET))(nullptr);
		}

		MissionContentBase* get_TargetMission()
		{
			return ((MissionContentBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONSYNCTIMER_GET_TARGETMISSION_OFFSET))(nullptr);
		}

		::System::Void RequestMissionSync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONSYNCTIMER_REQUESTMISSIONSYNC_OFFSET))(nullptr);
		}

		::System::Void HandleResponse(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONSYNCTIMER_HANDLERESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONSYNCTIMER_.CTOR_OFFSET))(nullptr);
		}

	};

