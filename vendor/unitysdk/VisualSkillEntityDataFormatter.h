#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Visual::Data { class VisualSkillEntityData&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define VISUALSKILLENTITYDATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D5DB70)
#define VISUALSKILLENTITYDATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DB30)
#define VISUALSKILLENTITYDATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D5DBC0)

	inline static constexpr unsigned int VisualSkillEntityDataFormatter_TypeDefinitionIndex = 20231;

	class VisualSkillEntityDataFormatter : public __StaticArrayInitTypeSize=3132
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Visual::Data::VisualSkillEntityData&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Visual::Data::VisualSkillEntityData&*, ::PVOID))((::PBYTE)hIl2Cpp + VISUALSKILLENTITYDATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VISUALSKILLENTITYDATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Visual::Data::VisualSkillEntityData&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Visual::Data::VisualSkillEntityData&*, ::PVOID))((::PBYTE)hIl2Cpp + VISUALSKILLENTITYDATAFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

