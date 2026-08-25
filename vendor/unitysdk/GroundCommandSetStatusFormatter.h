#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSETSTATUSFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1317790)
#define GROUNDCOMMANDSETSTATUSFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13177E0)
#define GROUNDCOMMANDSETSTATUSFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1317750)

	inline static constexpr unsigned int GroundCommandSetStatusFormatter_TypeDefinitionIndex = 14231;

	class GroundCommandSetStatusFormatter : public ::System::Collections::Generic::ICollectionDebugView`1
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetStatus&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetStatus&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSTATUSFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetStatus&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetStatus&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSTATUSFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSTATUSFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

