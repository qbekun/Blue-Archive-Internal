#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class CraftType; }

namespace MX::Data
{
	inline static constexpr unsigned int CraftType_TypeDefinitionIndex = 15935;

	class CraftType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Data::CraftType* Craft; // 0x0
		::MX::Data::CraftType* ShiftingCraft; // 0x0

	};
}

