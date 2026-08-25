#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::Logic::Skills { class AutoUseCheck; }
namespace MX::Data::Excel { class SkillExcel; }

#define MX_LOGIC_SKILLS_SKILLDATAPACK_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x13EBAD0)
#define MX_LOGIC_SKILLS_SKILLDATAPACK_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x13EBAE0)
#define MX_LOGIC_SKILLS_SKILLDATAPACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x13EBAF0)
#define MX_LOGIC_SKILLS_SKILLDATAPACK_GET_AUTOUSECHECK_OFFSET UNITYSDK_OFFSET(0x13EBB70)
#define MX_LOGIC_SKILLS_SKILLDATAPACK_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x13EBB80)
#define MX_LOGIC_SKILLS_SKILLDATAPACK_GET_CHECKCANUSESKILLPOINT_OFFSET UNITYSDK_OFFSET(0x13EBB90)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int SkillDataPack_TypeDefinitionIndex = 14589;

	class SkillDataPack : public Il2CppObject
	{
	public:
		::MX::Logic::Actions::IActiveSkill* _Action_k__BackingField; // 0x10
		::MX::Logic::Skills::AutoUseCheck* _AutoUseCheck_k__BackingField; // 0x18
		::System::Boolean _CheckCanUseSkillPoint_k__BackingField; // 0x20
		::MX::Data::Excel::SkillExcel* _Excel_k__BackingField; // 0x28
		::System::Int32 _Level_k__BackingField; // 0x38

		::MX::Logic::Actions::IActiveSkill* get_Action()
		{
			return ((::MX::Logic::Actions::IActiveSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLDATAPACK_GET_ACTION_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLDATAPACK_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Actions::IActiveSkill* arg, ::MX::Logic::Skills::AutoUseCheck* arg2, ::System::Boolean arg3, ::MX::Data::Excel::SkillExcel* arg4, ::System::Int32 arg5)
		{
			((::System::Void(*)(::MX::Logic::Actions::IActiveSkill*, ::MX::Logic::Skills::AutoUseCheck*, ::System::Boolean, ::MX::Data::Excel::SkillExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLDATAPACK_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::Skills::AutoUseCheck* get_AutoUseCheck()
		{
			return ((::MX::Logic::Skills::AutoUseCheck*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLDATAPACK_GET_AUTOUSECHECK_OFFSET))(nullptr);
		}

		::MX::Data::Excel::SkillExcel* get_Excel()
		{
			return ((::MX::Data::Excel::SkillExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLDATAPACK_GET_EXCEL_OFFSET))(nullptr);
		}

		::System::Boolean get_CheckCanUseSkillPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLDATAPACK_GET_CHECKCANUSESKILLPOINT_OFFSET))(nullptr);
		}

	};
}

