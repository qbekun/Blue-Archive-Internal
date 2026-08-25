#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONAREAALWAYSCHECKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1348820)
#define GROUNDCONDITIONAREAALWAYSCHECKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1348870)
#define GROUNDCONDITIONAREAALWAYSCHECKFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13468B0)

	inline static constexpr unsigned int GroundConditionAreaAlwaysCheckFormatter_TypeDefinitionIndex = 14311;

	class GroundConditionAreaAlwaysCheckFormatter : public ::System::Collections::Generic::CollectionExtensions
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionAreaAlwaysCheck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionAreaAlwaysCheck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONAREAALWAYSCHECKFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionAreaAlwaysCheck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionAreaAlwaysCheck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONAREAALWAYSCHECKFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONAREAALWAYSCHECKFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

