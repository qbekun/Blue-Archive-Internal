#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }

#define CAMERAFOVHORIZONTALSETTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE48610)
#define CAMERAFOVHORIZONTALSETTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE486B0)
#define CAMERAFOVHORIZONTALSETTER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE486C0)

	inline static constexpr unsigned int CameraFovHorizontalSetter_TypeDefinitionIndex = 732;

	class CameraFovHorizontalSetter : public Il2CppObject
	{
	public:
		::System::Single FovHorizontal; // 0x18
		::UnityEngine::Camera* targetCamera; // 0x20

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAFOVHORIZONTALSETTER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAFOVHORIZONTALSETTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAFOVHORIZONTALSETTER_UPDATE_OFFSET))(nullptr);
		}

	};

