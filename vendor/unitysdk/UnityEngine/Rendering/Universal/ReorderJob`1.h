#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_REORDERJOB`1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ReorderJob`1_TypeDefinitionIndex = 32758;

	class ReorderJob`1 : public Il2CppObject
	{
	public:
		Il2CppObject* indices; // 0x0
		Il2CppObject* input; // 0x0
		Il2CppObject* output; // 0x0

		::System::Void Execute(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REORDERJOB`1_EXECUTE_OFFSET))(arg, nullptr);
		}

	};
}

