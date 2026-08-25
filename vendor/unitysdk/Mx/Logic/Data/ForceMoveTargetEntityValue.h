#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::GameData::DAO::Battle { class ForceMoveTargetEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_FORCEMOVETARGETENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1246810)
#define MX_LOGIC_DATA_FORCEMOVETARGETENTITYVALUE_SET_SPAWNSAMEGRIDLAYERASINVOKER_OFFSET UNITYSDK_OFFSET(0x1246BA0)
#define MX_LOGIC_DATA_FORCEMOVETARGETENTITYVALUE_GET_WORLDPOSITIONTOMOVE_OFFSET UNITYSDK_OFFSET(0x1246BB0)
#define MX_LOGIC_DATA_FORCEMOVETARGETENTITYVALUE_GET_ABILITIES_OFFSET UNITYSDK_OFFSET(0x1246BC0)
#define MX_LOGIC_DATA_FORCEMOVETARGETENTITYVALUE_GET_MOVEDELAY_OFFSET UNITYSDK_OFFSET(0x1246BD0)
#define MX_LOGIC_DATA_FORCEMOVETARGETENTITYVALUE_GET_SPAWNSAMEGRIDLAYERASINVOKER_OFFSET UNITYSDK_OFFSET(0x1246BE0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ForceMoveTargetEntityValue_TypeDefinitionIndex = 13963;

	class ForceMoveTargetEntityValue : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* _WorldPositionToMove_k__BackingField; // 0x160
		::System::Int32 _MoveDelay_k__BackingField; // 0x168
		Il2CppObject* _Abilities_k__BackingField; // 0x170
		::System::Boolean _SpawnSameGridLayerAsInvoker_k__BackingField; // 0x178

		::System::Void .ctor(::MX::GameData::DAO::Battle::ForceMoveTargetEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ForceMoveTargetEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEMOVETARGETENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void set_SpawnSameGridLayerAsInvoker(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEMOVETARGETENTITYVALUE_SET_SPAWNSAMEGRIDLAYERASINVOKER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_WorldPositionToMove()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEMOVETARGETENTITYVALUE_GET_WORLDPOSITIONTOMOVE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Abilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEMOVETARGETENTITYVALUE_GET_ABILITIES_OFFSET))(nullptr);
		}

		::System::Int32 get_MoveDelay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEMOVETARGETENTITYVALUE_GET_MOVEDELAY_OFFSET))(nullptr);
		}

		::System::Boolean get_SpawnSameGridLayerAsInvoker()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEMOVETARGETENTITYVALUE_GET_SPAWNSAMEGRIDLAYERASINVOKER_OFFSET))(nullptr);
		}

	};
}

