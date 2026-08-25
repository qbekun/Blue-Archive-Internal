#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Jobs { class TransformAccessArray&; }

#define UNITYENGINE_RENDERING_ARRAYEXTENSIONS_RESIZEARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_ARRAYEXTENSIONS_RESIZEARRAY_OFFSET UNITYSDK_OFFSET(0x9FCD700)
#define UNITYENGINE_RENDERING_ARRAYEXTENSIONS_RESIZEARRAY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ArrayExtensions_TypeDefinitionIndex = 34042;

	class ArrayExtensions : public Il2CppObject
	{
	public:
		::System::Void ResizeArray(Il2CppObject&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ARRAYEXTENSIONS_RESIZEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResizeArray(::UnityEngine::Jobs::TransformAccessArray&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Jobs::TransformAccessArray&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ARRAYEXTENSIONS_RESIZEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResizeArray(::System::Object[]&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ARRAYEXTENSIONS_RESIZEARRAY_OFFSET))(arg, arg, nullptr);
		}

	};
}

