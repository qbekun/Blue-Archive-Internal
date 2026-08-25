#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Service { class OpenConditionLockReason; }

#define CAMPAIGNMAINSTAGESTRATEGYSKIPINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x273A880)
#define CAMPAIGNMAINSTAGESTRATEGYSKIPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x273D4F0)

	inline static constexpr unsigned int CampaignMainStageStrategySkipInfo_TypeDefinitionIndex = 7208;

	class CampaignMainStageStrategySkipInfo : public Il2CppObject
	{
	public:
		::System::Boolean IsActive; // 0x10
		::System::Boolean IsOpened; // 0x11
		::MX::GameLogic::Service::OpenConditionLockReason* LockReason; // 0x14
		::System::Boolean IsStrategyForcely; // 0x18
		::System::Boolean IsSkip; // 0x19

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAINSTAGESTRATEGYSKIPINFO_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAINSTAGESTRATEGYSKIPINFO_.CTOR_OFFSET))(nullptr);
		}

	};

