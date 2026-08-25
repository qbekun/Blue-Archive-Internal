#pragma once
#include "../../../unitysdk.h"

class GroundNode;
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class ObstacleEventArgs; }
namespace MX::Logic::Battles { class BattleEntitySpawnedEventArgs; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_RECEIVEOBSTACLEDESTROYED_OFFSET UNITYSDK_OFFSET(0x118F2F0)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_RELEASELISTENER_OFFSET UNITYSDK_OFFSET(0x118F310)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x118F3F0)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GET_POSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x118F550)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GET_TARGETNODE_OFFSET UNITYSDK_OFFSET(0x118F560)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GET_KEEPRELATIVEPOSITION_OFFSET UNITYSDK_OFFSET(0x118F570)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GET_ISTARGETPOINTFORMATIONBEACON_OFFSET UNITYSDK_OFFSET(0x118F580)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GET_ISCOMMANDBYBATTLEITEM_OFFSET UNITYSDK_OFFSET(0x118F5B0)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GET_ISINTERRUPTCURRENTACTION_OFFSET UNITYSDK_OFFSET(0x118F5C0)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_CHANGETARGETNODE_OFFSET UNITYSDK_OFFSET(0x118F5D0)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_SETDIRTYBITTOUPDATEPATH_OFFSET UNITYSDK_OFFSET(0x118F300)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x118F5F0)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GET_ISINSTANTMOVE_OFFSET UNITYSDK_OFFSET(0x118F600)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_BATTLE_BATTLEENTITYSPAWNED_OFFSET UNITYSDK_OFFSET(0x118F610)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GETPATHLIST_OFFSET UNITYSDK_OFFSET(0x118F690)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int ForceMoveCommandInfo_TypeDefinitionIndex = 13289;

	class ForceMoveCommandInfo : public Il2CppObject
	{
	public:
		::System::Int32 PrioritySkill; // 0x0
		::System::Int32 PriorityGroundCommand; // 0x0
		::System::Int32 _Priority_k__BackingField; // 0x10
		GroundNode* targetNode; // 0x18
		::System::Boolean _IsInstantMove_k__BackingField; // 0x20
		::System::Boolean _IsInterruptCurrentAction_k__BackingField; // 0x21
		::UnityEngine::Vector2* _PositionOffset_k__BackingField; // 0x24
		::System::Boolean _KeepRelativePosition_k__BackingField; // 0x2C
		::System::Boolean _IsCommandByBattleItem_k__BackingField; // 0x2D
		::MX::Logic::Battles::Battle* battle; // 0x30
		::System::Boolean isNeedToUpdatePathList; // 0x38
		Il2CppObject* pathList; // 0x40

		::System::Void ReceiveObstacleDestroyed(::System::Object* arg, ::MX::Logic::Battles::ObstacleEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::ObstacleEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_RECEIVEOBSTACLEDESTROYED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ReleaseListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_RELEASELISTENER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, GroundNode* arg2, ::System::Int32 arg3, ::System::Boolean arg4, ::System::Boolean arg5, ::System::Boolean arg6, ::UnityEngine::Vector2* arg7, ::System::Boolean arg8)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, GroundNode*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector2*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::UnityEngine::Vector2* get_PositionOffset()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GET_POSITIONOFFSET_OFFSET))(nullptr);
		}

		GroundNode* get_TargetNode()
		{
			return ((GroundNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GET_TARGETNODE_OFFSET))(nullptr);
		}

		::System::Boolean get_KeepRelativePosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GET_KEEPRELATIVEPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTargetPointFormationBeacon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GET_ISTARGETPOINTFORMATIONBEACON_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCommandByBattleItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GET_ISCOMMANDBYBATTLEITEM_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInterruptCurrentAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GET_ISINTERRUPTCURRENTACTION_OFFSET))(nullptr);
		}

		::System::Void ChangeTargetNode(GroundNode* arg)
		{
			((::System::Void(*)(GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_CHANGETARGETNODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDirtyBitToUpdatePath(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_SETDIRTYBITTOUPDATEPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GET_PRIORITY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInstantMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GET_ISINSTANTMOVE_OFFSET))(nullptr);
		}

		::System::Void Battle_BattleEntitySpawned(::System::Object* arg, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_BATTLE_BATTLEENTITYSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetPathList(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVECOMMANDINFO_GETPATHLIST_OFFSET))(arg, arg2, nullptr);
		}

	};
}

