#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG::Procedures { class CCGSkillVFXType; }
namespace MX::MinigameCCG::Procedures { class CCGSkillVFXData; }
namespace MX::MinigameCCG { class CCGSkillData; }

#define MX_MINIGAMECCG_CCGEVENT_SKILLVISUAL_GET_VFX_OFFSET UNITYSDK_OFFSET(0x1DCC090)
#define MX_MINIGAMECCG_CCGEVENT_SKILLVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC0A0)
#define MX_MINIGAMECCG_CCGEVENT_SKILLVISUAL_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1DCC110)
#define MX_MINIGAMECCG_CCGEVENT_SKILLVISUAL_GET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCC120)
#define MX_MINIGAMECCG_CCGEVENT_SKILLVISUAL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DCC130)
#define MX_MINIGAMECCG_CCGEVENT_SKILLVISUAL_GET_PLAYEFFECTSSEQUENTIALLY_OFFSET UNITYSDK_OFFSET(0x1DCC140)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_SkillVisual_TypeDefinitionIndex = 20528;

	class CCGEvent_SkillVisual : public Il2CppObject
	{
	public:
		::System::Int32 _SourceEntityId_k__BackingField; // 0x10
		::System::Int64 _SkillId_k__BackingField; // 0x18
		::MX::MinigameCCG::Procedures::CCGSkillVFXType* _Type_k__BackingField; // 0x20
		::MX::MinigameCCG::Procedures::CCGSkillVFXData* _VFX_k__BackingField; // 0x28
		::System::Boolean _PlayEffectsSequentially_k__BackingField; // 0x30

		::MX::MinigameCCG::Procedures::CCGSkillVFXData* get_VFX()
		{
			return (return (::MX::MinigameCCG::Procedures::CCGSkillVFXData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLVISUAL_GET_VFX_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::Procedures::CCGSkillVFXData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::Procedures::CCGSkillVFXData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLVISUAL_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int64 get_SkillId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLVISUAL_GET_SKILLID_OFFSET))(nullptr);
		}

		::System::Int32 get_SourceEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLVISUAL_GET_SOURCEENTITYID_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::Procedures::CCGSkillVFXType* get_Type()
		{
			return (return (::MX::MinigameCCG::Procedures::CCGSkillVFXType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLVISUAL_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_PlayEffectsSequentially()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SKILLVISUAL_GET_PLAYEFFECTSSEQUENTIALLY_OFFSET))(nullptr);
		}

	};
}

