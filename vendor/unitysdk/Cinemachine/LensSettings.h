#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class LensSettings; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Camera; }
namespace Cinemachine { class LensSettings&; }

#define CINEMACHINE_LENSSETTINGS_GET_ORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0x2854D80)
#define CINEMACHINE_LENSSETTINGS_SET_ORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0x2861840)
#define CINEMACHINE_LENSSETTINGS_GET_SENSORSIZE_OFFSET UNITYSDK_OFFSET(0x2861870)
#define CINEMACHINE_LENSSETTINGS_SET_SENSORSIZE_OFFSET UNITYSDK_OFFSET(0x2861880)
#define CINEMACHINE_LENSSETTINGS_GET_ASPECT_OFFSET UNITYSDK_OFFSET(0x2861890)
#define CINEMACHINE_LENSSETTINGS_GET_ISPHYSICALCAMERA_OFFSET UNITYSDK_OFFSET(0x2861930)
#define CINEMACHINE_LENSSETTINGS_SET_ISPHYSICALCAMERA_OFFSET UNITYSDK_OFFSET(0x2861950)
#define CINEMACHINE_LENSSETTINGS_FROMCAMERA_OFFSET UNITYSDK_OFFSET(0x2861970)
#define CINEMACHINE_LENSSETTINGS_SNAPSHOTCAMERAREADONLYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x285E8D0)
#define CINEMACHINE_LENSSETTINGS_SNAPSHOTCAMERAREADONLYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x2861AC0)
#define CINEMACHINE_LENSSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x2861BD0)
#define CINEMACHINE_LENSSETTINGS_LERP_OFFSET UNITYSDK_OFFSET(0x2854A50)
#define CINEMACHINE_LENSSETTINGS_VALIDATE_OFFSET UNITYSDK_OFFSET(0x2861C20)
#define CINEMACHINE_LENSSETTINGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2861C80)

namespace Cinemachine
{
	inline static constexpr unsigned int LensSettings_TypeDefinitionIndex = 34327;

	class LensSettings : public Il2CppObject
	{
	public:
		::Cinemachine::LensSettings* Default; // 0x0
		::System::Single FieldOfView; // 0x10
		::System::Single OrthographicSize; // 0x14
		::System::Single NearClipPlane; // 0x18
		::System::Single FarClipPlane; // 0x1C
		::System::Single Dutch; // 0x20
		OverrideModes* ModeOverride; // 0x24
		::UnityEngine::Vector2* LensShift; // 0x28
		GateFitMode* GateFit; // 0x30
		::UnityEngine::Vector2* m_SensorSize; // 0x34
		::System::Boolean m_OrthoFromCamera; // 0x3C
		::System::Boolean m_PhysicalFromCamera; // 0x3D

		::System::Boolean get_Orthographic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_GET_ORTHOGRAPHIC_OFFSET))(nullptr);
		}

		::System::Void set_Orthographic(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SET_ORTHOGRAPHIC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_SensorSize()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_GET_SENSORSIZE_OFFSET))(nullptr);
		}

		::System::Void set_SensorSize(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SET_SENSORSIZE_OFFSET))(arg, nullptr);
		}

		::System::Single get_Aspect()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_GET_ASPECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPhysicalCamera()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_GET_ISPHYSICALCAMERA_OFFSET))(nullptr);
		}

		::System::Void set_IsPhysicalCamera(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SET_ISPHYSICALCAMERA_OFFSET))(arg, nullptr);
		}

		::Cinemachine::LensSettings* FromCamera(::UnityEngine::Camera* arg)
		{
			return (return (::Cinemachine::LensSettings*(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_FROMCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void SnapshotCameraReadOnlyProperties(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SNAPSHOTCAMERAREADONLYPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void SnapshotCameraReadOnlyProperties(::Cinemachine::LensSettings&* arg)
		{
			((::System::Void(*)(::Cinemachine::LensSettings&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_SNAPSHOTCAMERAREADONLYPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Cinemachine::LensSettings* Lerp(::Cinemachine::LensSettings* arg, ::Cinemachine::LensSettings* arg, ::System::Single arg)
		{
			return (return (::Cinemachine::LensSettings*(*)(::Cinemachine::LensSettings*, ::Cinemachine::LensSettings*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

