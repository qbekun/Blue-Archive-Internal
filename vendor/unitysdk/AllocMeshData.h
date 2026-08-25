#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::UIElements { class TextureId; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UIElements::UIR { class BMPAlloc; }
namespace UnityEngine::UIElements { class MeshWriteData; }

#define ALLOCMESHDATA_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xA431A70)

	inline static constexpr unsigned int AllocMeshData_TypeDefinitionIndex = 30723;

	class AllocMeshData : public Il2CppObject
	{
	public:
		Allocator* alloc; // 0x10
		::UnityEngine::Texture* texture; // 0x18
		::UnityEngine::UIElements::TextureId* svgTexture; // 0x20
		::UnityEngine::Material* material; // 0x28
		MeshFlags* flags; // 0x30
		::UnityEngine::UIElements::UIR::BMPAlloc* colorAlloc; // 0x34

		::UnityEngine::UIElements::MeshWriteData* Allocate(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::UnityEngine::UIElements::MeshWriteData*(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + ALLOCMESHDATA_ALLOCATE_OFFSET))(arg, arg, nullptr);
		}

	};

