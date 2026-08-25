#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class HideFlags; }

namespace UnityEngine
{
	inline static constexpr unsigned int HideFlags_TypeDefinitionIndex = 31176;

	class HideFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::HideFlags* None; // 0x0
		::UnityEngine::HideFlags* HideInHierarchy; // 0x0
		::UnityEngine::HideFlags* HideInInspector; // 0x0
		::UnityEngine::HideFlags* DontSaveInEditor; // 0x0
		::UnityEngine::HideFlags* NotEditable; // 0x0
		::UnityEngine::HideFlags* DontSaveInBuild; // 0x0
		::UnityEngine::HideFlags* DontUnloadUnusedAsset; // 0x0
		::UnityEngine::HideFlags* DontSave; // 0x0
		::UnityEngine::HideFlags* HideAndDontSave; // 0x0

	};
}

