#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Color&; }
namespace UnityEngine { class Color; }

#define UNITYENGINE_UI_SETPROPERTYUTILITY_SETSTRUCT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_SETPROPERTYUTILITY_SETCOLOR_OFFSET UNITYSDK_OFFSET(0xA47EAB0)
#define UNITYENGINE_UI_SETPROPERTYUTILITY_SETCLASS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SetPropertyUtility_TypeDefinitionIndex = 34845;

	class SetPropertyUtility : public Il2CppObject
	{
	public:
		::System::Boolean SetStruct(Il2CppObject&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SETPROPERTYUTILITY_SETSTRUCT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetColor(::UnityEngine::Color&* arg, ::UnityEngine::Color* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color&*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SETPROPERTYUTILITY_SETCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetClass(Il2CppObject&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SETPROPERTYUTILITY_SETCLASS_OFFSET))(arg, arg, nullptr);
		}

	};
}

