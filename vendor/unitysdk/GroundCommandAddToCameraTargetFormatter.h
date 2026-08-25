#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDADDTOCAMERATARGETFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2164D60)
#define GROUNDCOMMANDADDTOCAMERATARGETFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2164D10)
#define GROUNDCOMMANDADDTOCAMERATARGETFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2164DB0)

	inline static constexpr unsigned int GroundCommandAddToCameraTargetFormatter_TypeDefinitionIndex = 4012;

	class GroundCommandAddToCameraTargetFormatter : public ::System::Collections::Stack
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandAddToCameraTarget&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandAddToCameraTarget&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDTOCAMERATARGETFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDTOCAMERATARGETFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandAddToCameraTarget&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandAddToCameraTarget&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDTOCAMERATARGETFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

