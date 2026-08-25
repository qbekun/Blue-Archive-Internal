#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }

#define MX_LOGIC_BATTLES_SKILLCARDPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1388970)
#define MX_LOGIC_BATTLES_SKILLCARDPROCESSOR_ADDSKILLCARD_OFFSET UNITYSDK_OFFSET(0x1388A60)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int SkillCardProcessor_TypeDefinitionIndex = 14404;

	class SkillCardProcessor : public Il2CppObject
	{
	public:
		Il2CppObject* CardList; // 0x10
		Il2CppObject* Deck; // 0x18
		Il2CppObject* Hand; // 0x20

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDPROCESSOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void AddSkillCard(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SKILLCARDPROCESSOR_ADDSKILLCARD_OFFSET))(arg, nullptr);
		}

	};
}

