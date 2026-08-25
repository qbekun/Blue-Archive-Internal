#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMANDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F68C0)
#define GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMANDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F6910)
#define GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMANDFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12F6880)

	inline static constexpr unsigned int GroundCommandResetForceMoveToFormationBeaconCommandFormatter_TypeDefinitionIndex = 14200;

	class GroundCommandResetForceMoveToFormationBeaconCommandFormatter : public ::System::Collections::ObjectModel::ReadOnlyDictionaryHelpers
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandResetForceMoveToFormationBeaconCommand&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandResetForceMoveToFormationBeaconCommand&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMANDFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandResetForceMoveToFormationBeaconCommand&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandResetForceMoveToFormationBeaconCommand&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMANDFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMANDFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

