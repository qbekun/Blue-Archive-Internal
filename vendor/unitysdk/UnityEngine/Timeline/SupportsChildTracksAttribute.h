#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_SUPPORTSCHILDTRACKSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1AB790)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SupportsChildTracksAttribute_TypeDefinitionIndex = 36321;

	class SupportsChildTracksAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* childType; // 0x10
		::System::Int32 levels; // 0x18

		::System::Void .ctor(::System::Type* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SUPPORTSCHILDTRACKSATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

