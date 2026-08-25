#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_INOTIFYVALUECHANGED`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_INOTIFYVALUECHANGED`1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_INOTIFYVALUECHANGED`1_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int INotifyValueChanged`1_TypeDefinitionIndex = 30338;

	class INotifyValueChanged`1 : public Il2CppObject
	{
	public:
		Il2CppObject* get_value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INOTIFYVALUECHANGED`1_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INOTIFYVALUECHANGED`1_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValueWithoutNotify(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INOTIFYVALUECHANGED`1_SETVALUEWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

	};
}

