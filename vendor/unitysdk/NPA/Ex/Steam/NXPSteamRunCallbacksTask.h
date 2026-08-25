#pragma once
#include "../../../unitysdk.h"

#define NPA_EX_STEAM_NXPSTEAMRUNCALLBACKSTASK_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D35910)
#define NPA_EX_STEAM_NXPSTEAMRUNCALLBACKSTASK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D359D0)
#define NPA_EX_STEAM_NXPSTEAMRUNCALLBACKSTASK_STEAMRUNCALLBACKTHREADDOWORK_OFFSET UNITYSDK_OFFSET(0x9D35C60)
#define NPA_EX_STEAM_NXPSTEAMRUNCALLBACKSTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D35D40)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamRunCallbacksTask_TypeDefinitionIndex = 26074;

	class NXPSteamRunCallbacksTask : public <<SpawnForceMoveTargetEntity>g__CoMove|0>d
	{
	public:
		::System::Threading::Thread* steamRunCallbackThread; // 0x28
		::System::Boolean isSteamRunCallbackThreadDoWorkRun; // 0x30

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMRUNCALLBACKSTASK_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMRUNCALLBACKSTASK_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SteamRunCallbackThreadDoWork()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMRUNCALLBACKSTASK_STEAMRUNCALLBACKTHREADDOWORK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMRUNCALLBACKSTASK_.CTOR_OFFSET))(nullptr);
		}

	};
}

