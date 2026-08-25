#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define UNITYENGINE_RENDERING_VECTOR3PARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4650)
#define UNITYENGINE_RENDERING_VECTOR3PARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x9FE46B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Vector3Parameter_TypeDefinitionIndex = 34118;

	class Vector3Parameter : public ::System::Net::Cache::RequestCachingSectionInternal
	{
	public:
		::System::Void .ctor(::UnityEngine::Vector3* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR3PARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Interp(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR3PARAMETER_INTERP_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

