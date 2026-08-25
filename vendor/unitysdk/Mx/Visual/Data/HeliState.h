#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Data { class HeliState; }

namespace MX::Visual::Data
{
	inline static constexpr unsigned int HeliState_TypeDefinitionIndex = 20233;

	class HeliState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Visual::Data::HeliState* None; // 0x0
		::MX::Visual::Data::HeliState* Ready; // 0x0
		::MX::Visual::Data::HeliState* Appear; // 0x0
		::MX::Visual::Data::HeliState* Idle; // 0x0
		::MX::Visual::Data::HeliState* Disappear; // 0x0
		::MX::Visual::Data::HeliState* Max; // 0x0

	};
}

