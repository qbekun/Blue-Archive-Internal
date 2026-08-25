#pragma once
#include "../../unitysdk.h"

namespace System::Buffers
{
	inline static constexpr unsigned int OperationStatus_TypeDefinitionIndex = 25202;

	class OperationStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Buffers::OperationStatus* Done; // 0x0
		::System::Buffers::OperationStatus* DestinationTooSmall; // 0x0
		::System::Buffers::OperationStatus* NeedMoreData; // 0x0
		::System::Buffers::OperationStatus* InvalidData; // 0x0

	};
}

