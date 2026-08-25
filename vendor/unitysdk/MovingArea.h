#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace MX::Core::Physics2D::Shapes { class Shape; }
namespace MX::Logic::BattleEntities { class GroundObstacle; }

#define MOVINGAREA_GET_WALKABLEMOVINGAREALIST_OFFSET UNITYSDK_OFFSET(0x215D130)
#define MOVINGAREA_SET_WALKABLEMOVINGAREALIST_OFFSET UNITYSDK_OFFSET(0x215D140)
#define MOVINGAREA_GET_PREVIOUSWALKABLEMOVINGAREALIST_OFFSET UNITYSDK_OFFSET(0x215D150)
#define MOVINGAREA_SET_PREVIOUSWALKABLEMOVINGAREALIST_OFFSET UNITYSDK_OFFSET(0x215D160)
#define MOVINGAREA_GET_INITIALWALKABLEMOVINGAREALIST_OFFSET UNITYSDK_OFFSET(0x215D170)
#define MOVINGAREA_SET_INITIALWALKABLEMOVINGAREALIST_OFFSET UNITYSDK_OFFSET(0x215D180)
#define MOVINGAREA_GET_CONNECTEDSPAWNPOINTLIST_OFFSET UNITYSDK_OFFSET(0x215D190)
#define MOVINGAREA_SET_CONNECTEDSPAWNPOINTLIST_OFFSET UNITYSDK_OFFSET(0x215D1A0)
#define MOVINGAREA_GET_ADDEDNODEPERFRAMEXLIST_OFFSET UNITYSDK_OFFSET(0x215D1B0)
#define MOVINGAREA_SET_ADDEDNODEPERFRAMEXLIST_OFFSET UNITYSDK_OFFSET(0x215D1C0)
#define MOVINGAREA_GET_ADDEDNODEPERFRAMEYLIST_OFFSET UNITYSDK_OFFSET(0x215D1D0)
#define MOVINGAREA_SET_ADDEDNODEPERFRAMEYLIST_OFFSET UNITYSDK_OFFSET(0x215D1E0)
#define MOVINGAREA_GET_REMOVEDNODEPERFRAMEXLIST_OFFSET UNITYSDK_OFFSET(0x215D1F0)
#define MOVINGAREA_SET_REMOVEDNODEPERFRAMEXLIST_OFFSET UNITYSDK_OFFSET(0x215D200)
#define MOVINGAREA_GET_REMOVEDNODEPERFRAMEYLIST_OFFSET UNITYSDK_OFFSET(0x215D210)
#define MOVINGAREA_SET_REMOVEDNODEPERFRAMEYLIST_OFFSET UNITYSDK_OFFSET(0x215D220)
#define MOVINGAREA_GET_HEIGHTCHANGEDNODEPERFRAMEXLIST_OFFSET UNITYSDK_OFFSET(0x215D230)
#define MOVINGAREA_SET_HEIGHTCHANGEDNODEPERFRAMEXLIST_OFFSET UNITYSDK_OFFSET(0x215D240)
#define MOVINGAREA_GET_HEIGHTCHANGEDNODEPERFRAMEYLIST_OFFSET UNITYSDK_OFFSET(0x215D250)
#define MOVINGAREA_SET_HEIGHTCHANGEDNODEPERFRAMEYLIST_OFFSET UNITYSDK_OFFSET(0x215D260)
#define MOVINGAREA_GET_POSITION2D_OFFSET UNITYSDK_OFFSET(0x215D270)
#define MOVINGAREA_SET_POSITION2D_OFFSET UNITYSDK_OFFSET(0x215D280)
#define MOVINGAREA_GET_DIRECTION2D_OFFSET UNITYSDK_OFFSET(0x215D290)
#define MOVINGAREA_SET_DIRECTION2D_OFFSET UNITYSDK_OFFSET(0x215D2A0)
#define MOVINGAREA_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x215D2B0)
#define MOVINGAREA_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x215D2C0)
#define MOVINGAREA_GET_PREVIOUSHEIGHT_OFFSET UNITYSDK_OFFSET(0x215D2D0)
#define MOVINGAREA_SET_PREVIOUSHEIGHT_OFFSET UNITYSDK_OFFSET(0x215D2E0)
#define MOVINGAREA_GET_INITIALPOSITION2D_OFFSET UNITYSDK_OFFSET(0x215D2F0)
#define MOVINGAREA_SET_INITIALPOSITION2D_OFFSET UNITYSDK_OFFSET(0x215D300)
#define MOVINGAREA_GET_INITIALDIRECTION2D_OFFSET UNITYSDK_OFFSET(0x215D310)
#define MOVINGAREA_SET_INITIALDIRECTION2D_OFFSET UNITYSDK_OFFSET(0x215D320)
#define MOVINGAREA_GET_INITIALHEIGHT_OFFSET UNITYSDK_OFFSET(0x215D330)
#define MOVINGAREA_SET_INITIALHEIGHT_OFFSET UNITYSDK_OFFSET(0x215D340)
#define MOVINGAREA_GET_PREVIOUSANGLEDEGREE_OFFSET UNITYSDK_OFFSET(0x215D350)
#define MOVINGAREA_SET_PREVIOUSANGLEDEGREE_OFFSET UNITYSDK_OFFSET(0x215D360)
#define MOVINGAREA_GET_APPLYCUMULATIVEHEIGHT_OFFSET UNITYSDK_OFFSET(0x215D370)
#define MOVINGAREA_GET_RESTOREHEIGHTWHENOUTOFAREA_OFFSET UNITYSDK_OFFSET(0x215D380)
#define MOVINGAREA_GET_MOVEAIRUNIT_OFFSET UNITYSDK_OFFSET(0x215D390)
#define MOVINGAREA_GET_MOVECAMERARAIL_OFFSET UNITYSDK_OFFSET(0x215D3A0)
#define MOVINGAREA_GET_KEEPCAMERARAILPOINTDIRECTIONUNCHANGED_OFFSET UNITYSDK_OFFSET(0x215D3B0)
#define MOVINGAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x215D3C0)
#define MOVINGAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x215D3D0)
#define MOVINGAREA_INITIALIZETRANSFORM_OFFSET UNITYSDK_OFFSET(0x215DC50)
#define MOVINGAREA_APPLYTRANSFORMDIFF_OFFSET UNITYSDK_OFFSET(0x215D6B0)
#define MOVINGAREA_APPLYTRANSFORMDIFFTOCACHEDENTITIES_OFFSET UNITYSDK_OFFSET(0x215DEC0)
#define MOVINGAREA_APPLYTRANSFORMDIFFTOENTITYSPAWNERS_OFFSET UNITYSDK_OFFSET(0x215FB20)
#define MOVINGAREA_APPLYTRANSFORMDIFFTOEFFECTAREAS_OFFSET UNITYSDK_OFFSET(0x215FEB0)
#define MOVINGAREA_APPLYTRANSFORMDIFFTOAURAS_OFFSET UNITYSDK_OFFSET(0x2160430)
#define MOVINGAREA_APPLYTRANSFORMDIFFTOBATTLEITEMS_OFFSET UNITYSDK_OFFSET(0x215F390)
#define MOVINGAREA_APPLYTRANSFORMDIFFTOOBSTACLES_OFFSET UNITYSDK_OFFSET(0x215EEB0)
#define MOVINGAREA_APPLYTRANSFORMDIFFTOCHARACTERS_OFFSET UNITYSDK_OFFSET(0x215E620)
#define MOVINGAREA_APPLYSKILLACTIONTRANSFORMDIFFTOSUPPORTERS_OFFSET UNITYSDK_OFFSET(0x2160E10)
#define MOVINGAREA_APPLYTRANSFORMDIFFTOSPAWNPOINTS_OFFSET UNITYSDK_OFFSET(0x215E020)
#define MOVINGAREA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2161020)
#define MOVINGAREA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x2161030)
#define MOVINGAREA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2161520)
#define MOVINGAREA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2161A80)
#define MOVINGAREA__.CTOR_B__89_0_OFFSET UNITYSDK_OFFSET(0x2162960)
#define MOVINGAREA__APPLYTRANSFORMDIFFTOOBSTACLES_G__APPLYTRANSFORMDIFFTOOBSTACLESINTERNAL|97_0_OFFSET UNITYSDK_OFFSET(0x2160AB0)

	inline static constexpr unsigned int MovingArea_TypeDefinitionIndex = 3998;

	class MovingArea : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::Battle* battle; // 0x10
		Il2CppObject* _WalkableMovingAreaList_k__BackingField; // 0x18
		Il2CppObject* _PreviousWalkableMovingAreaList_k__BackingField; // 0x20
		Il2CppObject* _InitialWalkableMovingAreaList_k__BackingField; // 0x28
		Il2CppObject* _ConnectedSpawnPointList_k__BackingField; // 0x30
		Il2CppObject* _AddedNodePerFrameXList_k__BackingField; // 0x38
		Il2CppObject* _AddedNodePerFrameYList_k__BackingField; // 0x40
		Il2CppObject* _RemovedNodePerFrameXList_k__BackingField; // 0x48
		Il2CppObject* _RemovedNodePerFrameYList_k__BackingField; // 0x50
		Il2CppObject* _HeightChangedNodePerFrameXList_k__BackingField; // 0x58
		Il2CppObject* _HeightChangedNodePerFrameYList_k__BackingField; // 0x60
		::UnityEngine::Vector2* _Position2D_k__BackingField; // 0x68
		::UnityEngine::Vector2* _Direction2D_k__BackingField; // 0x70
		::System::Single _Height_k__BackingField; // 0x78
		::System::Single _PreviousHeight_k__BackingField; // 0x7C
		::UnityEngine::Vector2* _InitialPosition2D_k__BackingField; // 0x80
		::UnityEngine::Vector2* _InitialDirection2D_k__BackingField; // 0x88
		::System::Single _InitialHeight_k__BackingField; // 0x90
		::System::Single _PreviousAngleDegree_k__BackingField; // 0x94
		::System::Boolean _ApplyCumulativeHeight_k__BackingField; // 0x98
		::System::Boolean _RestoreHeightWhenOutOfArea_k__BackingField; // 0x99
		::System::Boolean _MoveAirUnit_k__BackingField; // 0x9A
		::System::Boolean _MoveCameraRail_k__BackingField; // 0x9B
		::System::Boolean _KeepCameraRailPointDirectionUnchanged_k__BackingField; // 0x9C

		Il2CppObject* get_WalkableMovingAreaList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_WALKABLEMOVINGAREALIST_OFFSET))(nullptr);
		}

		::System::Void set_WalkableMovingAreaList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_WALKABLEMOVINGAREALIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PreviousWalkableMovingAreaList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_PREVIOUSWALKABLEMOVINGAREALIST_OFFSET))(nullptr);
		}

		::System::Void set_PreviousWalkableMovingAreaList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_PREVIOUSWALKABLEMOVINGAREALIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_InitialWalkableMovingAreaList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_INITIALWALKABLEMOVINGAREALIST_OFFSET))(nullptr);
		}

		::System::Void set_InitialWalkableMovingAreaList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_INITIALWALKABLEMOVINGAREALIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ConnectedSpawnPointList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_CONNECTEDSPAWNPOINTLIST_OFFSET))(nullptr);
		}

		::System::Void set_ConnectedSpawnPointList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_CONNECTEDSPAWNPOINTLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AddedNodePerFrameXList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_ADDEDNODEPERFRAMEXLIST_OFFSET))(nullptr);
		}

		::System::Void set_AddedNodePerFrameXList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_ADDEDNODEPERFRAMEXLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AddedNodePerFrameYList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_ADDEDNODEPERFRAMEYLIST_OFFSET))(nullptr);
		}

		::System::Void set_AddedNodePerFrameYList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_ADDEDNODEPERFRAMEYLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RemovedNodePerFrameXList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_REMOVEDNODEPERFRAMEXLIST_OFFSET))(nullptr);
		}

		::System::Void set_RemovedNodePerFrameXList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_REMOVEDNODEPERFRAMEXLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RemovedNodePerFrameYList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_REMOVEDNODEPERFRAMEYLIST_OFFSET))(nullptr);
		}

		::System::Void set_RemovedNodePerFrameYList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_REMOVEDNODEPERFRAMEYLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_HeightChangedNodePerFrameXList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_HEIGHTCHANGEDNODEPERFRAMEXLIST_OFFSET))(nullptr);
		}

		::System::Void set_HeightChangedNodePerFrameXList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_HEIGHTCHANGEDNODEPERFRAMEXLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_HeightChangedNodePerFrameYList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_HEIGHTCHANGEDNODEPERFRAMEYLIST_OFFSET))(nullptr);
		}

		::System::Void set_HeightChangedNodePerFrameYList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_HEIGHTCHANGEDNODEPERFRAMEYLIST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Position2D()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_POSITION2D_OFFSET))(nullptr);
		}

		::System::Void set_Position2D(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_POSITION2D_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Direction2D()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_DIRECTION2D_OFFSET))(nullptr);
		}

		::System::Void set_Direction2D(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_DIRECTION2D_OFFSET))(arg, nullptr);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_Height(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_HEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single get_PreviousHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_PREVIOUSHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_PreviousHeight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_PREVIOUSHEIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_InitialPosition2D()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_INITIALPOSITION2D_OFFSET))(nullptr);
		}

		::System::Void set_InitialPosition2D(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_INITIALPOSITION2D_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_InitialDirection2D()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_INITIALDIRECTION2D_OFFSET))(nullptr);
		}

		::System::Void set_InitialDirection2D(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_INITIALDIRECTION2D_OFFSET))(arg, nullptr);
		}

		::System::Single get_InitialHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_INITIALHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_InitialHeight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_INITIALHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single get_PreviousAngleDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_PREVIOUSANGLEDEGREE_OFFSET))(nullptr);
		}

		::System::Void set_PreviousAngleDegree(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SET_PREVIOUSANGLEDEGREE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyCumulativeHeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_APPLYCUMULATIVEHEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_RestoreHeightWhenOutOfArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_RESTOREHEIGHTWHENOUTOFAREA_OFFSET))(nullptr);
		}

		::System::Boolean get_MoveAirUnit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_MOVEAIRUNIT_OFFSET))(nullptr);
		}

		::System::Boolean get_MoveCameraRail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_MOVECAMERARAIL_OFFSET))(nullptr);
		}

		::System::Boolean get_KeepCameraRailPointDirectionUnchanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_GET_KEEPCAMERARAILPOINTDIRECTIONUNCHANGED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, Il2CppObject* arg7, Il2CppObject* arg8, Il2CppObject* arg9, ::UnityEngine::Vector2* arg10, ::UnityEngine::Vector2* arg11, ::System::Single arg12, ::System::Boolean arg13, ::System::Boolean arg14, ::System::Boolean arg15, ::System::Boolean arg16, ::System::Boolean arg17)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, nullptr);
		}

		::System::Void InitializeTransform(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_INITIALIZETRANSFORM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ApplyTransformDiff(::System::Int32 arg, ::UnityEngine::Vector3* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_APPLYTRANSFORMDIFF_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ApplyTransformDiffToCachedEntities(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_APPLYTRANSFORMDIFFTOCACHEDENTITIES_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ApplyTransformDiffToEntitySpawners(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_APPLYTRANSFORMDIFFTOENTITYSPAWNERS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ApplyTransformDiffToEffectAreas(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_APPLYTRANSFORMDIFFTOEFFECTAREAS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ApplyTransformDiffToAuras(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_APPLYTRANSFORMDIFFTOAURAS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ApplyTransformDiffToBattleItems(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_APPLYTRANSFORMDIFFTOBATTLEITEMS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ApplyTransformDiffToObstacles(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_APPLYTRANSFORMDIFFTOOBSTACLES_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ApplyTransformDiffToCharacters(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_APPLYTRANSFORMDIFFTOCHARACTERS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ApplySkillActionTransformDiffToSupporters(Il2CppObject* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_APPLYSKILLACTIONTRANSFORMDIFFTOSUPPORTERS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ApplyTransformDiffToSpawnPoints(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_APPLYTRANSFORMDIFFTOSPAWNPOINTS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, MovingArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, MovingArea&*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, MovingArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, MovingArea&*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _.ctor_b__89_0(::MX::Core::Physics2D::Shapes::Shape* arg)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::Shape*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA__.CTOR_B__89_0_OFFSET))(arg, nullptr);
		}

		::System::Void _ApplyTransformDiffToObstacles_g__ApplyTransformDiffToObstaclesInternal|97_0(::MX::Logic::BattleEntities::GroundObstacle* arg, <>c__DisplayClass97_0&* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::GroundObstacle*, <>c__DisplayClass97_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREA__APPLYTRANSFORMDIFFTOOBSTACLES_G__APPLYTRANSFORMDIFFTOOBSTACLESINTERNAL|97_0_OFFSET))(arg, arg2, nullptr);
		}

	};

