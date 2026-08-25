#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPFieldFilterType; }

namespace NPA
{
	inline static constexpr unsigned int NXPFieldFilterType_TypeDefinitionIndex = 25521;

	class NXPFieldFilterType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::NXPFieldFilterType* NONE; // 0x0
		::NPA::NXPFieldFilterType* EXCLUDE; // 0x0
		::NPA::NXPFieldFilterType* HASHING; // 0x0
		::NPA::NXPFieldFilterType* MASKING; // 0x0

	};
}

