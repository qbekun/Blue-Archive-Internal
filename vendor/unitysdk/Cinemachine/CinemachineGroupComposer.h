#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Matrix4x4; }
namespace Cinemachine { class CameraState&; }
namespace UnityEngine { class Vector2; }
namespace Cinemachine { class ICinemachineTargetGroup; }
namespace UnityEngine { class Vector3&; }

#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x28479B0)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x28490E0)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GETTARGETHEIGHT_OFFSET UNITYSDK_OFFSET(0x2848F10)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_SET_LASTBOUNDSMATRIX_OFFSET UNITYSDK_OFFSET(0x2849120)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_SET_LASTBOUNDS_OFFSET UNITYSDK_OFFSET(0x2849150)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GETSCREENSPACEGROUPBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x2848AF0)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x2849170)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GET_LASTBOUNDSMATRIX_OFFSET UNITYSDK_OFFSET(0x2849230)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x2849260)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GET_LASTBOUNDS_OFFSET UNITYSDK_OFFSET(0x2849280)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineGroupComposer_TypeDefinitionIndex = 34256;

	class CinemachineGroupComposer : public Il2CppObject
	{
	public:
		::System::Single m_GroupFramingSize; // 0xF8
		FramingMode* m_FramingMode; // 0xFC
		::System::Single m_FrameDamping; // 0x100
		AdjustmentMode* m_AdjustmentMode; // 0x104
		::System::Single m_MaxDollyIn; // 0x108
		::System::Single m_MaxDollyOut; // 0x10C
		::System::Single m_MinimumDistance; // 0x110
		::System::Single m_MaximumDistance; // 0x114
		::System::Single m_MinimumFOV; // 0x118
		::System::Single m_MaximumFOV; // 0x11C
		::System::Single m_MinimumOrthoSize; // 0x120
		::System::Single m_MaximumOrthoSize; // 0x124
		::System::Single m_prevFramingDistance; // 0x128
		::System::Single m_prevFOV; // 0x12C
		::UnityEngine::Bounds* _LastBounds_k__BackingField; // 0x130
		::UnityEngine::Matrix4x4* _LastBoundsMatrix_k__BackingField; // 0x148

		::System::Void MutateCameraState(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_MUTATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_.CTOR_OFFSET))(nullptr);
		}

		::System::Single GetTargetHeight(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GETTARGETHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_LastBoundsMatrix(::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_SET_LASTBOUNDSMATRIX_OFFSET))(arg, nullptr);
		}

		::System::Void set_LastBounds(::UnityEngine::Bounds* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_SET_LASTBOUNDS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Bounds* GetScreenSpaceGroupBoundingBox(::Cinemachine::ICinemachineTargetGroup* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Vector3&* arg)
		{
			return (return (::UnityEngine::Bounds*(*)(::Cinemachine::ICinemachineTargetGroup*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GETSCREENSPACEGROUPBOUNDINGBOX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_ONVALIDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Matrix4x4* get_LastBoundsMatrix()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GET_LASTBOUNDSMATRIX_OFFSET))(nullptr);
		}

		::System::Single GetMaxDampTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GETMAXDAMPTIME_OFFSET))(nullptr);
		}

		::UnityEngine::Bounds* get_LastBounds()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GET_LASTBOUNDS_OFFSET))(nullptr);
		}

	};
}

