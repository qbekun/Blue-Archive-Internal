#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int AnalyticsClientConfig_TypeDefinitionIndex = 25926;

	class AnalyticsClientConfig : public Il2CppObject
	{
	public:
		::System::String* toySdkVersion; // 0x10
		::System::UInt64 backupFileLimit; // 0x18
		::System::UInt32 queueSizeMax; // 0x20
		::System::UInt32 messageBulkCount; // 0x24
		::System::UInt32 messageBulkTimeoutMs; // 0x28

	};
}

