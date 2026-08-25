#pragma once
#include "../../unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int ReadState_TypeDefinitionIndex = 29803;

	class ReadState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::ReadState* None; // 0x0
		::System::Net::ReadState* Status; // 0x0
		::System::Net::ReadState* Headers; // 0x0
		::System::Net::ReadState* Content; // 0x0
		::System::Net::ReadState* Aborted; // 0x0

	};
}

