#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define UIORTHOCAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0x242DE60)
#define UIORTHOCAMERA_START_OFFSET UNITYSDK_OFFSET(0x242DFE0)
#define UIORTHOCAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x242E060)

	inline static constexpr unsigned int UIOrthoCamera_TypeDefinitionIndex = 243;

	class UIOrthoCamera : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* mCam; // 0x18
		::UnityEngine::Transform* mTrans; // 0x20

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIORTHOCAMERA_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIORTHOCAMERA_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIORTHOCAMERA_.CTOR_OFFSET))(nullptr);
		}

	};

