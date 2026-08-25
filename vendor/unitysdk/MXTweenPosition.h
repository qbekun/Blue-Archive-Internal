#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MXTWEENPOSITION_APPLY_OFFSET UNITYSDK_OFFSET(0x205B340)
#define MXTWEENPOSITION_LERP_OFFSET UNITYSDK_OFFSET(0x205B380)
#define MXTWEENPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x205B3F0)

	inline static constexpr unsigned int MXTweenPosition_TypeDefinitionIndex = 3365;

	class MXTweenPosition : public ::System::Resources::ResourceFallbackManager
	{
	public:
		::System::Void Apply(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXTWEENPOSITION_APPLY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* Lerp(::System::Single arg)
		{
			return ((::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXTWEENPOSITION_LERP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTWEENPOSITION_.CTOR_OFFSET))(nullptr);
		}

	};

