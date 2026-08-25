#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class SkillCardSizeAppendEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDEFFECT_GET_THEMEUIPATH_OFFSET UNITYSDK_OFFSET(0x14217A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDEFFECT_GET_APPENDTHUMBNAILPATH_OFFSET UNITYSDK_OFFSET(0x14217B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDEFFECT_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x14217C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDEFFECT_GET_APPENDSIZE_OFFSET UNITYSDK_OFFSET(0x14217D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14217E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDEFFECT_GET_DATAPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1421890)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x14218A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x14218B0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int SkillCardSizeAppendEffect_TypeDefinitionIndex = 14799;

	class SkillCardSizeAppendEffect : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xD0
		::System::Int32 _EndConditionArgument_k__BackingField; // 0xD4
		::System::Boolean _IsDispellable_k__BackingField; // 0xD8
		::System::String* _ThemeUIPath_k__BackingField; // 0xE0
		::System::Int32 _AppendSize_k__BackingField; // 0xE8
		::Il2CppArray<::System::Object*>* _AppendThumbnailPath_k__BackingField; // 0xF0
		::Il2CppArray<::System::Object*>* _DataParameters_k__BackingField; // 0xF8

		::System::String* get_ThemeUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDEFFECT_GET_THEMEUIPATH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_AppendThumbnailPath()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDEFFECT_GET_APPENDTHUMBNAILPATH_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDEFFECT_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_AppendSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDEFFECT_GET_APPENDSIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::SkillCardSizeAppendEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::SkillCardSizeAppendEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DataParameters()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDEFFECT_GET_DATAPARAMETERS_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

	};
}

