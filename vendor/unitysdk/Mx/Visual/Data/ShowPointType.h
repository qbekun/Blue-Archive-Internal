#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Data { class ShowPointType; }

namespace MX::Visual::Data
{
	inline static constexpr unsigned int ShowPointType_TypeDefinitionIndex = 20235;

	class ShowPointType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Visual::Data::ShowPointType* Current; // 0x0
		::MX::Visual::Data::ShowPointType* Original; // 0x0
		::MX::Visual::Data::ShowPointType* Layer; // 0x0

	};
}

