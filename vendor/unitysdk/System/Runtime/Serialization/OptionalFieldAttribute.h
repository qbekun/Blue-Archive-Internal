#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_OPTIONALFIELDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92024E0)
#define SYSTEM_RUNTIME_SERIALIZATION_OPTIONALFIELDATTRIBUTE_SET_VERSIONADDED_OFFSET UNITYSDK_OFFSET(0x92024F0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int OptionalFieldAttribute_TypeDefinitionIndex = 24604;

	class OptionalFieldAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Int32 versionAdded; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OPTIONALFIELDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_VersionAdded(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OPTIONALFIELDATTRIBUTE_SET_VERSIONADDED_OFFSET))(arg, nullptr);
		}

	};
}

