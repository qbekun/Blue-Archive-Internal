#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDOPERATORFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12ECB90)
#define GROUNDCOMMANDOPERATORFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12ECBE0)
#define GROUNDCOMMANDOPERATORFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12ECB50)

	inline static constexpr unsigned int GroundCommandOperatorFormatter_TypeDefinitionIndex = 14190;

	class GroundCommandOperatorFormatter : public ::System::Collections::Concurrent::IProducerConsumerCollectionDebugView`1
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandOperator&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandOperator&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDOPERATORFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandOperator&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandOperator&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDOPERATORFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDOPERATORFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

