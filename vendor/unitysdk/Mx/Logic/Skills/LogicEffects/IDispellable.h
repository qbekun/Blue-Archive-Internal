#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace MX::Core::Services { class Hash64; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_IDISPELLABLE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IDISPELLABLE_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IDISPELLABLE_GET_TEMPLATEIDHASH_OFFSET UNITYSDK_OFFSET(0x141BF10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IDISPELLABLE_GET_LOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int IDispellable_TypeDefinitionIndex = 14770;

	class IDispellable : public Il2CppObject
	{
	public:
		::FlatData::LogicEffectCategory* get_Category()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IDISPELLABLE_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::String* get_TemplateId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IDISPELLABLE_GET_TEMPLATEID_OFFSET))(nullptr);
		}

		::MX::Core::Services::Hash64* get_TemplateIdHash()
		{
			return ((::MX::Core::Services::Hash64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IDISPELLABLE_GET_TEMPLATEIDHASH_OFFSET))(nullptr);
		}

		::System::String* get_LogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IDISPELLABLE_GET_LOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

	};
}

