#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Service { class StepState; }

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int StepState_TypeDefinitionIndex = 12278;

	class StepState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::GameLogic::Service::StepState* Default; // 0x0
		::MX::GameLogic::Service::StepState* StandBy; // 0x0
		::MX::GameLogic::Service::StepState* Eroding; // 0x0
		::MX::GameLogic::Service::StepState* Complete; // 0x0

	};
}

