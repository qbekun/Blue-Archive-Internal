#pragma once
#include "../../unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int CloseExState_TypeDefinitionIndex = 29712;

	class CloseExState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::CloseExState* Normal; // 0x0
		::System::Net::CloseExState* Abort; // 0x0
		::System::Net::CloseExState* Silent; // 0x0

	};
}

