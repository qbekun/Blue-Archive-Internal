#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class CameraState&; }

#define CINEMACHINECAMERAOFFSET_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x281BC60)
#define CINEMACHINECAMERAOFFSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x281BF70)

	inline static constexpr unsigned int CinemachineCameraOffset_TypeDefinitionIndex = 34183;

	class CinemachineCameraOffset : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_Offset; // 0x28
		Stage* m_ApplyAfter; // 0x34
		::System::Boolean m_PreserveComposition; // 0x38

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, Stage* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, Stage*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINECAMERAOFFSET_POSTPIPELINESTAGECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINECAMERAOFFSET_.CTOR_OFFSET))(nullptr);
		}

	};

