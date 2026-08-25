#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDTEMPORARYCANUSESKILLAREAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1325C60)
#define GROUNDCOMMANDTEMPORARYCANUSESKILLAREAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1325CB0)
#define GROUNDCOMMANDTEMPORARYCANUSESKILLAREAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1325A20)

	inline static constexpr unsigned int GroundCommandTemporaryCanUseSkillAreaFormatter_TypeDefinitionIndex = 14249;

	class GroundCommandTemporaryCanUseSkillAreaFormatter : public ::System::Collections::Generic::IReadOnlyList`1
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandTemporaryCanUseSkillArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandTemporaryCanUseSkillArea&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTEMPORARYCANUSESKILLAREAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandTemporaryCanUseSkillArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandTemporaryCanUseSkillArea&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTEMPORARYCANUSESKILLAREAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTEMPORARYCANUSESKILLAREAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

