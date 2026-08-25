#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTEXTRACTIONJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0744B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightExtractionJob_TypeDefinitionIndex = 32754;

	class LightExtractionJob : public Il2CppObject
	{
	public:
		Il2CppObject* lights; // 0x10
		Il2CppObject* lightTypes; // 0x20
		Il2CppObject* radiuses; // 0x30
		Il2CppObject* directions; // 0x40
		Il2CppObject* positions; // 0x50
		Il2CppObject* coneRadiuses; // 0x60

		::System::Void Execute(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTEXTRACTIONJOB_EXECUTE_OFFSET))(arg, nullptr);
		}

	};
}

