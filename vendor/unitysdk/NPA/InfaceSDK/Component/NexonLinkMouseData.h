#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int NexonLinkMouseData_TypeDefinitionIndex = 25938;

	class NexonLinkMouseData : public Il2CppObject
	{
	public:
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 cursorX; // 0x18
		::System::Int32 cursorY; // 0x1C
		::System::Int32 delta; // 0x20

	};
}

