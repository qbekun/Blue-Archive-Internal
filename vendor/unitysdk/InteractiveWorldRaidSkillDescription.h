#pragma once
#include "unitysdk.h"

namespace FlatData { class SkillSlotShowType; }
namespace FlatData { class SkillSlotHighLightType; }
namespace FlatData { class EchelonExtensionType; }
class InteractiveWorldRaidSkillDescription;

#define INTERACTIVEWORLDRAIDSKILLDESCRIPTION_GET_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x262FFE0)
#define INTERACTIVEWORLDRAIDSKILLDESCRIPTION_SET_HIGHLIGHTRESOURCE_OFFSET UNITYSDK_OFFSET(0x262FFF0)
#define INTERACTIVEWORLDRAIDSKILLDESCRIPTION_SET_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x2630000)
#define INTERACTIVEWORLDRAIDSKILLDESCRIPTION_CLONE_OFFSET UNITYSDK_OFFSET(0x2630010)
#define INTERACTIVEWORLDRAIDSKILLDESCRIPTION_GET_BOSSECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x26300B0)
#define INTERACTIVEWORLDRAIDSKILLDESCRIPTION_GET_HIGHLIGHTRESOURCE_OFFSET UNITYSDK_OFFSET(0x26300C0)
#define INTERACTIVEWORLDRAIDSKILLDESCRIPTION_SET_SHOWSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x26300D0)
#define INTERACTIVEWORLDRAIDSKILLDESCRIPTION_SET_GLOBALSKILLREMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x26300E0)
#define INTERACTIVEWORLDRAIDSKILLDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x26300A0)
#define INTERACTIVEWORLDRAIDSKILLDESCRIPTION_SET_BOSSECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x26300F0)
#define INTERACTIVEWORLDRAIDSKILLDESCRIPTION_GET_SHOWSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x2630100)
#define INTERACTIVEWORLDRAIDSKILLDESCRIPTION_GET_GLOBALSKILLREMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x2630110)

	inline static constexpr unsigned int InteractiveWorldRaidSkillDescription_TypeDefinitionIndex = 6565;

	class InteractiveWorldRaidSkillDescription : public Il2CppObject
	{
	public:
		::System::Int64 _GlobalSkillRemoveCondition_k__BackingField; // 0x10
		::System::String* _SkillGroupId_k__BackingField; // 0x18
		::FlatData::SkillSlotShowType* _ShowSkillSlot_k__BackingField; // 0x20
		::FlatData::SkillSlotHighLightType* _HighlightResource_k__BackingField; // 0x24
		::FlatData::EchelonExtensionType* _BossEchelonExtensionType_k__BackingField; // 0x28

		::System::String* get_SkillGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSKILLDESCRIPTION_GET_SKILLGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_HighlightResource(::FlatData::SkillSlotHighLightType* arg)
		{
			((::System::Void(*)(::FlatData::SkillSlotHighLightType*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSKILLDESCRIPTION_SET_HIGHLIGHTRESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SkillGroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSKILLDESCRIPTION_SET_SKILLGROUPID_OFFSET))(str, nullptr);
		}

		InteractiveWorldRaidSkillDescription* Clone()
		{
			return ((InteractiveWorldRaidSkillDescription*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSKILLDESCRIPTION_CLONE_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_BossEchelonExtensionType()
		{
			return ((::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSKILLDESCRIPTION_GET_BOSSECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		::FlatData::SkillSlotHighLightType* get_HighlightResource()
		{
			return ((::FlatData::SkillSlotHighLightType*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSKILLDESCRIPTION_GET_HIGHLIGHTRESOURCE_OFFSET))(nullptr);
		}

		::System::Void set_ShowSkillSlot(::FlatData::SkillSlotShowType* arg)
		{
			((::System::Void(*)(::FlatData::SkillSlotShowType*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSKILLDESCRIPTION_SET_SHOWSKILLSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void set_GlobalSkillRemoveCondition(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSKILLDESCRIPTION_SET_GLOBALSKILLREMOVECONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSKILLDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_BossEchelonExtensionType(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSKILLDESCRIPTION_SET_BOSSECHELONEXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::SkillSlotShowType* get_ShowSkillSlot()
		{
			return ((::FlatData::SkillSlotShowType*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSKILLDESCRIPTION_GET_SHOWSKILLSLOT_OFFSET))(nullptr);
		}

		::System::Int64 get_GlobalSkillRemoveCondition()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSKILLDESCRIPTION_GET_GLOBALSKILLREMOVECONDITION_OFFSET))(nullptr);
		}

	};

