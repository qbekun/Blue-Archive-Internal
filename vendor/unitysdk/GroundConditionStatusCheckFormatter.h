#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONSTATUSCHECKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x136C180)
#define GROUNDCONDITIONSTATUSCHECKFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x136ACD0)
#define GROUNDCONDITIONSTATUSCHECKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x136C1D0)

	inline static constexpr unsigned int GroundConditionStatusCheckFormatter_TypeDefinitionIndex = 14350;

	class GroundConditionStatusCheckFormatter : public ::System::Collections::Generic::GenericComparer`1
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionStatusCheck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionStatusCheck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSTATUSCHECKFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSTATUSCHECKFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionStatusCheck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionStatusCheck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSTATUSCHECKFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

