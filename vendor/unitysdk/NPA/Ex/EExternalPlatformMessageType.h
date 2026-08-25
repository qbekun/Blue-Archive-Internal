#pragma once
#include "../../unitysdk.h"

namespace NPA::Ex { class EExternalPlatformMessageType; }

namespace NPA::Ex
{
	inline static constexpr unsigned int EExternalPlatformMessageType_TypeDefinitionIndex = 25985;

	class EExternalPlatformMessageType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::EExternalPlatformMessageType* EmptyStore; // 0x0
		::NPA::Ex::EExternalPlatformMessageType* ChatRestricted; // 0x0
		::NPA::Ex::EExternalPlatformMessageType* UGCRestricted; // 0x0

	};
}

