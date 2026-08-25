#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x130E380)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x130E3D0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECK_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x130E5F0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECK_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x130E7F0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECK_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x130F7E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1310ED0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandSetSkillDeck_TypeDefinitionIndex = 14225;

	class GroundCommandSetSkillDeck : public Il2CppObject
	{
	public:
		::System::Int64 CharacterId; // 0x30
		::System::Int64 CharacterLevel; // 0x38
		::System::Int32 CharacterGrade; // 0x40
		::UnityEngine::Vector2* CharacterPosition; // 0x44
		::System::String* SkillGroupId; // 0x50
		::System::Int32 SkillLevel; // 0x58
		::System::Int32 SkillUseCount; // 0x5C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECK_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECK_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECK_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECK_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECK_.CCTOR_OFFSET))(nullptr);
		}

	};
}

