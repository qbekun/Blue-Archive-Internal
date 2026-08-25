#pragma once
#include "unitysdk.h"

class CameraTargetManager;
class BattleGroundCamera;
class CameraProperties;
namespace UnityEngine { class Vector3; }
class RenderingAreaController;
namespace UnityEngine { class Component; }

#define CAMERALOGICBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CAMERALOGICBASE_GET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0xE4A740)
#define CAMERALOGICBASE_GET_GROUNDCAMERA_OFFSET UNITYSDK_OFFSET(0xE4A760)
#define CAMERALOGICBASE_GETMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0xE44E30)
#define CAMERALOGICBASE_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xE4AB70)
#define CAMERALOGICBASE_GETCOMPENSATEDMINDISTANCE_OFFSET UNITYSDK_OFFSET(0xE45610)
#define CAMERALOGICBASE_UPDATECAMERATARGETS_OFFSET UNITYSDK_OFFSET(0x000000)
#define CAMERALOGICBASE_CLEARTARGETS_OFFSET UNITYSDK_OFFSET(0xE43A20)
#define CAMERALOGICBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE42740)
#define CAMERALOGICBASE_SETPROPERTIES_OFFSET UNITYSDK_OFFSET(0xE43A90)
#define CAMERALOGICBASE_SET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0xE4AD80)
#define CAMERALOGICBASE_CALCTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define CAMERALOGICBASE_RELEASE_OFFSET UNITYSDK_OFFSET(0xE429F0)
#define CAMERALOGICBASE_SET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xE4AD90)
#define CAMERALOGICBASE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0xE4ADA0)
#define CAMERALOGICBASE_APPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define CAMERALOGICBASE_GET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0xE4ADC0)

	inline static constexpr unsigned int CameraLogicBase_TypeDefinitionIndex = 740;

	class CameraLogicBase : public Il2CppObject
	{
	public:
		CameraTargetManager* TargetManager; // 0x10
		BattleGroundCamera* _GroundCamera_k__BackingField; // 0x18
		CameraProperties* _Properties_k__BackingField; // 0x20
		::UnityEngine::Vector3* _TargetPosition_k__BackingField; // 0x40

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_UPDATE_OFFSET))(nullptr);
		}

		::System::Single get_MinDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_GET_MINDISTANCE_OFFSET))(nullptr);
		}

		BattleGroundCamera* get_GroundCamera()
		{
			return ((BattleGroundCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_GET_GROUNDCAMERA_OFFSET))(nullptr);
		}

		::System::Single GetMaxDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_GETMAXDISTANCE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_TargetPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_GET_TARGETPOSITION_OFFSET))(nullptr);
		}

		::System::Single GetCompensatedMinDistance(RenderingAreaController* arg, ::UnityEngine::Component* arg2)
		{
			return ((::System::Single(*)(RenderingAreaController*, ::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_GETCOMPENSATEDMINDISTANCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateCameraTargets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_UPDATECAMERATARGETS_OFFSET))(nullptr);
		}

		::System::Void ClearTargets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_CLEARTARGETS_OFFSET))(nullptr);
		}

		::System::Void .ctor(BattleGroundCamera* arg)
		{
			((::System::Void(*)(BattleGroundCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetProperties(CameraProperties* arg)
		{
			((::System::Void(*)(CameraProperties*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_SETPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void set_Properties(CameraProperties* arg)
		{
			((::System::Void(*)(CameraProperties*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_SET_PROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void CalcTargetPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_CALCTARGETPOSITION_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_RELEASE_OFFSET))(nullptr);
		}

		::System::Void set_TargetPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_SET_TARGETPOSITION_OFFSET))(arg, nullptr);
		}

		CameraProperties* get_Properties()
		{
			return ((CameraProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_APPLY_OFFSET))(nullptr);
		}

		::System::Single get_MaxDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOGICBASE_GET_MAXDISTANCE_OFFSET))(nullptr);
		}

	};

