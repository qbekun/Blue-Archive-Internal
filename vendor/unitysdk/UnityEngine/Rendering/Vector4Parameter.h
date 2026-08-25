#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector4; }

#define UNITYENGINE_RENDERING_VECTOR4PARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x9FE4770)
#define UNITYENGINE_RENDERING_VECTOR4PARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE47E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Vector4Parameter_TypeDefinitionIndex = 34120;

	class Vector4Parameter : public ::System::Net::Cache::RequestCacheBinding
	{
	public:
		::System::Void Interp(::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR4PARAMETER_INTERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector4* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR4PARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

