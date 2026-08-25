#pragma once
#include "unitysdk.h"

#define PASSIVETRIGGERDATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F9860)
#define PASSIVETRIGGERDATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F98B0)
#define PASSIVETRIGGERDATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F8280)

	inline static constexpr unsigned int PassiveTriggerDataFormatter_TypeDefinitionIndex = 13660;

	class PassiveTriggerDataFormatter : public ::System::IO::UnmanagedMemoryStream
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::PassiveTriggerData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::PassiveTriggerData&*, ::PVOID))((::PBYTE)hIl2Cpp + PASSIVETRIGGERDATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::PassiveTriggerData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::PassiveTriggerData&*, ::PVOID))((::PBYTE)hIl2Cpp + PASSIVETRIGGERDATAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PASSIVETRIGGERDATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

