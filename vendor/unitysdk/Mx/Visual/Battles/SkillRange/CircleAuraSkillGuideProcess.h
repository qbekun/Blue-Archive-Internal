#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::GameData::DAO::Battle { class CircleAuraEntityDAO; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }
namespace UnityEngine { class Vector2; }

#define MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAURASKILLGUIDEPROCESS_SET_BODY2D_OFFSET UNITYSDK_OFFSET(0x1D89D80)
#define MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAURASKILLGUIDEPROCESS_GET_ENTITYSKILLRANGE_OFFSET UNITYSDK_OFFSET(0x1D89DA0)
#define MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAURASKILLGUIDEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D89E20)
#define MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAURASKILLGUIDEPROCESS_DRAWSHAPE_OFFSET UNITYSDK_OFFSET(0x1D89FD0)
#define MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAURASKILLGUIDEPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1D89FF0)
#define MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAURASKILLGUIDEPROCESS_GET_BODY2D_OFFSET UNITYSDK_OFFSET(0x1D8A9D0)
#define MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAURASKILLGUIDEPROCESS_REFRASHBODY2D_OFFSET UNITYSDK_OFFSET(0x1D8A900)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int CircleAuraSkillGuideProcess_TypeDefinitionIndex = 20360;

	class CircleAuraSkillGuideProcess : public Il2CppObject
	{
	public:
		::MX::Core::Physics2D::Bodies::Body2D* _Body2D_k__BackingField; // 0x140

		::System::Void set_Body2D(::MX::Core::Physics2D::Bodies::Body2D* arg)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAURASKILLGUIDEPROCESS_SET_BODY2D_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EntitySkillRange()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAURASKILLGUIDEPROCESS_GET_ENTITYSKILLRANGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::CircleAuraEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::CircleAuraEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAURASKILLGUIDEPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawShape()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAURASKILLGUIDEPROCESS_DRAWSHAPE_OFFSET))(nullptr);
		}

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAURASKILLGUIDEPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* get_Body2D()
		{
			return (return (::MX::Core::Physics2D::Bodies::Body2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAURASKILLGUIDEPROCESS_GET_BODY2D_OFFSET))(nullptr);
		}

		::System::Void RefrashBody2D(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAURASKILLGUIDEPROCESS_REFRASHBODY2D_OFFSET))(arg, arg, nullptr);
		}

	};
}

