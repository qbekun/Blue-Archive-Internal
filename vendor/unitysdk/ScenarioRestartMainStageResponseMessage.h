#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }
namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }

#define SCENARIORESTARTMAINSTAGERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F99AA0)

	inline static constexpr unsigned int ScenarioRestartMainStageResponseMessage_TypeDefinitionIndex = 2771;

	class ScenarioRestartMainStageResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::Data::CampaignStageInfo* arg2, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIORESTARTMAINSTAGERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

