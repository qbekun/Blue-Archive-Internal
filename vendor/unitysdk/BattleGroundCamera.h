#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Camera; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Vector3; }
class CameraLogicBase;
class BattleCamera;
class RenderingAreaController;
class GroundCamera;
class CharacterVisual;
class CameraInfo;
class BattleGroundCamera;

#define BATTLEGROUNDCAMERA_LOADTABLE_OFFSET UNITYSDK_OFFSET(0xE43180)
#define BATTLEGROUNDCAMERA_UPDATECAMERALOGIC_OFFSET UNITYSDK_OFFSET(0xE43390)
#define BATTLEGROUNDCAMERA_ACTIVATEFOCUSCAMERA_OFFSET UNITYSDK_OFFSET(0xE433E0)
#define BATTLEGROUNDCAMERA__INITIALIZE_G__COPYINSPECTORVALUEFROM|58_0_OFFSET UNITYSDK_OFFSET(0xE43C60)
#define BATTLEGROUNDCAMERA_PUTTARGETONRAIL_OFFSET UNITYSDK_OFFSET(0xE43D40)
#define BATTLEGROUNDCAMERA_GET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0xE44560)
#define BATTLEGROUNDCAMERA_SET_ACCCAMMOVE_OFFSET UNITYSDK_OFFSET(0xE44570)
#define BATTLEGROUNDCAMERA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE44580)
#define BATTLEGROUNDCAMERA_SETRAILPOINTS_OFFSET UNITYSDK_OFFSET(0xE446F0)
#define BATTLEGROUNDCAMERA_CREATECAMERALOGICS_OFFSET UNITYSDK_OFFSET(0xE44A30)
#define BATTLEGROUNDCAMERA_REGISTERCHARACTER_OFFSET UNITYSDK_OFFSET(0xE44BD0)
#define BATTLEGROUNDCAMERA_ZOOMWITHBATTLELETTERBOX_OFFSET UNITYSDK_OFFSET(0xE44C20)
#define BATTLEGROUNDCAMERA_SWITCHCAMERALOGIC_OFFSET UNITYSDK_OFFSET(0xE43AB0)
#define BATTLEGROUNDCAMERA_GET_CURRENTACCELERATE_OFFSET UNITYSDK_OFFSET(0xE450B0)
#define BATTLEGROUNDCAMERA_TURNONCAMERALOGIC_OFFSET UNITYSDK_OFFSET(0xE450D0)
#define BATTLEGROUNDCAMERA_START_OFFSET UNITYSDK_OFFSET(0xE451B0)
#define BATTLEGROUNDCAMERA_INITCAMERALOCATION_OFFSET UNITYSDK_OFFSET(0xE45270)
#define BATTLEGROUNDCAMERA_ONBATTLEFINISHED_OFFSET UNITYSDK_OFFSET(0xE457F0)
#define BATTLEGROUNDCAMERA_RESETLOCATION_OFFSET UNITYSDK_OFFSET(0xE44EF0)
#define BATTLEGROUNDCAMERA_SETRENDERINGAREA_OFFSET UNITYSDK_OFFSET(0xE45B00)
#define BATTLEGROUNDCAMERA_PUTTARGETONRAILUSINGCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0xE442D0)
#define BATTLEGROUNDCAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE45F90)
#define BATTLEGROUNDCAMERA_.CCTOR_OFFSET UNITYSDK_OFFSET(0xE460D0)
#define BATTLEGROUNDCAMERA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE46110)
#define BATTLEGROUNDCAMERA_GET_VIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xE46960)
#define BATTLEGROUNDCAMERA_SETBATTLECAMERA_OFFSET UNITYSDK_OFFSET(0xE46970)
#define BATTLEGROUNDCAMERA_MOVEMENTOVERRIDE_OFFSET UNITYSDK_OFFSET(0xE45AE0)
#define BATTLEGROUNDCAMERA_INITBATTLECAMERA_OFFSET UNITYSDK_OFFSET(0xE46A40)
#define BATTLEGROUNDCAMERA_GET_CALCCAMERA_OFFSET UNITYSDK_OFFSET(0xE46CE0)
#define BATTLEGROUNDCAMERA_TURNOFFCAMERALOGIC_OFFSET UNITYSDK_OFFSET(0xE46CF0)
#define BATTLEGROUNDCAMERA_REFRESHFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0xE46AD0)
#define BATTLEGROUNDCAMERA_APPLYFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0xE45AD0)
#define BATTLEGROUNDCAMERA_GET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0xE46D00)
#define BATTLEGROUNDCAMERA_EXCLUDETARGETS_OFFSET UNITYSDK_OFFSET(0xE46D10)
#define BATTLEGROUNDCAMERA_SET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0xE46D40)
#define BATTLEGROUNDCAMERA_MOVESMOOTHLY_OFFSET UNITYSDK_OFFSET(0xE46230)
#define BATTLEGROUNDCAMERA_GET_CAMERAINFOLIST_OFFSET UNITYSDK_OFFSET(0xE46D50)
#define BATTLEGROUNDCAMERA_INCLUDETARGETS_OFFSET UNITYSDK_OFFSET(0xE46DA0)
#define BATTLEGROUNDCAMERA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE46DD0)
#define BATTLEGROUNDCAMERA_GET_ACCCAMMOVE_OFFSET UNITYSDK_OFFSET(0xE471A0)
#define BATTLEGROUNDCAMERA_UPDATECAMERAPROPERTIES_OFFSET UNITYSDK_OFFSET(0xE44E80)
#define BATTLEGROUNDCAMERA_SET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0xE471B0)
#define BATTLEGROUNDCAMERA_GET_ISLETTERBOXINBATTLE_OFFSET UNITYSDK_OFFSET(0xE46730)
#define BATTLEGROUNDCAMERA_RELEASECHARACTER_OFFSET UNITYSDK_OFFSET(0xE474D0)
#define BATTLEGROUNDCAMERA_SETCAMERALOCATION_OFFSET UNITYSDK_OFFSET(0xE45B70)
#define BATTLEGROUNDCAMERA_ZOOMINOUT_OFFSET UNITYSDK_OFFSET(0xE46740)
#define BATTLEGROUNDCAMERA_GETORCREATECAMERA_OFFSET UNITYSDK_OFFSET(0xE479A0)
#define BATTLEGROUNDCAMERA_GET_CURRENTMAXCAMERASPEED_OFFSET UNITYSDK_OFFSET(0xE457D0)
#define BATTLEGROUNDCAMERA_PUTTARGETONRAILUSINGRAILPOINTCOMPENSATION_OFFSET UNITYSDK_OFFSET(0xE43DB0)

	inline static constexpr unsigned int BattleGroundCamera_TypeDefinitionIndex = 730;

	class BattleGroundCamera : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroupTag* GroupTag; // 0x18
		::UnityEngine::GameObject* Target; // 0x20
		::System::Single locationLerpSpeed; // 0x0
		::UnityEngine::Vector2* defaultCenter; // 0x0
		::UnityEngine::Vector2* viewportCenter; // 0x28
		::System::Single centerThreshold; // 0x30
		::System::Single leftMargin; // 0x34
		::System::Single bottomMargin; // 0x38
		::System::Single smoothMovementFactor; // 0x3C
		::System::Single zoomSpeed; // 0x40
		::UnityEngine::Camera* calcCamera; // 0x48
		::Cinemachine::CinemachineVirtualCamera* virtualCamera; // 0x50
		::UnityEngine::Vector3* entityWorldCenter; // 0x58
		::UnityEngine::Vector3* targetPosition; // 0x64
		::UnityEngine::Vector3* railPosition; // 0x70
		::UnityEngine::Vector3* dirCamToTarget; // 0x7C
		::System::Single _MinDistance_k__BackingField; // 0x88
		::System::Single _MaxDistance_k__BackingField; // 0x8C
		::System::Single _AccCamMove_k__BackingField; // 0x90
		::System::Single maxCameraSpeed; // 0x94
		::System::Single rotationSpeed; // 0x98
		::System::Single camDistance; // 0x9C
		::System::Single overrideAccelerate; // 0xA0
		::System::Single overrideMaxCameraSpeed; // 0xA4
		::System::Single fovCache; // 0xA8
		::System::Single fovCacheTangent; // 0xAC
		::System::Boolean moveInstantly; // 0xB0
		::System::Boolean needsRotateLerp; // 0xB1
		::System::Boolean ignoreEnemies; // 0xB2
		::System::Boolean useRailPointCompensation; // 0xB3
		::Il2CppArray<::System::Object*>* railPointsOnCameraSpace; // 0xB8
		Il2CppObject* cameraLogics; // 0xC0
		CameraLogicBase* currentCameraLogic; // 0xC8
		BattleCamera* battleCamera; // 0xD0
		Il2CppObject* cameraInfos; // 0xD8
		RenderingAreaController* renderingAreaController; // 0xE0
		::System::Int32 sectionOfSetRailCommand; // 0xE8

		::System::Void LoadTable(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_LOADTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateCameraLogic()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_UPDATECAMERALOGIC_OFFSET))(nullptr);
		}

		::System::Void ActivateFocusCamera(Il2CppObject* arg, ::System::Single arg2, ::System::Single arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_ACTIVATEFOCUSCAMERA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void _Initialize_g__CopyInspectorValueFrom|58_0(GroundCamera* arg)
		{
			((::System::Void(*)(GroundCamera*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA__INITIALIZE_G__COPYINSPECTORVALUEFROM|58_0_OFFSET))(arg, nullptr);
		}

		::System::Void PutTargetOnRail(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_PUTTARGETONRAIL_OFFSET))(arg, nullptr);
		}

		::System::Single get_MaxDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_GET_MAXDISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_AccCamMove(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_SET_ACCCAMMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SetRailPoints(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_SETRAILPOINTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CreateCameraLogics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_CREATECAMERALOGICS_OFFSET))(nullptr);
		}

		::System::Void RegisterCharacter(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_REGISTERCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void ZoomWithBattleLetterBox()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_ZOOMWITHBATTLELETTERBOX_OFFSET))(nullptr);
		}

		::System::Void SwitchCameraLogic(::System::Type* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_SWITCHCAMERALOGIC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_CurrentAccelerate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_GET_CURRENTACCELERATE_OFFSET))(nullptr);
		}

		::System::Void TurnOnCameraLogic()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_TURNONCAMERALOGIC_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_START_OFFSET))(nullptr);
		}

		::System::Void InitCameraLocation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_INITCAMERALOCATION_OFFSET))(nullptr);
		}

		::System::Void OnBattleFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_ONBATTLEFINISHED_OFFSET))(nullptr);
		}

		::System::Void ResetLocation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_RESETLOCATION_OFFSET))(nullptr);
		}

		::System::Void SetRenderingArea(RenderingAreaController* arg)
		{
			((::System::Void(*)(RenderingAreaController*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_SETRENDERINGAREA_OFFSET))(arg, nullptr);
		}

		::System::Void PutTargetOnRailUsingCameraForward(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_PUTTARGETONRAILUSINGCAMERAFORWARD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_LATEUPDATE_OFFSET))(nullptr);
		}

		::Cinemachine::CinemachineVirtualCamera* get_VirtualCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_GET_VIRTUALCAMERA_OFFSET))(nullptr);
		}

		::System::Void SetBattleCamera(::System::Int32 arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_SETBATTLECAMERA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void MovementOverride(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_MOVEMENTOVERRIDE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitBattleCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_INITBATTLECAMERA_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* get_CalcCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_GET_CALCCAMERA_OFFSET))(nullptr);
		}

		::System::Void TurnOffCameraLogic()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_TURNOFFCAMERALOGIC_OFFSET))(nullptr);
		}

		::System::Void RefreshFieldOfView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_REFRESHFIELDOFVIEW_OFFSET))(nullptr);
		}

		::System::Void ApplyFieldOfView(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_APPLYFIELDOFVIEW_OFFSET))(arg, nullptr);
		}

		::System::Single get_MinDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_GET_MINDISTANCE_OFFSET))(nullptr);
		}

		::System::Void ExcludeTargets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_EXCLUDETARGETS_OFFSET))(arg, nullptr);
		}

		::System::Void set_MinDistance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_SET_MINDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void MoveSmoothly()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_MOVESMOOTHLY_OFFSET))(nullptr);
		}

		Il2CppObject* get_CameraInfoList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_GET_CAMERAINFOLIST_OFFSET))(nullptr);
		}

		::System::Void IncludeTargets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_INCLUDETARGETS_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(GroundCamera* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(GroundCamera*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_AccCamMove()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_GET_ACCCAMMOVE_OFFSET))(nullptr);
		}

		::System::Void UpdateCameraProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_UPDATECAMERAPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void set_MaxDistance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_SET_MAXDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLetterBoxInBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_GET_ISLETTERBOXINBATTLE_OFFSET))(nullptr);
		}

		::System::Void ReleaseCharacter(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_RELEASECHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void SetCameraLocation(CameraInfo* arg, CameraInfo* arg2, ::System::Single arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(CameraInfo*, CameraInfo*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_SETCAMERALOCATION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ZoomInOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_ZOOMINOUT_OFFSET))(nullptr);
		}

		BattleGroundCamera* GetOrCreateCamera(::System::Int32 arg)
		{
			return ((BattleGroundCamera*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_GETORCREATECAMERA_OFFSET))(arg, nullptr);
		}

		::System::Single get_CurrentMaxCameraSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_GET_CURRENTMAXCAMERASPEED_OFFSET))(nullptr);
		}

		::System::Void PutTargetOnRailUsingRailPointCompensation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEGROUNDCAMERA_PUTTARGETONRAILUSINGRAILPOINTCOMPENSATION_OFFSET))(arg, nullptr);
		}

	};

