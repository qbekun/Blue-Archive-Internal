#pragma once
#include "unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphPass; }
namespace UnityEngine::Rendering { class GraphicsFence; }

#define COMPILEDPASSINFO_RESET_OFFSET UNITYSDK_OFFSET(0x9F9A260)
#define COMPILEDPASSINFO_GET_ALLOWPASSCULLING_OFFSET UNITYSDK_OFFSET(0x9F9A5B0)

	inline static constexpr unsigned int CompiledPassInfo_TypeDefinitionIndex = 33840;

	class CompiledPassInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass; // 0x10
		::Il2CppArray<::System::Object*>* resourceCreateList; // 0x18
		::Il2CppArray<::System::Object*>* resourceReleaseList; // 0x20
		::System::Int32 refCount; // 0x28
		::System::Boolean culled; // 0x2C
		::System::Boolean hasSideEffect; // 0x2D
		::System::Int32 syncToPassIndex; // 0x30
		::System::Int32 syncFromPassIndex; // 0x34
		::System::Boolean needGraphicsFence; // 0x38
		::UnityEngine::Rendering::GraphicsFence* fence; // 0x40
		::System::Boolean enableAsyncCompute; // 0x50

		::System::Void Reset(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*, ::PVOID))((::PBYTE)hIl2Cpp + COMPILEDPASSINFO_RESET_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_allowPassCulling()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPILEDPASSINFO_GET_ALLOWPASSCULLING_OFFSET))(nullptr);
		}

	};

