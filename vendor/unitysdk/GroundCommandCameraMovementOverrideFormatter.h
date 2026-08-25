#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDCAMERAMOVEMENTOVERRIDEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x21665E0)
#define GROUNDCOMMANDCAMERAMOVEMENTOVERRIDEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x21665A0)
#define GROUNDCOMMANDCAMERAMOVEMENTOVERRIDEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2166630)

	inline static constexpr unsigned int GroundCommandCameraMovementOverrideFormatter_TypeDefinitionIndex = 4014;

	class GroundCommandCameraMovementOverrideFormatter : public ReadOnlyArrayList
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandCameraMovementOverride&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandCameraMovementOverride&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERAMOVEMENTOVERRIDEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERAMOVEMENTOVERRIDEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandCameraMovementOverride&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandCameraMovementOverride&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERAMOVEMENTOVERRIDEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

