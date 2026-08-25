#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class ExecutionInfoResult_Data; }

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int ExecutionInfoResult_TypeDefinitionIndex = 25946;

	class ExecutionInfoResult : public Il2CppObject
	{
	public:
		::System::String* code; // 0x10
		::System::String* message; // 0x18
		::System::String* requestId; // 0x20
		::System::String* traceId; // 0x28
		::System::String* detailStr; // 0x30
		::NPA::InfaceSDK::Component::ExecutionInfoResult_Data* data; // 0x38
		::System::Int64 svcCode; // 0x40
		::System::Int64 sdkResCode; // 0x48

	};
}

