#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
class CameraFindType;
namespace UnityEngine { class Vector2; }
class ScaleAxis;

#define FXKEEPSCREENSPACESIZE2025_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20B99F0)
#define FXKEEPSCREENSPACESIZE2025_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B9B70)
#define FXKEEPSCREENSPACESIZE2025_RESIZESCALE_OFFSET UNITYSDK_OFFSET(0x20B9A00)
#define FXKEEPSCREENSPACESIZE2025_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20B9B90)

	inline static constexpr unsigned int FxKeepScreenSpaceSize2025_TypeDefinitionIndex = 3611;

	class FxKeepScreenSpaceSize2025 : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* TargetCamera; // 0x18
		CameraFindType* CameraFindType; // 0x20
		::UnityEngine::Vector2* TargetScreenRatio; // 0x24
		::System::Boolean UseLetterBoxLimit; // 0x2C
		ScaleAxis* ScaleAxisMode; // 0x30

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXKEEPSCREENSPACESIZE2025_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXKEEPSCREENSPACESIZE2025_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ResizeScale()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXKEEPSCREENSPACESIZE2025_RESIZESCALE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXKEEPSCREENSPACESIZE2025_ONENABLE_OFFSET))(nullptr);
		}

	};

