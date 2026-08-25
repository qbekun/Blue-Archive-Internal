#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGTargetCategoryRule; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGEntityStatType; }

#define MX_MINIGAMECCG_CCGPLAYERENVIRONMENT_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1DCA4B0)
#define MX_MINIGAMECCG_CCGPLAYERENVIRONMENT_CHECKTARGETCATEGORYRULE_OFFSET UNITYSDK_OFFSET(0x1DCA550)
#define MX_MINIGAMECCG_CCGPLAYERENVIRONMENT_GET_PASSIVESKILLS_OFFSET UNITYSDK_OFFSET(0x1DCA560)
#define MX_MINIGAMECCG_CCGPLAYERENVIRONMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DBEE70)
#define MX_MINIGAMECCG_CCGPLAYERENVIRONMENT_GET_ACTIVESKILL_OFFSET UNITYSDK_OFFSET(0x1DCA600)
#define MX_MINIGAMECCG_CCGPLAYERENVIRONMENT_GETSTATBASEVALUE_OFFSET UNITYSDK_OFFSET(0x1DCA610)
#define MX_MINIGAMECCG_CCGPLAYERENVIRONMENT_GET_ALIVE_OFFSET UNITYSDK_OFFSET(0x1DCA620)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGPlayerEnvironment_TypeDefinitionIndex = 20511;

	class CCGPlayerEnvironment : public Il2CppObject
	{
	public:
		Il2CppObject* get_Tags()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERENVIRONMENT_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Boolean CheckTargetCategoryRule(::MX::MinigameCCG::CCGTargetCategoryRule* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGTargetCategoryRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERENVIRONMENT_CHECKTARGETCATEGORYRULE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PassiveSkills()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERENVIRONMENT_GET_PASSIVESKILLS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERENVIRONMENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::MX::MinigameCCG::CCGSkillData* get_ActiveSkill()
		{
			return (return (::MX::MinigameCCG::CCGSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERENVIRONMENT_GET_ACTIVESKILL_OFFSET))(nullptr);
		}

		::System::Int32 GetStatBaseValue(::MX::MinigameCCG::CCGEntityStatType* arg)
		{
			return (return (::System::Int32(*)(::MX::MinigameCCG::CCGEntityStatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERENVIRONMENT_GETSTATBASEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Alive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERENVIRONMENT_GET_ALIVE_OFFSET))(nullptr);
		}

	};
}

