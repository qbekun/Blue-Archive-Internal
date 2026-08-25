#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_VOLUMECOMPONENTMENUFORRENDERPIPELINE_GET_PIPELINETYPES_OFFSET UNITYSDK_OFFSET(0x9FE00E0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENTMENUFORRENDERPIPELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE00F0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeComponentMenuForRenderPipeline_TypeDefinitionIndex = 34084;

	class VolumeComponentMenuForRenderPipeline : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _pipelineTypes_k__BackingField; // 0x18

		::Il2CppArray<::System::Object*>* get_pipelineTypes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENTMENUFORRENDERPIPELINE_GET_PIPELINETYPES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENTMENUFORRENDERPIPELINE_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

