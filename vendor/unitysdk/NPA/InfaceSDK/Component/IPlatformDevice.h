#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int IPlatformDevice_TypeDefinitionIndex = 25934;

	class IPlatformDevice : public Il2CppObject
	{
	public:
		::System::Int32 getUUID; // 0x10
		::System::Int32 createRandomUniqueID; // 0x18

	};
}

