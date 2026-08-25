#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDLOCATECAMERAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2173D50)
#define GROUNDCOMMANDLOCATECAMERAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2173DA0)
#define GROUNDCOMMANDLOCATECAMERAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2172470)

	inline static constexpr unsigned int GroundCommandLocateCameraFormatter_TypeDefinitionIndex = 4029;

	class GroundCommandLocateCameraFormatter : public ::System::Collections::Concurrent::ConcurrentStack`1
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandLocateCamera&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandLocateCamera&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDLOCATECAMERAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandLocateCamera&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandLocateCamera&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDLOCATECAMERAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDLOCATECAMERAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

