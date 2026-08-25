#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Battles { class ForwardVector; }

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int ForwardVector_TypeDefinitionIndex = 20352;

	class ForwardVector : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Visual::Battles::ForwardVector* Forward; // 0x0
		::MX::Visual::Battles::ForwardVector* Right; // 0x0
		::MX::Visual::Battles::ForwardVector* Up; // 0x0
		::MX::Visual::Battles::ForwardVector* Back; // 0x0
		::MX::Visual::Battles::ForwardVector* Left; // 0x0
		::MX::Visual::Battles::ForwardVector* Down; // 0x0

	};
}

