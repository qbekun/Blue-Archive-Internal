#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class CrowdControlGaugeApplyType; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CrowdControlGaugeApplyType_TypeDefinitionIndex = 13515;

	class CrowdControlGaugeApplyType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::CrowdControlGaugeApplyType* Default; // 0x0
		::MX::Logic::Data::CrowdControlGaugeApplyType* IncludeImmune; // 0x0

	};
}

