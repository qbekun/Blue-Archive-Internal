#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector3; }
class CharacterVisual;
namespace UnityEngine { class Camera; }
class BattleGroundCamera;
namespace UnityEngine { class Vector2; }

#define BATTLECAMERA_CALCTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xE41260)
#define BATTLECAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0xE41DB0)
#define BATTLECAMERA_RELEASECHARACTER_OFFSET UNITYSDK_OFFSET(0xE421C0)
#define BATTLECAMERA_REGISTERCHARACTER_OFFSET UNITYSDK_OFFSET(0xE422D0)
#define BATTLECAMERA_APPLY_OFFSET UNITYSDK_OFFSET(0xE42660)
#define BATTLECAMERA_REFRESHMAXZOOMDUMMY_OFFSET UNITYSDK_OFFSET(0xE41E40)
#define BATTLECAMERA_SET_ENTITYWORLDCENTER_OFFSET UNITYSDK_OFFSET(0xE42670)
#define BATTLECAMERA_GET_MYCAMERA_OFFSET UNITYSDK_OFFSET(0xE417C0)
#define BATTLECAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE42680)
#define BATTLECAMERA_GET_VIEWPORTCENTER_OFFSET UNITYSDK_OFFSET(0xE41DA0)
#define BATTLECAMERA_GET_IGNOREENEMIES_OFFSET UNITYSDK_OFFSET(0xE41A20)
#define BATTLECAMERA_GET_ENTITYWORLDCENTER_OFFSET UNITYSDK_OFFSET(0xE427D0)
#define BATTLECAMERA_EXCLUDETARGETS_OFFSET UNITYSDK_OFFSET(0xE427F0)
#define BATTLECAMERA_RELEASE_OFFSET UNITYSDK_OFFSET(0xE429C0)
#define BATTLECAMERA_UPDATECAMERATARGETS_OFFSET UNITYSDK_OFFSET(0xE42A10)
#define BATTLECAMERA_INCLUDETARGETS_OFFSET UNITYSDK_OFFSET(0xE42F50)

	inline static constexpr unsigned int BattleCamera_TypeDefinitionIndex = 727;

	class BattleCamera : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* maxZoomCameraDummy; // 0x50
		::System::Boolean isMyTeamOnly; // 0x58
		::UnityEngine::Vector3* _EntityWorldCenter_k__BackingField; // 0x5C

		::System::Void CalcTargetPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLECAMERA_CALCTARGETPOSITION_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLECAMERA_UPDATE_OFFSET))(nullptr);
		}

		::System::Void ReleaseCharacter(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLECAMERA_RELEASECHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterCharacter(CharacterVisual* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(CharacterVisual*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLECAMERA_REGISTERCHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLECAMERA_APPLY_OFFSET))(nullptr);
		}

		::System::Void RefreshMaxZoomDummy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLECAMERA_REFRESHMAXZOOMDUMMY_OFFSET))(nullptr);
		}

		::System::Void set_EntityWorldCenter(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLECAMERA_SET_ENTITYWORLDCENTER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Camera* get_MyCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLECAMERA_GET_MYCAMERA_OFFSET))(nullptr);
		}

		::System::Void .ctor(BattleGroundCamera* arg)
		{
			((::System::Void(*)(BattleGroundCamera*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLECAMERA_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_ViewportCenter()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLECAMERA_GET_VIEWPORTCENTER_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreEnemies()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLECAMERA_GET_IGNOREENEMIES_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_EntityWorldCenter()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLECAMERA_GET_ENTITYWORLDCENTER_OFFSET))(nullptr);
		}

		::System::Void ExcludeTargets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLECAMERA_EXCLUDETARGETS_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLECAMERA_RELEASE_OFFSET))(nullptr);
		}

		::System::Void UpdateCameraTargets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLECAMERA_UPDATECAMERATARGETS_OFFSET))(nullptr);
		}

		::System::Void IncludeTargets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLECAMERA_INCLUDETARGETS_OFFSET))(arg, nullptr);
		}

	};

