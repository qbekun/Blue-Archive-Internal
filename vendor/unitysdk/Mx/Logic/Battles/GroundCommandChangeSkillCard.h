#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class SupportActor; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x12C3CA0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12C3CF0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD__EXECUTE_B__2_2_OFFSET UNITYSDK_OFFSET(0x12C3EF0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12C3F30)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C4310)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12C4F60)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C4F70)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD__EXECUTE_B__2_1_OFFSET UNITYSDK_OFFSET(0x12C5870)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD__EXECUTE_B__2_0_OFFSET UNITYSDK_OFFSET(0x12C58A0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandChangeSkillCard_TypeDefinitionIndex = 14144;

	class GroundCommandChangeSkillCard : public Il2CppObject
	{
	public:
		::System::Int32 SkillCardIndex; // 0x30
		::System::Int64 CharacterId; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Boolean _Execute_b__2_2(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD__EXECUTE_B__2_2_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandChangeSkillCard&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandChangeSkillCard&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandChangeSkillCard&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandChangeSkillCard&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _Execute_b__2_1(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD__EXECUTE_B__2_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Execute_b__2_0(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHANGESKILLCARD__EXECUTE_B__2_0_OFFSET))(arg, nullptr);
		}

	};
}

