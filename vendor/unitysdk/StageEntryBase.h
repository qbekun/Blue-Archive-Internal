#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }

#define STAGEENTRYBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2735BA0)
#define STAGEENTRYBASE_ENTER_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int StageEntryBase_TypeDefinitionIndex = 7206;

	class StageEntryBase : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEENTRYBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Enter(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + STAGEENTRYBASE_ENTER_OFFSET))(arg, nullptr);
		}

	};

