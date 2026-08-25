#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class ICCGSkillTriggerable; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGGame; }

#define MX_MINIGAMECCG_CCGSKILLCONTEXT_GET_BASEPOWER_OFFSET UNITYSDK_OFFSET(0x1DC5E60)
#define MX_MINIGAMECCG_CCGSKILLCONTEXT_GET_INVOKER_OFFSET UNITYSDK_OFFSET(0x1DC5E70)
#define MX_MINIGAMECCG_CCGSKILLCONTEXT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DC5E80)
#define MX_MINIGAMECCG_CCGSKILLCONTEXT_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1DC5F60)
#define MX_MINIGAMECCG_CCGSKILLCONTEXT_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1DC5F70)
#define MX_MINIGAMECCG_CCGSKILLCONTEXT_GET_CANWRITEACTIONLOG_OFFSET UNITYSDK_OFFSET(0x1DC5F90)
#define MX_MINIGAMECCG_CCGSKILLCONTEXT_GET_SKILL_OFFSET UNITYSDK_OFFSET(0x1DC6070)
#define MX_MINIGAMECCG_CCGSKILLCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6080)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGSkillContext_TypeDefinitionIndex = 20497;

	class CCGSkillContext : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEntity* _Source_k__BackingField; // 0x28
		::MX::MinigameCCG::CCGSkillData* _Skill_k__BackingField; // 0x30
		::System::Int32 _BasePower_k__BackingField; // 0x38
		::MX::MinigameCCG::ICCGSkillTriggerable* _Invoker_k__BackingField; // 0x40

		::System::Int32 get_BasePower()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLCONTEXT_GET_BASEPOWER_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::ICCGSkillTriggerable* get_Invoker()
		{
			return (return (::MX::MinigameCCG::ICCGSkillTriggerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLCONTEXT_GET_INVOKER_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLCONTEXT_TOSTRING_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGEntity* get_Source()
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLCONTEXT_GET_SOURCE_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGPlayer* get_Player()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLCONTEXT_GET_PLAYER_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWriteActionLog()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLCONTEXT_GET_CANWRITEACTIONLOG_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGSkillData* get_Skill()
		{
			return (return (::MX::MinigameCCG::CCGSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLCONTEXT_GET_SKILL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::ICCGSkillTriggerable* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::ICCGSkillTriggerable*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLCONTEXT_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

