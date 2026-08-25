#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class SummonEntityDAO; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }

#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONSKILLGUIDEPROCESS_GET_POSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1DA2830)
#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONSKILLGUIDEPROCESS_GET_OFFSETDIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1DA2850)
#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONSKILLGUIDEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2870)
#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONSKILLGUIDEPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1DA28A0)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int SummonSkillGuideProcess_TypeDefinitionIndex = 20400;

	class SummonSkillGuideProcess : public Il2CppObject
	{
	public:
		::MX::GameData::DAO::Battle::SummonEntityDAO* levelSummonEntityData; // 0x140

		::UnityEngine::Vector2* get_PositionOffset()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONSKILLGUIDEPROCESS_GET_POSITIONOFFSET_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SpawnDirectionTypes* get_OffsetDirectionType()
		{
			return (return (::MX::Logic::Skills::SpawnDirectionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONSKILLGUIDEPROCESS_GET_OFFSETDIRECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::SummonEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::SummonEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONSKILLGUIDEPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONSKILLGUIDEPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

	};
}

