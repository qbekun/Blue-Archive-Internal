#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector4; }

#define UNITYENGINE_RENDERING_NOINTERPVECTOR4PARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4840)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpVector4Parameter_TypeDefinitionIndex = 34121;

	class NoInterpVector4Parameter : public ::System::Net::Cache::RequestCacheBinding
	{
	public:
		::System::Void .ctor(::UnityEngine::Vector4* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPVECTOR4PARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

