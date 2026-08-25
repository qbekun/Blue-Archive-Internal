#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Service { class OpenConditionLockReason; }

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int OpenConditionLockReason_TypeDefinitionIndex = 12380;

	class OpenConditionLockReason : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::GameLogic::Service::OpenConditionLockReason* None; // 0x0
		::MX::GameLogic::Service::OpenConditionLockReason* Level; // 0x0
		::MX::GameLogic::Service::OpenConditionLockReason* StageClear; // 0x0
		::MX::GameLogic::Service::OpenConditionLockReason* Time; // 0x0
		::MX::GameLogic::Service::OpenConditionLockReason* Day; // 0x0
		::MX::GameLogic::Service::OpenConditionLockReason* CafeRank; // 0x0
		::MX::GameLogic::Service::OpenConditionLockReason* ScenarioModeClear; // 0x0
		::MX::GameLogic::Service::OpenConditionLockReason* CafeOpen; // 0x0

	};
}

