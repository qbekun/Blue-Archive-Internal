#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDADDSKILLCOSTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12B9210)
#define GROUNDCOMMANDADDSKILLCOSTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12B7C60)
#define GROUNDCOMMANDADDSKILLCOSTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12B9260)

	inline static constexpr unsigned int GroundCommandAddSkillCostFormatter_TypeDefinitionIndex = 14133;

	class GroundCommandAddSkillCostFormatter : public StackDebugView
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandAddSkillCost&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandAddSkillCost&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDSKILLCOSTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDSKILLCOSTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandAddSkillCost&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandAddSkillCost&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDSKILLCOSTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

