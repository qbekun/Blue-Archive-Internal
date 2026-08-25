#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class DispelActionType; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DispelActionType_TypeDefinitionIndex = 13519;

	class DispelActionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::DispelActionType* None; // 0x0
		::MX::Logic::Data::DispelActionType* Given; // 0x0
		::MX::Logic::Data::DispelActionType* Taken; // 0x0

	};
}

