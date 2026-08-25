#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SelectMode_TypeDefinitionIndex = 29911;

	class SelectMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Sockets::SelectMode* SelectRead; // 0x0
		::System::Net::Sockets::SelectMode* SelectWrite; // 0x0
		::System::Net::Sockets::SelectMode* SelectError; // 0x0

	};
}

