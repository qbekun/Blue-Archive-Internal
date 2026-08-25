#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Mesh; }
namespace Spine::Unity { class SkeletonRendererInstruction; }

#define SMARTMESH_.CTOR_OFFSET UNITYSDK_OFFSET(0x961C920)
#define SMARTMESH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x961C450)
#define SMARTMESH_CLEAR_OFFSET UNITYSDK_OFFSET(0x961C6B0)

	inline static constexpr unsigned int SmartMesh_TypeDefinitionIndex = 35357;

	class SmartMesh : public Il2CppObject
	{
	public:
		::UnityEngine::Mesh* mesh; // 0x10
		::Spine::Unity::SkeletonRendererInstruction* instructionUsed; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SMARTMESH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SMARTMESH_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SMARTMESH_CLEAR_OFFSET))(nullptr);
		}

	};

