#pragma once
#include "unitysdk.h"

class HexaType;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Vector2; }
class UICampaign;
class HexaTileMapVisual;
class UITBGCampaign;
class TBGTileMapVisual;
class RoadPuzzleTileMap;

#define HEXACAMERATRANSLATE_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0xE51A20)
#define HEXACAMERATRANSLATE_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0xE51A30)
#define HEXACAMERATRANSLATE_GET_UINAMES_OFFSET UNITYSDK_OFFSET(0xE51A40)
#define HEXACAMERATRANSLATE_GET_ISFOLLOWEND_OFFSET UNITYSDK_OFFSET(0xE51C00)
#define HEXACAMERATRANSLATE_GET_ISTRANSLATING_OFFSET UNITYSDK_OFFSET(0xE51C60)
#define HEXACAMERATRANSLATE_AWAKE_OFFSET UNITYSDK_OFFSET(0xE51C70)
#define HEXACAMERATRANSLATE_ONENABLE_NEXON_OFFSET UNITYSDK_OFFSET(0xE51DC0)
#define HEXACAMERATRANSLATE_ONDISABLE_NEXON_OFFSET UNITYSDK_OFFSET(0xE51F80)
#define HEXACAMERATRANSLATE_REFRESHPORTRAITMODEOFFSET_OFFSET UNITYSDK_OFFSET(0xE51ED0)
#define HEXACAMERATRANSLATE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE52160)
#define HEXACAMERATRANSLATE_SETPORTRAITMODEOFFSET_OFFSET UNITYSDK_OFFSET(0xE52040)
#define HEXACAMERATRANSLATE_RESETTARGETOFFSET_OFFSET UNITYSDK_OFFSET(0xE52200)
#define HEXACAMERATRANSLATE_UPDATE_OFFSET UNITYSDK_OFFSET(0xE52320)
#define HEXACAMERATRANSLATE_TRANSLATE_OFFSET UNITYSDK_OFFSET(0xE52A50)
#define HEXACAMERATRANSLATE_VIEWTOWORLD_OFFSET UNITYSDK_OFFSET(0xE52CC0)
#define HEXACAMERATRANSLATE_UPDATEFOLLOW_OFFSET UNITYSDK_OFFSET(0xE52700)
#define HEXACAMERATRANSLATE_INITCAMERALIMIT_OFFSET UNITYSDK_OFFSET(0xE52EB0)
#define HEXACAMERATRANSLATE_INITCAMERALIMIT_OFFSET UNITYSDK_OFFSET(0xE536C0)
#define HEXACAMERATRANSLATE_INITCAMERALIMIT_OFFSET UNITYSDK_OFFSET(0xE53E00)
#define HEXACAMERATRANSLATE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE547C0)
#define HEXACAMERATRANSLATE_REFRESHMAXZOOM_OFFSET UNITYSDK_OFFSET(0xE54550)
#define HEXACAMERATRANSLATE_GETMAXFOV_OFFSET UNITYSDK_OFFSET(0xE54890)
#define HEXACAMERATRANSLATE_GETDEST_OFFSET UNITYSDK_OFFSET(0xE52E10)
#define HEXACAMERATRANSLATE_SETFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xE549A0)
#define HEXACAMERATRANSLATE_SETPOS_OFFSET UNITYSDK_OFFSET(0xE53500)
#define HEXACAMERATRANSLATE_PLAYCAMERATRANSLATEANI_OFFSET UNITYSDK_OFFSET(0xE549C0)
#define HEXACAMERATRANSLATE_COPLAYCAMERATRANSLATE_OFFSET UNITYSDK_OFFSET(0xE54A50)
#define HEXACAMERATRANSLATE_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0xE54B00)
#define HEXACAMERATRANSLATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE54B10)

	inline static constexpr unsigned int HexaCameraTranslate_TypeDefinitionIndex = 771;

	class HexaCameraTranslate : public Il2CppObject
	{
	public:
		HexaType* type; // 0x18
		::System::Single defaultZoom; // 0x1C
		::System::Boolean _Enable_k__BackingField; // 0x20
		::System::Single PortraitModeOffset; // 0x24
		::System::Single SpeedRate; // 0x28
		::UnityEngine::Camera* Camera; // 0x30
		::UnityEngine::Transform* Background; // 0x38
		::UnityEngine::Vector3* LeftMost; // 0x40
		::UnityEngine::Vector3* Bottom; // 0x4C
		::UnityEngine::Vector3* RightMost; // 0x58
		::UnityEngine::Vector3* Top; // 0x64
		::UnityEngine::Vector3* initLocalPos; // 0x70
		::UnityEngine::Vector3* TargetOffset; // 0x7C
		::UnityEngine::Transform* FollowObject; // 0x88
		::UnityEngine::Coroutine* translateCoroutine; // 0x90
		::UnityEngine::Vector2* prevScreenPos; // 0x98
		::System::Boolean isDragging; // 0xA0

		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_GET_ENABLE_OFFSET))(nullptr);
		}

		::System::Void set_Enable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_SET_ENABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_UINames()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_GET_UINAMES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFollowEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_GET_ISFOLLOWEND_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTranslating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_GET_ISTRANSLATING_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable_Nexon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_ONENABLE_NEXON_OFFSET))(nullptr);
		}

		::System::Void OnDisable_Nexon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_ONDISABLE_NEXON_OFFSET))(nullptr);
		}

		::System::Void RefreshPortraitModeOffset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_REFRESHPORTRAITMODEOFFSET_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetPortraitModeOffset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_SETPORTRAITMODEOFFSET_OFFSET))(nullptr);
		}

		::System::Void ResetTargetOffset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_RESETTARGETOFFSET_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Translate(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_TRANSLATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* ViewToWorld(::UnityEngine::Vector3* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_VIEWTOWORLD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateFollow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_UPDATEFOLLOW_OFFSET))(nullptr);
		}

		::System::Void InitCameraLimit(UICampaign* arg, HexaTileMapVisual* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(UICampaign*, HexaTileMapVisual*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_INITCAMERALIMIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitCameraLimit(UITBGCampaign* arg, TBGTileMapVisual* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(UITBGCampaign*, TBGTileMapVisual*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_INITCAMERALIMIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitCameraLimit(RoadPuzzleTileMap* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(RoadPuzzleTileMap*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_INITCAMERALIMIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshMaxZoom()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_REFRESHMAXZOOM_OFFSET))(nullptr);
		}

		::System::Single GetMaxFOV(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_GETMAXFOV_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector3* GetDest(::UnityEngine::Vector3* arg, ::System::Boolean arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_GETDEST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetFollowTarget(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_SETFOLLOWTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void SetPos(::UnityEngine::Vector3* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_SETPOS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayCameraTranslateAni(::UnityEngine::Vector3* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_PLAYCAMERATRANSLATEANI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayCameraTranslate(::UnityEngine::Vector3* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_COPLAYCAMERATRANSLATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_ISDRAGGING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATRANSLATE_.CTOR_OFFSET))(nullptr);
		}

	};

