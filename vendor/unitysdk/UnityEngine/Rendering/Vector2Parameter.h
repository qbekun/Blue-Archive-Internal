#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define UNITYENGINE_RENDERING_VECTOR2PARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4590)
#define UNITYENGINE_RENDERING_VECTOR2PARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x9FE45E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Vector2Parameter_TypeDefinitionIndex = 34116;

	class Vector2Parameter : public ::System::Net::Cache::RequestCacheValidator
	{
	public:
		::System::Void .ctor(::UnityEngine::Vector2* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR2PARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Interp(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR2PARAMETER_INTERP_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

