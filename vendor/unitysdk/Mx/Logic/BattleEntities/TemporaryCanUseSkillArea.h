#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }

#define MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_GET_RADIUSSQR_OFFSET UNITYSDK_OFFSET(0x11D04A0)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_SET_RADIUSSQR_OFFSET UNITYSDK_OFFSET(0x11D04B0)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_GET_POSITION2D_OFFSET UNITYSDK_OFFSET(0x11D04C0)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_SET_POSITION2D_OFFSET UNITYSDK_OFFSET(0x11D04D0)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x11D04E0)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_ISINRANGE_OFFSET UNITYSDK_OFFSET(0x11D0530)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_ISINRANGE_OFFSET UNITYSDK_OFFSET(0x11D0560)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11D05B0)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11D05C0)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11D0880)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11D1110)
#define MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D1F40)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int TemporaryCanUseSkillArea_TypeDefinitionIndex = 13370;

	class TemporaryCanUseSkillArea : public Il2CppObject
	{
	public:
		::System::Boolean IsHideVisual; // 0x10
		::System::String* CommandId; // 0x18
		::System::Int64 Radius; // 0x20
		::MX::Logic::Battles::GroupTag* GroupTag; // 0x28
		::UnityEngine::Vector3* Position; // 0x2C
		::System::Single _RadiusSqr_k__BackingField; // 0x38
		::UnityEngine::Vector2* _Position2D_k__BackingField; // 0x3C

		::System::Single get_RadiusSqr()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_GET_RADIUSSQR_OFFSET))(nullptr);
		}

		::System::Void set_RadiusSqr(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_SET_RADIUSSQR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Position2D()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_GET_POSITION2D_OFFSET))(nullptr);
		}

		::System::Void set_Position2D(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_SET_POSITION2D_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean IsInRange(::UnityEngine::Vector2* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_ISINRANGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInRange(::UnityEngine::Vector3* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_ISINRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::TemporaryCanUseSkillArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::TemporaryCanUseSkillArea&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::TemporaryCanUseSkillArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::TemporaryCanUseSkillArea&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TEMPORARYCANUSESKILLAREA_.CTOR_OFFSET))(nullptr);
		}

	};
}

