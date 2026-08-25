#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define UNITYENGINE_RENDERING_NOINTERPVECTOR2PARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4600)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpVector2Parameter_TypeDefinitionIndex = 34117;

	class NoInterpVector2Parameter : public ::System::Net::Cache::RequestCacheValidator
	{
	public:
		::System::Void .ctor(::UnityEngine::Vector2* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPVECTOR2PARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

