#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class MeshWriteData; }

#define ALLOCATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA439340)
#define ALLOCATOR_INVOKE_OFFSET UNITYSDK_OFFSET(0xA439410)

	inline static constexpr unsigned int Allocator_TypeDefinitionIndex = 30722;

	class Allocator : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ALLOCATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::MeshWriteData* Invoke(::System::UInt32 arg, ::System::UInt32 arg, AllocMeshData&* arg)
		{
			return (return (::UnityEngine::UIElements::MeshWriteData*(*)(::System::UInt32, ::System::UInt32, AllocMeshData&*, ::PVOID))((::PBYTE)hIl2Cpp + ALLOCATOR_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

