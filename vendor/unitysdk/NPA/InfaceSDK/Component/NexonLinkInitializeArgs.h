#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class NexonLinkGameEngineType; }

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int NexonLinkInitializeArgs_TypeDefinitionIndex = 25936;

	class NexonLinkInitializeArgs : public Il2CppObject
	{
	public:
		::System::Int32 windowHandle; // 0x10
		::System::String* guid; // 0x18
		::System::String* token; // 0x20
		::System::String* memId; // 0x28
		::System::String* options; // 0x30
		::NPA::InfaceSDK::Component::NexonLinkGameEngineType* engineType; // 0x38

	};
}

