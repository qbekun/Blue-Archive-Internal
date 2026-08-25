#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDCAMERASHAKEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x21668B0)
#define GROUNDCOMMANDCAMERASHAKEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2169000)
#define GROUNDCOMMANDCAMERASHAKEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2169050)

	inline static constexpr unsigned int GroundCommandCameraShakeFormatter_TypeDefinitionIndex = 4016;

	class GroundCommandCameraShakeFormatter : public ArrayListEnumeratorSimple
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandCameraShake&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandCameraShake&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandCameraShake&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandCameraShake&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

