#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace UnityEngine { class Vector2; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::GameData::DAO::Battle { class AreaEntityDAO; }

#define MX_VISUAL_BATTLES_SKILLRANGE_AREASKILLGUIDEPROCESS_GET_BODY2D_OFFSET UNITYSDK_OFFSET(0x1D88CC0)
#define MX_VISUAL_BATTLES_SKILLRANGE_AREASKILLGUIDEPROCESS_REFRESHBODY2D_OFFSET UNITYSDK_OFFSET(0x1D88CD0)
#define MX_VISUAL_BATTLES_SKILLRANGE_AREASKILLGUIDEPROCESS_SET_BODY2D_OFFSET UNITYSDK_OFFSET(0x1D88DE0)
#define MX_VISUAL_BATTLES_SKILLRANGE_AREASKILLGUIDEPROCESS_DRAWSHAPE_OFFSET UNITYSDK_OFFSET(0x1D88E00)
#define MX_VISUAL_BATTLES_SKILLRANGE_AREASKILLGUIDEPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1D88E10)
#define MX_VISUAL_BATTLES_SKILLRANGE_AREASKILLGUIDEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D89960)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int AreaSkillGuideProcess_TypeDefinitionIndex = 20357;

	class AreaSkillGuideProcess : public Il2CppObject
	{
	public:
		::MX::Core::Physics2D::Bodies::Body2D* _Body2D_k__BackingField; // 0x140

		::MX::Core::Physics2D::Bodies::Body2D* get_Body2D()
		{
			return (return (::MX::Core::Physics2D::Bodies::Body2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_AREASKILLGUIDEPROCESS_GET_BODY2D_OFFSET))(nullptr);
		}

		::System::Void RefreshBody2D(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_AREASKILLGUIDEPROCESS_REFRESHBODY2D_OFFSET))(arg, nullptr);
		}

		::System::Void set_Body2D(::MX::Core::Physics2D::Bodies::Body2D* arg)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_AREASKILLGUIDEPROCESS_SET_BODY2D_OFFSET))(arg, nullptr);
		}

		::System::Void DrawShape()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_AREASKILLGUIDEPROCESS_DRAWSHAPE_OFFSET))(nullptr);
		}

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_AREASKILLGUIDEPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::AreaEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::AreaEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_AREASKILLGUIDEPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

