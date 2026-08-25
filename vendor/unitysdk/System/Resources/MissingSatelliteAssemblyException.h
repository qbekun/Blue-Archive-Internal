#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B7A0)
#define SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B7F0)
#define SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B830)

namespace System::Resources
{
	inline static constexpr unsigned int MissingSatelliteAssemblyException_TypeDefinitionIndex = 24808;

	class MissingSatelliteAssemblyException : public Il2CppObject
	{
	public:
		::System::String* _cultureName; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

