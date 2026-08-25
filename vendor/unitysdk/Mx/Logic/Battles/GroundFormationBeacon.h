#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FormationLine; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace UnityEngine { class Vector2; }
namespace FlatData { class GroundNodeType; }
namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class LastFailedPathInfo; }
class GroundNode;
namespace MX::Logic::Battles { class ObstacleEventArgs; }
namespace MX::Logic::Battles { class BattleEntitySpawnedEventArgs; }

#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_BATTLE_OBSTACLEDESTROYED_OFFSET UNITYSDK_OFFSET(0x13992B0)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GET_PATHLIST_OFFSET UNITYSDK_OFFSET(0x13992C0)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SET_LINEINDEX_OFFSET UNITYSDK_OFFSET(0x13992D0)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GETPATHTOCURPOSITIONINFORMATIONBEACON_OFFSET UNITYSDK_OFFSET(0x1395680)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_.CTOR_OFFSET UNITYSDK_OFFSET(0x138F770)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SETDIRTYBITTOUPDATEPATH_OFFSET UNITYSDK_OFFSET(0x138C6A0)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SET_MYPOSITIONRATIOINGROUP_OFFSET UNITYSDK_OFFSET(0x1399650)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SET_MAXPOSITIONCHARACTER_OFFSET UNITYSDK_OFFSET(0x1399660)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GETMAXPOSITIONRATIOINFORMATIONBEACONPATHOFCHARACTERGROUP_OFFSET UNITYSDK_OFFSET(0x13992E0)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GET_MAXPOSITIONCHARACTER_OFFSET UNITYSDK_OFFSET(0x13998A0)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GET_MYPOSITIONRATIOINGROUP_OFFSET UNITYSDK_OFFSET(0x13998B0)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GET_MINPOSITIONRATIOINGROUP_OFFSET UNITYSDK_OFFSET(0x13998C0)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GET_LINEINDEX_OFFSET UNITYSDK_OFFSET(0x13998D0)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SET_LINE_OFFSET UNITYSDK_OFFSET(0x13998E0)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SET_PATHLIST_OFFSET UNITYSDK_OFFSET(0x13998F0)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1399900)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_CREATEFORMATIONBEACONPATHINSECTION_OFFSET UNITYSDK_OFFSET(0x13941D0)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GETPOSITIONRATIOINFORMATIONBEACONPATH_OFFSET UNITYSDK_OFFSET(0x1399670)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SET_MINPOSITIONRATIOINGROUP_OFFSET UNITYSDK_OFFSET(0x1399910)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GET_MAXPOSITIONRATIOINGROUP_OFFSET UNITYSDK_OFFSET(0x1399920)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_BATTLE_BATTLEENTITYSPAWNED_OFFSET UNITYSDK_OFFSET(0x1399930)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SET_MAXPOSITIONRATIOINGROUP_OFFSET UNITYSDK_OFFSET(0x13999B0)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GET_LINE_OFFSET UNITYSDK_OFFSET(0x13999C0)
#define MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x13999D0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundFormationBeacon_TypeDefinitionIndex = 14438;

	class GroundFormationBeacon : public Il2CppObject
	{
	public:
		::FlatData::FormationLine* _Line_k__BackingField; // 0x10
		::System::Int32 _LineIndex_k__BackingField; // 0x14
		Il2CppObject* _PathList_k__BackingField; // 0x18
		::System::Int32 ignoreAStarIndexInPathList; // 0x20
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _MaxPositionCharacter_k__BackingField; // 0x28
		::System::Single _MaxPositionRatioInGroup_k__BackingField; // 0x30
		::System::Single _MinPositionRatioInGroup_k__BackingField; // 0x34
		::System::Single _MyPositionRatioInGroup_k__BackingField; // 0x38
		::UnityEngine::Vector2* _Offset_k__BackingField; // 0x3C
		::System::Boolean isNeedToUpdatePathList; // 0x44
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* ownerCharacter; // 0x48
		::System::Boolean checkTSSBlocked; // 0x50
		::FlatData::GroundNodeType* passableNodeType; // 0x54
		::MX::Logic::Battles::CharacterGroup* ownerCharacterGroup; // 0x58
		::MX::Logic::Battles::Battle* battle; // 0x60
		::MX::Logic::BattleEntities::LastFailedPathInfo* lastFailedPathInfo; // 0x68
		GroundNode* lastTargetStartNode; // 0x70
		Il2CppObject* lastMoveList; // 0x78

		::System::Void Battle_ObstacleDestroyed(::System::Object* arg, ::MX::Logic::Battles::ObstacleEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::ObstacleEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_BATTLE_OBSTACLEDESTROYED_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_PathList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GET_PATHLIST_OFFSET))(nullptr);
		}

		::System::Void set_LineIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SET_LINEINDEX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPathToCurPositionInFormationBeacon(::System::Boolean arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GETPATHTOCURPOSITIONINFORMATIONBEACON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::CharacterGroup* arg2, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::CharacterGroup*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetDirtyBitToUpdatePath(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SETDIRTYBITTOUPDATEPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_MyPositionRatioInGroup(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SET_MYPOSITIONRATIOINGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaxPositionCharacter(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SET_MAXPOSITIONCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Single GetMaxPositionRatioInFormationBeaconPathOfCharacterGroup(::System::Boolean arg)
		{
			return ((::System::Single(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GETMAXPOSITIONRATIOINFORMATIONBEACONPATHOFCHARACTERGROUP_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_MaxPositionCharacter()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GET_MAXPOSITIONCHARACTER_OFFSET))(nullptr);
		}

		::System::Single get_MyPositionRatioInGroup()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GET_MYPOSITIONRATIOINGROUP_OFFSET))(nullptr);
		}

		::System::Single get_MinPositionRatioInGroup()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GET_MINPOSITIONRATIOINGROUP_OFFSET))(nullptr);
		}

		::System::Int32 get_LineIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GET_LINEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_Line(::FlatData::FormationLine* arg)
		{
			((::System::Void(*)(::FlatData::FormationLine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SET_LINE_OFFSET))(arg, nullptr);
		}

		::System::Void set_PathList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SET_PATHLIST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Offset()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GET_OFFSET_OFFSET))(nullptr);
		}

		::System::Void CreateFormationBeaconPathInSection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_CREATEFORMATIONBEACONPATHINSECTION_OFFSET))(nullptr);
		}

		::System::Single GetPositionRatioInFormationBeaconPath()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GETPOSITIONRATIOINFORMATIONBEACONPATH_OFFSET))(nullptr);
		}

		::System::Void set_MinPositionRatioInGroup(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SET_MINPOSITIONRATIOINGROUP_OFFSET))(arg, nullptr);
		}

		::System::Single get_MaxPositionRatioInGroup()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GET_MAXPOSITIONRATIOINGROUP_OFFSET))(nullptr);
		}

		::System::Void Battle_BattleEntitySpawned(::System::Object* arg, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_BATTLE_BATTLEENTITYSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_MaxPositionRatioInGroup(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SET_MAXPOSITIONRATIOINGROUP_OFFSET))(arg, nullptr);
		}

		::FlatData::FormationLine* get_Line()
		{
			return ((::FlatData::FormationLine*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_GET_LINE_OFFSET))(nullptr);
		}

		::System::Void set_Offset(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDFORMATIONBEACON_SET_OFFSET_OFFSET))(arg, nullptr);
		}

	};
}

