#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSETTIMESCALEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x131D010)
#define GROUNDCOMMANDSETTIMESCALEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x131D060)
#define GROUNDCOMMANDSETTIMESCALEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x131C150)

	inline static constexpr unsigned int GroundCommandSetTimeScaleFormatter_TypeDefinitionIndex = 14238;

	class GroundCommandSetTimeScaleFormatter : public ::System::Collections::Generic::IDictionaryDebugView`2
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetTimeScale&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetTimeScale&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETTIMESCALEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetTimeScale&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetTimeScale&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETTIMESCALEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETTIMESCALEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

