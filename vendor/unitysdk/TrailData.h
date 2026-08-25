#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define TRAILDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BB7D0)
#define TRAILDATA_UPDATEMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x20BBA80)

	inline static constexpr unsigned int TrailData_TypeDefinitionIndex = 3620;

	class TrailData : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* Object; // 0x10
		::UnityEngine::Material* SharedMaterial; // 0x18
		::System::Single Timer; // 0x20
		Il2CppObject* MaterialAnimationControllerList; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRAILDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateMaterialProperties(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TRAILDATA_UPDATEMATERIALPROPERTIES_OFFSET))(arg, nullptr);
		}

	};

