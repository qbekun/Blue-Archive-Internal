#pragma once
#include "../../../unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int AlignmentUnion_TypeDefinitionIndex = 29866;

	class AlignmentUnion : public Il2CppObject
	{
	public:
		::System::UInt64 Alignment; // 0x10
		::System::Int32 Length; // 0x10
		::System::Int32 IfIndex; // 0x14

	};
}

