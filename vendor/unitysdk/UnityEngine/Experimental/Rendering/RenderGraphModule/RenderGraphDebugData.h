#pragma once
#include "../../../../unitysdk.h"

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F90EC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x9F90F70)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphDebugData_TypeDefinitionIndex = 33838;

	class RenderGraphDebugData : public Il2CppObject
	{
	public:
		Il2CppObject* passList; // 0x10
		::Il2CppArray<::System::Object*>* resourceLists; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGDATA_CLEAR_OFFSET))(nullptr);
		}

	};
}

