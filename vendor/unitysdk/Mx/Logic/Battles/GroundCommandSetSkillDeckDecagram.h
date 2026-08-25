#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class SupportActor; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECKDECAGRAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x1310F80)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECKDECAGRAM_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1311030)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECKDECAGRAM_COAUTOUSEDELAY_OFFSET UNITYSDK_OFFSET(0x1312060)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECKDECAGRAM_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1312120)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECKDECAGRAM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13139C0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECKDECAGRAM_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1313EE0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECKDECAGRAM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13141A0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandSetSkillDeckDecagram_TypeDefinitionIndex = 14228;

	class GroundCommandSetSkillDeckDecagram : public Il2CppObject
	{
	public:
		::System::Int32 AutoUseDelay; // 0x60
		Il2CppObject* InitialAbilities; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECKDECAGRAM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetSkillDeckDecagram&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetSkillDeckDecagram&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECKDECAGRAM_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoAutoUseDelay(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::SupportActor* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECKDECAGRAM_COAUTOUSEDELAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetSkillDeckDecagram&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetSkillDeckDecagram&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECKDECAGRAM_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECKDECAGRAM_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECKDECAGRAM_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSKILLDECKDECAGRAM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

