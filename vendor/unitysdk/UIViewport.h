#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define UIVIEWPORT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x2596E10)
#define UIVIEWPORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2597190)
#define UIVIEWPORT_START_OFFSET UNITYSDK_OFFSET(0x25971A0)

	inline static constexpr unsigned int UIViewport_TypeDefinitionIndex = 271;

	class UIViewport : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* sourceCamera; // 0x18
		::UnityEngine::Transform* topLeft; // 0x20
		::UnityEngine::Transform* bottomRight; // 0x28
		::System::Single fullSize; // 0x30
		::UnityEngine::Camera* mCam; // 0x38

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIEWPORT_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIEWPORT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIEWPORT_START_OFFSET))(nullptr);
		}

	};

