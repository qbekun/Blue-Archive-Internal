#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define UNITYENGINE_RENDERING_NOINTERPVECTOR3PARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4710)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpVector3Parameter_TypeDefinitionIndex = 34119;

	class NoInterpVector3Parameter : public ::System::Net::Cache::RequestCachingSectionInternal
	{
	public:
		::System::Void .ctor(::UnityEngine::Vector3* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPVECTOR3PARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

