#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class FilmGrainLookup; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FILMGRAINLOOKUPPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA063FE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FilmGrainLookupParameter_TypeDefinitionIndex = 32677;

	class FilmGrainLookupParameter : public ::System::Net::NetworkInformation::Win32_SOCKET_ADDRESS
	{
	public:
		::System::Void .ctor(::UnityEngine::Rendering::Universal::FilmGrainLookup* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::FilmGrainLookup*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FILMGRAINLOOKUPPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

