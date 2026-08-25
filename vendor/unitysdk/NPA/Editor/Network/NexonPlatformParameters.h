#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NexonPlatformParameters_TypeDefinitionIndex = 26649;

	class NexonPlatformParameters : public Il2CppObject
	{
	public:
		::System::String* sdkVer; // 0x10
		::System::String* os; // 0x18
		::System::String* svcID; // 0x20
		::System::String* npToken; // 0x28
		::System::Int32 appVersionNumber; // 0x30
		::System::String* appId; // 0x38
		::System::String* timeZone; // 0x40
		::System::String* adid; // 0x48
		::System::String* mk; // 0x50

	};
}

