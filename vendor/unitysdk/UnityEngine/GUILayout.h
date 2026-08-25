#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GUILayoutOption; }

#define UNITYENGINE_GUILAYOUT_WIDTH_OFFSET UNITYSDK_OFFSET(0xA27BF60)
#define UNITYENGINE_GUILAYOUT_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA27C000)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayout_TypeDefinitionIndex = 36538;

	class GUILayout : public Il2CppObject
	{
	public:
		::UnityEngine::GUILayoutOption* Width(::System::Single arg)
		{
			return (return (::UnityEngine::GUILayoutOption*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_WIDTH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUILayoutOption* Height(::System::Single arg)
		{
			return (return (::UnityEngine::GUILayoutOption*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUT_HEIGHT_OFFSET))(arg, nullptr);
		}

	};
}

