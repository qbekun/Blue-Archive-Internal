#pragma once
#include "unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class IRenderGraphResourcePool; }

#define RENDERGRAPHRESOURCESDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x9FA2E80)
#define RENDERGRAPHRESOURCESDATA_ADDNEWRENDERGRAPHRESOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RENDERGRAPHRESOURCESDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA03B0)
#define RENDERGRAPHRESOURCESDATA_PURGEUNUSEDGRAPHICSRESOURCES_OFFSET UNITYSDK_OFFSET(0x9FA2F90)
#define RENDERGRAPHRESOURCESDATA_CLEANUP_OFFSET UNITYSDK_OFFSET(0x9FA3060)

	inline static constexpr unsigned int RenderGraphResourcesData_TypeDefinitionIndex = 33867;

	class RenderGraphResourcesData : public Il2CppObject
	{
	public:
		Il2CppObject* resourceArray; // 0x10
		::System::Int32 sharedResourcesCount; // 0x18
		::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool* pool; // 0x20
		ResourceCreateCallback* createResourceCallback; // 0x28
		ResourceCallback* releaseResourceCallback; // 0x30

		::System::Void Clear(::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RENDERGRAPHRESOURCESDATA_CLEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 AddNewRenderGraphResource(Il2CppObject&* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(Il2CppObject&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RENDERGRAPHRESOURCESDATA_ADDNEWRENDERGRAPHRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERGRAPHRESOURCESDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PurgeUnusedGraphicsResources(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RENDERGRAPHRESOURCESDATA_PURGEUNUSEDGRAPHICSRESOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERGRAPHRESOURCESDATA_CLEANUP_OFFSET))(nullptr);
		}

	};

