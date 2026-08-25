#pragma once
#include "unitysdk.h"

class UIWidget;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Mesh; }

#define INCLINEDBOXCOLLIDER_CREATEMESH_OFFSET UNITYSDK_OFFSET(0x20559D0)
#define INCLINEDBOXCOLLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2055AD0)
#define INCLINEDBOXCOLLIDER_SETMESH_OFFSET UNITYSDK_OFFSET(0x2055AE0)
#define INCLINEDBOXCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2056190)
#define INCLINEDBOXCOLLIDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20561F0)

	inline static constexpr unsigned int InclinedBoxCollider_TypeDefinitionIndex = 3340;

	class InclinedBoxCollider : public Il2CppObject
	{
	public:
		UIWidget* target; // 0x18
		::UnityEngine::Vector3* center; // 0x20
		::UnityEngine::Vector2* size; // 0x2C
		::System::Single inclineAngle; // 0x34
		::UnityEngine::Mesh* myMesh; // 0x38

		::System::Void CreateMesh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCLINEDBOXCOLLIDER_CREATEMESH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCLINEDBOXCOLLIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetMesh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCLINEDBOXCOLLIDER_SETMESH_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCLINEDBOXCOLLIDER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCLINEDBOXCOLLIDER_ONENABLE_OFFSET))(nullptr);
		}

	};

