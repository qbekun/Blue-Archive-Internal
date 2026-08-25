#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int StandardResult_TypeDefinitionIndex = 25930;

	class StandardResult : public Il2CppObject
	{
	public:
		::System::String* code; // 0x10
		::System::String* message; // 0x18
		::System::String* detailStr; // 0x20
		::System::String* traceId; // 0x28
		::System::String* requestId; // 0x30
		::System::Int64 svcCode; // 0x38
		::System::Int64 sdkResCode; // 0x40

	};
}

