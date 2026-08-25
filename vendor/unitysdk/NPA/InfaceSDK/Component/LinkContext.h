#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int LinkContext_TypeDefinitionIndex = 25927;

	class LinkContext : public Il2CppObject
	{
	public:
		::System::String* linkPlatformType; // 0x10
		::System::String* linkPlatformToken; // 0x18
		::System::String* linkPlatformServiceToken; // 0x20

	};
}

