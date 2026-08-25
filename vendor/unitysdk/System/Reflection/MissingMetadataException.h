#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_MISSINGMETADATAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92442A0)

namespace System::Reflection
{
	inline static constexpr unsigned int MissingMetadataException_TypeDefinitionIndex = 24897;

	class MissingMetadataException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MISSINGMETADATAEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

