#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_SAVEPERSISTENTVIEWDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3213D0)
#define UNITYENGINE_UIELEMENTS_SAVEPERSISTENTVIEWDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0xA321490)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int SavePersistentViewData_TypeDefinitionIndex = 30138;

	class SavePersistentViewData : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SAVEPERSISTENTVIEWDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SAVEPERSISTENTVIEWDATA_INVOKE_OFFSET))(nullptr);
		}

	};
}

