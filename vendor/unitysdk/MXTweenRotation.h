#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MXTWEENROTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x205B430)
#define MXTWEENROTATION_APPLY_OFFSET UNITYSDK_OFFSET(0x205B470)
#define MXTWEENROTATION_LERP_OFFSET UNITYSDK_OFFSET(0x205B4F0)

	inline static constexpr unsigned int MXTweenRotation_TypeDefinitionIndex = 3366;

	class MXTweenRotation : public ::System::Resources::ResourceFallbackManager
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTWEENROTATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXTWEENROTATION_APPLY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* Lerp(::System::Single arg)
		{
			return ((::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXTWEENROTATION_LERP_OFFSET))(arg, nullptr);
		}

	};

