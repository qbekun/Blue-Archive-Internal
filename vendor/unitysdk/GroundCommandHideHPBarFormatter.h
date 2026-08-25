#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDHIDEHPBARFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2172110)
#define GROUNDCOMMANDHIDEHPBARFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2172150)
#define GROUNDCOMMANDHIDEHPBARFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x21721A0)

	inline static constexpr unsigned int GroundCommandHideHPBarFormatter_TypeDefinitionIndex = 4027;

	class GroundCommandHideHPBarFormatter : public Node
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDEHPBARFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandHideHPBar&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandHideHPBar&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDEHPBARFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandHideHPBar&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandHideHPBar&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDEHPBARFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

