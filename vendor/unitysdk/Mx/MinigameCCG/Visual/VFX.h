#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::Procedures { class SkillVFXInfo; }
namespace UnityEngine { class Transform; }

#define MX_MINIGAMECCG_VISUAL_VFX_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1E8BE40)
#define MX_MINIGAMECCG_VISUAL_VFX_SET_VISUALENTITY_OFFSET UNITYSDK_OFFSET(0x1E8C1E0)
#define MX_MINIGAMECCG_VISUAL_VFX_SET_INFO_OFFSET UNITYSDK_OFFSET(0x1E8C1F0)
#define MX_MINIGAMECCG_VISUAL_VFX_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E8C200)
#define MX_MINIGAMECCG_VISUAL_VFX_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C210)
#define MX_MINIGAMECCG_VISUAL_VFX_GET_VISUALENTITY_OFFSET UNITYSDK_OFFSET(0x1E8C260)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VFX_TypeDefinitionIndex = 21177;

	class VFX : public Il2CppObject
	{
	public:
		CCGVisualEntity* _VisualEntity_k__BackingField; // 0x10
		::MX::MinigameCCG::Procedures::SkillVFXInfo* _Info_k__BackingField; // 0x18
		::System::Int32 targetPlayerId; // 0x20

		::UnityEngine::Transform* get_Parent()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFX_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Void set_VisualEntity(CCGVisualEntity* arg)
		{
			((::System::Void(*)(CCGVisualEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFX_SET_VISUALENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_Info(::MX::MinigameCCG::Procedures::SkillVFXInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::Procedures::SkillVFXInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFX_SET_INFO_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::Procedures::SkillVFXInfo* get_Info()
		{
			return (return (::MX::MinigameCCG::Procedures::SkillVFXInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFX_GET_INFO_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::Procedures::SkillVFXInfo* arg, CCGVisualEntity* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::Procedures::SkillVFXInfo*, CCGVisualEntity*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFX_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		CCGVisualEntity* get_VisualEntity()
		{
			return (return (CCGVisualEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFX_GET_VISUALENTITY_OFFSET))(nullptr);
		}

	};
}

