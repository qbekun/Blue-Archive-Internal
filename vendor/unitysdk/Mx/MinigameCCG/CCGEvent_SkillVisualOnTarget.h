#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG::Procedures { class CCGSkillVFXData; }

#define MX_MINIGAMECCG_CCGEVENT_SKILLVISUALONTARGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC150)
#define MX_MINIGAMECCG_CCGEVENT_SKILLVISUALONTARGET_GET_FACETOTARGET_OFFSET UNITYSDK_OFFSET(0x1DCC340)
#define MX_MINIGAMECCG_CCGEVENT_SKILLVISUALONTARGET_GET_TARGETENTITYIDS_OFFSET UNITYSDK_OFFSET(0x1DCC350)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_SkillVisualOnTarget_TypeDefinitionIndex = 20530;

	class CCGEvent_SkillVisualOnTarget : public Il2CppObject
	{
	public:
		Il2CppObject* _TargetEntityIds_k__BackingField; // 0x38
		::System::Boolean _FaceToTarget_k__BackingField; // 0x40

		::System::Void .ctor(::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg, Il2CppObject* arg, ::MX::MinigameCCG::Procedures::CCGSkillVFXData* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, Il2CppObject*, ::MX::MinigameCCG::Procedures::CCGSkillVFXData*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLVISUALONTARGET_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_FaceToTarget()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLVISUALONTARGET_GET_FACETOTARGET_OFFSET))(nullptr);
		}

		Il2CppObject* get_TargetEntityIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLVISUALONTARGET_GET_TARGETENTITYIDS_OFFSET))(nullptr);
		}

	};
}

