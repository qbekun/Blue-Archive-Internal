#pragma once
#include "unitysdk.h"

#define ECHELONSLOTINFOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11ED2B0)
#define ECHELONSLOTINFOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11ED260)
#define ECHELONSLOTINFOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11ED340)

	inline static constexpr unsigned int EchelonSlotInfoFormatter_TypeDefinitionIndex = 13476;

	class EchelonSlotInfoFormatter : public ::System::Diagnostics::Tracing::EventTask
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::EchelonSlotInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::EchelonSlotInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTINFOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTINFOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::EchelonSlotInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::EchelonSlotInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTINFOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

