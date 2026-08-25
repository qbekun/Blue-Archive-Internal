#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDFORCEIDLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12DD380)
#define GROUNDCOMMANDFORCEIDLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12DD3D0)
#define GROUNDCOMMANDFORCEIDLEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12DC720)

	inline static constexpr unsigned int GroundCommandForceIdleFormatter_TypeDefinitionIndex = 14171;

	class GroundCommandForceIdleFormatter : public Tables
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandForceIdle&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandForceIdle&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEIDLEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandForceIdle&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandForceIdle&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEIDLEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEIDLEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

