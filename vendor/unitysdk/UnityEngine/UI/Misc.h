#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_UI_MISC_DESTROY_OFFSET UNITYSDK_OFFSET(0xA46FB40)
#define UNITYENGINE_UI_MISC_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xA46FC30)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Misc_TypeDefinitionIndex = 34827;

	class Misc : public Il2CppObject
	{
	public:
		::System::Void Destroy(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MISC_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyImmediate(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MISC_DESTROYIMMEDIATE_OFFSET))(arg, nullptr);
		}

	};
}

