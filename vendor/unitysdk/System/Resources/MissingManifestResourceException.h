#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RESOURCES_MISSINGMANIFESTRESOURCEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B710)
#define SYSTEM_RESOURCES_MISSINGMANIFESTRESOURCEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B760)
#define SYSTEM_RESOURCES_MISSINGMANIFESTRESOURCEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B780)

namespace System::Resources
{
	inline static constexpr unsigned int MissingManifestResourceException_TypeDefinitionIndex = 24807;

	class MissingManifestResourceException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MISSINGMANIFESTRESOURCEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MISSINGMANIFESTRESOURCEEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MISSINGMANIFESTRESOURCEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

