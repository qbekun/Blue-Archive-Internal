#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundEvent; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERDIE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12C5970)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERDIE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C59C0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERDIE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12C6300)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERDIE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12C67F0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERDIE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12C69F0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERDIE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C6C50)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERDIE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12C78E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERDIE__EXECUTE_B__4_0_OFFSET UNITYSDK_OFFSET(0x12C78F0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandCharacterDie_TypeDefinitionIndex = 14146;

	class GroundCommandCharacterDie : public Il2CppObject
	{
	public:
		Il2CppObject* CharacterCommandIdList; // 0x30
		Il2CppObject* CharacterSpawnTemplateIdList; // 0x38
		Il2CppObject* CharacterIdList; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERDIE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandCharacterDie&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandCharacterDie&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERDIE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERDIE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::GroundEvent* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERDIE_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERDIE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandCharacterDie&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandCharacterDie&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERDIE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERDIE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean _Execute_b__4_0(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERDIE__EXECUTE_B__4_0_OFFSET))(str, nullptr);
		}

	};
}

