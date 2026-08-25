#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDCHANGELOOKTARGETFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x216D150)
#define GROUNDCOMMANDCHANGELOOKTARGETFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x216D1A0)
#define GROUNDCOMMANDCHANGELOOKTARGETFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x216C7C0)

	inline static constexpr unsigned int GroundCommandChangeLookTargetFormatter_TypeDefinitionIndex = 4020;

	class GroundCommandChangeLookTargetFormatter : public ::System::Collections::ArrayList
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandChangeLookTarget&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandChangeLookTarget&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGELOOKTARGETFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandChangeLookTarget&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandChangeLookTarget&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGELOOKTARGETFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGELOOKTARGETFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

