#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }

#define FXCAMERAFLIP_RESETCULLFACES_OFFSET UNITYSDK_OFFSET(0x20B5710)
#define FXCAMERAFLIP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20B5720)
#define FXCAMERAFLIP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20B5A40)
#define FXCAMERAFLIP_SETCULLFACES_OFFSET UNITYSDK_OFFSET(0x20B5C60)
#define FXCAMERAFLIP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20B5CE0)
#define FXCAMERAFLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B5DD0)

	inline static constexpr unsigned int FxCameraFlip_TypeDefinitionIndex = 3600;

	class FxCameraFlip : public Il2CppObject
	{
	public:
		::System::Boolean flipHorizontal; // 0x18
		::System::Boolean flipVertical; // 0x19
		::UnityEngine::Camera* cam; // 0x20
		::System::Single aspect; // 0x28
		::UnityEngine::Matrix4x4* pMatrix; // 0x2C
		::UnityEngine::Matrix4x4* sMatrix; // 0x6C

		::System::Void ResetCullFaces(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Camera* arg2)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + FXCAMERAFLIP_RESETCULLFACES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCAMERAFLIP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCAMERAFLIP_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void SetCullFaces(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Camera* arg2)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + FXCAMERAFLIP_SETCULLFACES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCAMERAFLIP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCAMERAFLIP_.CTOR_OFFSET))(nullptr);
		}

	};

