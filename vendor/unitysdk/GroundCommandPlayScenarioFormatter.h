#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDPLAYSCENARIOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2176080)
#define GROUNDCOMMANDPLAYSCENARIOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x21756F0)
#define GROUNDCOMMANDPLAYSCENARIOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x21760D0)

	inline static constexpr unsigned int GroundCommandPlayScenarioFormatter_TypeDefinitionIndex = 4033;

	class GroundCommandPlayScenarioFormatter : public ::System::Collections::ObjectModel::KeyedCollection`2
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandPlayScenario&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandPlayScenario&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYSCENARIOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYSCENARIOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandPlayScenario&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandPlayScenario&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYSCENARIOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

