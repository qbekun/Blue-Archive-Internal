#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequest; }

#define UNITYENGINE_NETWORKING_UNITYWEBREQUESTTEXTURE_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA4A7410)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUESTTEXTURE_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA4A7420)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UnityWebRequestTexture_TypeDefinitionIndex = 38033;

	class UnityWebRequestTexture : public Il2CppObject
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* GetTexture(::System::String* str)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUESTTEXTURE_GETTEXTURE_OFFSET))(str, nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* GetTexture(::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUESTTEXTURE_GETTEXTURE_OFFSET))(str, arg, nullptr);
		}

	};
}

