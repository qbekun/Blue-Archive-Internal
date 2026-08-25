#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }
namespace MX::Logic::Battles { class SkillCardState; }

#define MX_LOGIC_BATTLEENTITIES_SKILLCARDEVENTARGS_GET_GROUPTAG_OFFSET UNITYSDK_OFFSET(0x112E1E0)
#define MX_LOGIC_BATTLEENTITIES_SKILLCARDEVENTARGS_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x112E1F0)
#define MX_LOGIC_BATTLEENTITIES_SKILLCARDEVENTARGS_GET_STATE_OFFSET UNITYSDK_OFFSET(0x112E200)
#define MX_LOGIC_BATTLEENTITIES_SKILLCARDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x112E210)
#define MX_LOGIC_BATTLEENTITIES_SKILLCARDEVENTARGS_GET_SKILLCARD_OFFSET UNITYSDK_OFFSET(0x112E290)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SkillCardEventArgs_TypeDefinitionIndex = 13056;

	class SkillCardEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroupTag* _GroupTag_k__BackingField; // 0x10
		::System::Int32 _Index_k__BackingField; // 0x14
		::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* _SkillCard_k__BackingField; // 0x18
		::MX::Logic::Battles::SkillCardState* _State_k__BackingField; // 0x20

		::MX::Logic::Battles::GroupTag* get_GroupTag()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCARDEVENTARGS_GET_GROUPTAG_OFFSET))(nullptr);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCARDEVENTARGS_GET_INDEX_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::SkillCardState* get_State()
		{
			return ((::MX::Logic::Battles::SkillCardState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCARDEVENTARGS_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::GroupTag* arg, ::System::Int32 arg2, ::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::System::Int32, ::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCARDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* get_SkillCard()
		{
			return ((::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCARDEVENTARGS_GET_SKILLCARD_OFFSET))(nullptr);
		}

	};
}

