#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }

#define MX_LOGIC_BATTLEENTITIES_DEBUFFEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x112E840)
#define MX_LOGIC_BATTLEENTITIES_DEBUFFEVENTARGS_GET_LOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x112E990)
#define MX_LOGIC_BATTLEENTITIES_DEBUFFEVENTARGS_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x112E9A0)
#define MX_LOGIC_BATTLEENTITIES_DEBUFFEVENTARGS_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x112E9B0)
#define MX_LOGIC_BATTLEENTITIES_DEBUFFEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x112E9C0)
#define MX_LOGIC_BATTLEENTITIES_DEBUFFEVENTARGS_GET_LOGICEFFECTTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x112E9D0)
#define MX_LOGIC_BATTLEENTITIES_DEBUFFEVENTARGS_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x112E9E0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int DebuffEventArgs_TypeDefinitionIndex = 13060;

	class DebuffEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _InvokerId_k__BackingField; // 0x10
		::System::String* _LogicEffectGroupId_k__BackingField; // 0x18
		::System::String* _LogicEffectTemplateId_k__BackingField; // 0x20
		::System::Int32 _Level_k__BackingField; // 0x28
		::System::Int32 _DurationFrame_k__BackingField; // 0x2C
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x30

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Skills::LogicEffects::StatChangeEffect*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DEBUFFEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* get_LogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DEBUFFEVENTARGS_GET_LOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DEBUFFEVENTARGS_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DEBUFFEVENTARGS_GET_LEVEL_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DEBUFFEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::String* get_LogicEffectTemplateId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DEBUFFEVENTARGS_GET_LOGICEFFECTTEMPLATEID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DEBUFFEVENTARGS_GET_INVOKERID_OFFSET))(nullptr);
		}

	};
}

