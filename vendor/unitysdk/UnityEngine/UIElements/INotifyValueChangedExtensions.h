#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_INOTIFYVALUECHANGEDEXTENSIONS_REGISTERVALUECHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_INOTIFYVALUECHANGEDEXTENSIONS_UNREGISTERVALUECHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int INotifyValueChangedExtensions_TypeDefinitionIndex = 30339;

	class INotifyValueChangedExtensions : public Il2CppObject
	{
	public:
		::System::Boolean RegisterValueChangedCallback(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INOTIFYVALUECHANGEDEXTENSIONS_REGISTERVALUECHANGEDCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean UnregisterValueChangedCallback(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INOTIFYVALUECHANGEDEXTENSIONS_UNREGISTERVALUECHANGEDCALLBACK_OFFSET))(arg, arg, nullptr);
		}

	};
}

