#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }
namespace UnityEngine { class Vector3; }

#define AUTODOF_AWAKE_OFFSET UNITYSDK_OFFSET(0x9FF1DF0)
#define AUTODOF_UPDATEBOKEH_OFFSET UNITYSDK_OFFSET(0x9FF2710)
#define AUTODOF_GETSAFEAREASCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x9FF2230)
#define AUTODOF_GETTARGETPLANEDISTANCE_OFFSET UNITYSDK_OFFSET(0x9FF28B0)
#define AUTODOF_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF29C0)
#define AUTODOF_UPDATE_OFFSET UNITYSDK_OFFSET(0x9FF24B0)
#define AUTODOF_UPDATEGAUSSIAN_OFFSET UNITYSDK_OFFSET(0x9FF29F0)

	inline static constexpr unsigned int AutoDOF_TypeDefinitionIndex = 32402;

	class AutoDOF : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* ppCamera; // 0x18
		::System::Boolean findEnabledCamera; // 0x20
		::System::Boolean adjustByAspect; // 0x21
		::System::Boolean adjustByFOV; // 0x22
		::System::Boolean adjustByTarget; // 0x23
		::System::Boolean adjustByTargetIfSafeArea; // 0x24
		::System::Single assetFOV; // 0x28
		::System::Single assetScreenWidth; // 0x2C
		::System::Single assetScreenHeight; // 0x30
		::System::Single secondFOV; // 0x34
		::System::Single secondGaussianEnd; // 0x38
		::System::Single secondFocalLength; // 0x3C
		::System::Single secondAperture; // 0x40
		::UnityEngine::Transform* cameraTarget; // 0x48
		::System::Single assetTargetZ; // 0x50
		::System::Single MinAspect; // 0x0
		::System::Single MaxAspect; // 0x0
		::System::Single WideLimitAspect; // 0x0
		::UnityEngine::Rendering::Universal::DepthOfField* dof; // 0x58
		::System::Single assetAspect; // 0x60
		::System::Single assetGaussianStart; // 0x64
		::System::Single assetGaussianEnd; // 0x68
		::System::Single startEndDiffRatioForFOV; // 0x6C
		::System::Single assetBokehFocusDistance; // 0x70
		::System::Single assetBokehFocalLength; // 0x74
		::System::Single assetBokehAperture; // 0x78
		::System::Single apertureRatioForFOV; // 0x7C
		::System::Single prevFov; // 0x80
		::System::Single prevAspect; // 0x84
		::UnityEngine::Vector3* prevTargetPos; // 0x88

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTODOF_AWAKE_OFFSET))(nullptr);
		}

		::System::Void UpdateBokeh(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + AUTODOF_UPDATEBOKEH_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetSafeAreaScaleFactor()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTODOF_GETSAFEAREASCALEFACTOR_OFFSET))(nullptr);
		}

		::System::Single GetTargetPlaneDistance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTODOF_GETTARGETPLANEDISTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTODOF_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTODOF_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateGaussian(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + AUTODOF_UPDATEGAUSSIAN_OFFSET))(arg, arg, nullptr);
		}

	};

