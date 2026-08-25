#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_DISPOSEHELPER_NOTIFYDISPOSEDUSED_OFFSET UNITYSDK_OFFSET(0xA3145E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DisposeHelper_TypeDefinitionIndex = 30083;

	class DisposeHelper : public Il2CppObject
	{
	public:
		::System::Void NotifyDisposedUsed(::System::IDisposable* arg)
		{
			((::System::Void(*)(::System::IDisposable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DISPOSEHELPER_NOTIFYDISPOSEDUSED_OFFSET))(arg, nullptr);
		}

	};
}

