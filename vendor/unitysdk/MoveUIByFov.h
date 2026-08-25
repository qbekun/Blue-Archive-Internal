#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
class UIRoot;

#define MOVEUIBYFOV_AWAKE_OFFSET UNITYSDK_OFFSET(0x2057F40)
#define MOVEUIBYFOV_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2057FC0)
#define MOVEUIBYFOV_.CTOR_OFFSET UNITYSDK_OFFSET(0x2057FE0)
#define MOVEUIBYFOV_UPDATE_OFFSET UNITYSDK_OFFSET(0x2057FF0)

	inline static constexpr unsigned int MoveUIByFov_TypeDefinitionIndex = 3352;

	class MoveUIByFov : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* MyCamera; // 0x18
		UIRoot* RootUI; // 0x20
		::System::Single initialFov; // 0x28
		::System::Single initialDistance; // 0x2C
		::System::Single initialFovTangent; // 0x30
		::System::Single currentFov; // 0x34

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVEUIBYFOV_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVEUIBYFOV_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVEUIBYFOV_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVEUIBYFOV_UPDATE_OFFSET))(nullptr);
		}

	};

