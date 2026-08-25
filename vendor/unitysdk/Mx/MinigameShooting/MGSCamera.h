#pragma once
#include "../../unitysdk.h"

class CameraSetting;
namespace MX::MinigameShooting { class Character; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector3; }
namespace MX::MinigameShooting { class SectionInfo; }

#define MX_MINIGAMESHOOTING_MGSCAMERA_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x1470C50)
#define MX_MINIGAMESHOOTING_MGSCAMERA_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1470C60)
#define MX_MINIGAMESHOOTING_MGSCAMERA_REFRESH_OFFSET UNITYSDK_OFFSET(0x1470C70)
#define MX_MINIGAMESHOOTING_MGSCAMERA_INITSECTIONLIMIT_OFFSET UNITYSDK_OFFSET(0x1470F70)
#define MX_MINIGAMESHOOTING_MGSCAMERA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1470FC0)
#define MX_MINIGAMESHOOTING_MGSCAMERA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1471030)
#define MX_MINIGAMESHOOTING_MGSCAMERA_SETORTHOGRAPHICSIZE_OFFSET UNITYSDK_OFFSET(0x14711C0)
#define MX_MINIGAMESHOOTING_MGSCAMERA_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1471440)
#define MX_MINIGAMESHOOTING_MGSCAMERA_GETORTHOGRAPHICSIZE_OFFSET UNITYSDK_OFFSET(0x1471420)
#define MX_MINIGAMESHOOTING_MGSCAMERA__GETDESTINATION_G__VIEWTOWORLD|26_0_OFFSET UNITYSDK_OFFSET(0x1471450)
#define MX_MINIGAMESHOOTING_MGSCAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1471540)
#define MX_MINIGAMESHOOTING_MGSCAMERA_EXIT_OFFSET UNITYSDK_OFFSET(0x14715E0)
#define MX_MINIGAMESHOOTING_MGSCAMERA_INITPROJECTION_OFFSET UNITYSDK_OFFSET(0x1471720)
#define MX_MINIGAMESHOOTING_MGSCAMERA_GETDESTINATION_OFFSET UNITYSDK_OFFSET(0x1470D50)
#define MX_MINIGAMESHOOTING_MGSCAMERA_AWAKE_OFFSET UNITYSDK_OFFSET(0x1471820)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int MGSCamera_TypeDefinitionIndex = 15128;

	class MGSCamera : public Il2CppObject
	{
	public:
		CameraSetting* OrthographicSetting; // 0x18
		CameraSetting* PerspectiveSetting; // 0x3C
		::System::Single smoothTime; // 0x60
		::MX::MinigameShooting::Character* _target_k__BackingField; // 0x68
		::System::Single SizeRate; // 0x70
		::System::Single fixedXPos; // 0x74
		::UnityEngine::Camera* cam; // 0x78
		CameraSetting* currentSetting; // 0x80
		::UnityEngine::Vector3* velocity; // 0xA4
		::UnityEngine::Vector3* topLimit; // 0xB0
		::UnityEngine::Vector3* bottomLimit; // 0xBC

		::UnityEngine::Camera* get_Camera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSCAMERA_GET_CAMERA_OFFSET))(nullptr);
		}

		::MX::MinigameShooting::Character* get_target()
		{
			return ((::MX::MinigameShooting::Character*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSCAMERA_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSCAMERA_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void InitSectionLimit(::MX::MinigameShooting::SectionInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::SectionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSCAMERA_INITSECTIONLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::MinigameShooting::Character* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSCAMERA_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSCAMERA_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void SetOrthographicSize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSCAMERA_SETORTHOGRAPHICSIZE_OFFSET))(nullptr);
		}

		::System::Void set_target(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSCAMERA_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::Single GetOrthographicSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSCAMERA_GETORTHOGRAPHICSIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* _GetDestination_g__ViewToWorld|26_0(::UnityEngine::Vector3* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSCAMERA__GETDESTINATION_G__VIEWTOWORLD|26_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSCAMERA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Exit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSCAMERA_EXIT_OFFSET))(nullptr);
		}

		::System::Void InitProjection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSCAMERA_INITPROJECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetDestination()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSCAMERA_GETDESTINATION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSCAMERA_AWAKE_OFFSET))(nullptr);
		}

	};
}

