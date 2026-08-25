#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Camera; }

#define MX_MINIGAMECCG_VISUAL_CCGCAMERA_ADJUSTCAMERAPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1E9A150)
#define MX_MINIGAMECCG_VISUAL_CCGCAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A310)
#define MX_MINIGAMECCG_VISUAL_CCGCAMERA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E9A320)
#define MX_MINIGAMECCG_VISUAL_CCGCAMERA_START_OFFSET UNITYSDK_OFFSET(0x1E9AA90)
#define MX_MINIGAMECCG_VISUAL_CCGCAMERA_SENDERRORKIBANALOGS_OFFSET UNITYSDK_OFFSET(0x1E9A9A0)
#define MX_MINIGAMECCG_VISUAL_CCGCAMERA_SET_OFFSET UNITYSDK_OFFSET(0x1E9A9B0)
#define MX_MINIGAMECCG_VISUAL_CCGCAMERA_ADJUSTHANDCARDPOSITION_OFFSET UNITYSDK_OFFSET(0x1E9AAE0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGCamera_TypeDefinitionIndex = 21213;

	class CCGCamera : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* cam; // 0x18
		::System::Single baseY; // 0x20
		::System::Single baseWidth; // 0x24
		::System::Single baseHeight; // 0x28
		::System::Single baseAspect; // 0x2C
		::System::Single thresholdAspect; // 0x30
		::System::Int32 lastDeviceWidth; // 0x34
		::System::Int32 lastDeviceHeight; // 0x38
		::System::Boolean hasSentLog; // 0x3C

		::System::Void AdjustCameraPositionY()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCAMERA_ADJUSTCAMERAPOSITIONY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCAMERA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCAMERA_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCAMERA_START_OFFSET))(nullptr);
		}

		::System::Void SendErrorkibanaLogs(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCAMERA_SENDERRORKIBANALOGS_OFFSET))(str, nullptr);
		}

		::System::Void Set()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCAMERA_SET_OFFSET))(nullptr);
		}

		::System::Void AdjustHandCardPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGCAMERA_ADJUSTHANDCARDPOSITION_OFFSET))(nullptr);
		}

	};
}

