#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::GameData::DAO::Battle { class ObbAuraEntityDAO; }
namespace UnityEngine { class Vector2; }

#define MX_VISUAL_BATTLES_SKILLRANGE_OBBAURASKILLGUIDEPROCESS_GET_ENTITYSKILLRANGE_OFFSET UNITYSDK_OFFSET(0x1D900F0)
#define MX_VISUAL_BATTLES_SKILLRANGE_OBBAURASKILLGUIDEPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1D901B0)
#define MX_VISUAL_BATTLES_SKILLRANGE_OBBAURASKILLGUIDEPROCESS_DRAWSHAPE_OFFSET UNITYSDK_OFFSET(0x1D90B90)
#define MX_VISUAL_BATTLES_SKILLRANGE_OBBAURASKILLGUIDEPROCESS_GET_BODY2D_OFFSET UNITYSDK_OFFSET(0x1D90BB0)
#define MX_VISUAL_BATTLES_SKILLRANGE_OBBAURASKILLGUIDEPROCESS_SET_BODY2D_OFFSET UNITYSDK_OFFSET(0x1D90BC0)
#define MX_VISUAL_BATTLES_SKILLRANGE_OBBAURASKILLGUIDEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D90BE0)
#define MX_VISUAL_BATTLES_SKILLRANGE_OBBAURASKILLGUIDEPROCESS_REFRASHBODY2D_OFFSET UNITYSDK_OFFSET(0x1D90AC0)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int ObbAuraSkillGuideProcess_TypeDefinitionIndex = 20368;

	class ObbAuraSkillGuideProcess : public Il2CppObject
	{
	public:
		::MX::Core::Physics2D::Bodies::Body2D* _Body2D_k__BackingField; // 0x140

		::System::Int64 get_EntitySkillRange()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_OBBAURASKILLGUIDEPROCESS_GET_ENTITYSKILLRANGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_OBBAURASKILLGUIDEPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

		::System::Void DrawShape()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_OBBAURASKILLGUIDEPROCESS_DRAWSHAPE_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* get_Body2D()
		{
			return (return (::MX::Core::Physics2D::Bodies::Body2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_OBBAURASKILLGUIDEPROCESS_GET_BODY2D_OFFSET))(nullptr);
		}

		::System::Void set_Body2D(::MX::Core::Physics2D::Bodies::Body2D* arg)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_OBBAURASKILLGUIDEPROCESS_SET_BODY2D_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::ObbAuraEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::ObbAuraEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_OBBAURASKILLGUIDEPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RefrashBody2D(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_OBBAURASKILLGUIDEPROCESS_REFRASHBODY2D_OFFSET))(arg, arg, nullptr);
		}

	};
}

