#pragma once
#include "../../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SORTPREPUNCTUALLIGHT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0AD030)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SORTPREPUNCTUALLIGHT_COMPARE_OFFSET UNITYSDK_OFFSET(0xA0AD040)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int SortPrePunctualLight_TypeDefinitionIndex = 32853;

	class SortPrePunctualLight : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SORTPREPUNCTUALLIGHT_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Compare(PrePunctualLight* arg, PrePunctualLight* arg)
		{
			return (return (::System::Int32(*)(PrePunctualLight*, PrePunctualLight*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SORTPREPUNCTUALLIGHT_COMPARE_OFFSET))(arg, arg, nullptr);
		}

	};
}

