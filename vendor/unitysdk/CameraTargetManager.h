#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
class CharacterVisual;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Camera; }

#define CAMERATARGETMANAGER_REGISTERALLY_OFFSET UNITYSDK_OFFSET(0xE42340)
#define CAMERATARGETMANAGER_GETALLIESMAXPOSITION_OFFSET UNITYSDK_OFFSET(0xE417E0)
#define CAMERATARGETMANAGER_SETMAXZOOMPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0xE4BDD0)
#define CAMERATARGETMANAGER_GETTARGETSMINPOSITION_OFFSET UNITYSDK_OFFSET(0xE41C70)
#define CAMERATARGETMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0xE4AB90)
#define CAMERATARGETMANAGER_GETMOSTLEFTALLYVIEWPORTPOSITION_OFFSET UNITYSDK_OFFSET(0xE4BE20)
#define CAMERATARGETMANAGER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xE41780)
#define CAMERATARGETMANAGER_GETTARGETSMAXPOSITION_OFFSET UNITYSDK_OFFSET(0xE41B40)
#define CAMERATARGETMANAGER_UPDATECAMERATARGETS_OFFSET UNITYSDK_OFFSET(0xE42A30)
#define CAMERATARGETMANAGER_GETMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0xE4A770)
#define CAMERATARGETMANAGER_GET_HASACTIVETARGET_OFFSET UNITYSDK_OFFSET(0xE41A30)
#define CAMERATARGETMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE4AC60)
#define CAMERATARGETMANAGER_EXCLUDETARGETS_OFFSET UNITYSDK_OFFSET(0xE42810)
#define CAMERATARGETMANAGER_RELEASECHARACTER_OFFSET UNITYSDK_OFFSET(0xE42250)
#define CAMERATARGETMANAGER_INCLUDETARGETS_OFFSET UNITYSDK_OFFSET(0xE42F70)
#define CAMERATARGETMANAGER_GETALLIESMINPOSITION_OFFSET UNITYSDK_OFFSET(0xE41900)
#define CAMERATARGETMANAGER_REGISTERTARGET_OFFSET UNITYSDK_OFFSET(0xE42440)

	inline static constexpr unsigned int CameraTargetManager_TypeDefinitionIndex = 748;

	class CameraTargetManager : public Il2CppObject
	{
	public:
		Il2CppObject* allies; // 0x10
		Il2CppObject* targets; // 0x18
		Il2CppObject* commandIdsToExclude; // 0x20
		::UnityEngine::Matrix4x4* maxZoomCameraVP; // 0x28

		::System::Void RegisterAlly(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_REGISTERALLY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetAlliesMaxPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_GETALLIESMAXPOSITION_OFFSET))(nullptr);
		}

		::System::Void SetMaxZoomProjectionMatrix(::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_SETMAXZOOMPROJECTIONMATRIX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetTargetsMinPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_GETTARGETSMINPOSITION_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_CLEAR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetMostLeftAllyViewportPosition(::UnityEngine::Camera* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_GETMOSTLEFTALLYVIEWPORTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_GET_ISVALID_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetTargetsMaxPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_GETTARGETSMAXPOSITION_OFFSET))(nullptr);
		}

		::System::Void UpdateCameraTargets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_UPDATECAMERATARGETS_OFFSET))(nullptr);
		}

		::System::Single GetMaxDistance(::UnityEngine::Camera* arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::UnityEngine::Camera*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_GETMAXDISTANCE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_HasActiveTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_GET_HASACTIVETARGET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ExcludeTargets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_EXCLUDETARGETS_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseCharacter(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_RELEASECHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void IncludeTargets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_INCLUDETARGETS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetAlliesMinPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_GETALLIESMINPOSITION_OFFSET))(nullptr);
		}

		::System::Void RegisterTarget(::UnityEngine::Camera* arg, CharacterVisual* arg2)
		{
			((::System::Void(*)(::UnityEngine::Camera*, CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERATARGETMANAGER_REGISTERTARGET_OFFSET))(arg, arg2, nullptr);
		}

	};

