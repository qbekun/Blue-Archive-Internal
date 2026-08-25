#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12B1B00)
#define GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12B1940)
#define GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12B1B50)

	inline static constexpr unsigned int GroundCommandActivateConfrontationGaugeFormatter_TypeDefinitionIndex = 14123;

	class GroundCommandActivateConfrontationGaugeFormatter : public ::System::Collections::SortedList
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandActivateConfrontationGauge&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandActivateConfrontationGauge&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandActivateConfrontationGauge&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandActivateConfrontationGauge&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

