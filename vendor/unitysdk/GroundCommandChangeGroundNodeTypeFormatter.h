#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDCHANGEGROUNDNODETYPEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12C3060)
#define GROUNDCOMMANDCHANGEGROUNDNODETYPEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C3C00)
#define GROUNDCOMMANDCHANGEGROUNDNODETYPEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C3C50)

	inline static constexpr unsigned int GroundCommandChangeGroundNodeTypeFormatter_TypeDefinitionIndex = 14141;

	class GroundCommandChangeGroundNodeTypeFormatter : public ArrayListDebugView
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGEGROUNDNODETYPEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandChangeGroundNodeType&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandChangeGroundNodeType&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGEGROUNDNODETYPEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandChangeGroundNodeType&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandChangeGroundNodeType&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGEGROUNDNODETYPEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

