#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Data { class FacingTargetType; }

namespace MX::Visual::Data
{
	inline static constexpr unsigned int FacingTargetType_TypeDefinitionIndex = 20234;

	class FacingTargetType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Visual::Data::FacingTargetType* Trajectory; // 0x0
		::MX::Visual::Data::FacingTargetType* Target; // 0x0
		::MX::Visual::Data::FacingTargetType* InitDirection; // 0x0

	};
}

