#pragma once
#include "unitysdk.h"

#define AURAPROCEDURECONDITIONDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13DD180)
#define AURAPROCEDURECONDITIONDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13DD1D0)
#define AURAPROCEDURECONDITIONDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13DCA50)

	inline static constexpr unsigned int AuraProcedureConditionDAOFormatter_TypeDefinitionIndex = 14523;

	class AuraProcedureConditionDAOFormatter : public ::System::Reflection::Emit::GenericTypeParameterBuilder
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Skills::AuraProcedureConditionDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Skills::AuraProcedureConditionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AURAPROCEDURECONDITIONDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Skills::AuraProcedureConditionDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Skills::AuraProcedureConditionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AURAPROCEDURECONDITIONDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AURAPROCEDURECONDITIONDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

