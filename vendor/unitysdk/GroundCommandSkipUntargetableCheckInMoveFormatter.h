#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x131D440)
#define GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x131E9E0)
#define GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x131EA30)

	inline static constexpr unsigned int GroundCommandSkipUntargetableCheckInMoveFormatter_TypeDefinitionIndex = 14241;

	class GroundCommandSkipUntargetableCheckInMoveFormatter : public ::System::Collections::Generic::IEqualityComparer`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSkipUntargetableCheckInMove&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSkipUntargetableCheckInMove&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSkipUntargetableCheckInMove&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSkipUntargetableCheckInMove&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

