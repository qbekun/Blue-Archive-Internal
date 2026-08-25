#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SkeletonRendererInstruction; }

#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_SETWITHSUBSET_OFFSET UNITYSDK_OFFSET(0x961CB80)
#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_GEOMETRYNOTEQUAL_OFFSET UNITYSDK_OFFSET(0x961CF50)
#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x961D0F0)
#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x961CA30)
#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_SET_OFFSET UNITYSDK_OFFSET(0x961D140)
#define SPINE_UNITY_SKELETONRENDERERINSTRUCTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x961CB00)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRendererInstruction_TypeDefinitionIndex = 35359;

	class SkeletonRendererInstruction : public Il2CppObject
	{
	public:
		Il2CppObject* submeshInstructions; // 0x10
		::System::Boolean immutableTriangles; // 0x18
		::System::Boolean hasActiveClipping; // 0x19
		::System::Int32 rawVertexCount; // 0x1C
		Il2CppObject* attachments; // 0x20

		::System::Void SetWithSubset(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_SETWITHSUBSET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GeometryNotEqual(::Spine::Unity::SkeletonRendererInstruction* arg, ::Spine::Unity::SkeletonRendererInstruction* arg)
		{
			return (return (::System::Boolean(*)(::Spine::Unity::SkeletonRendererInstruction*, ::Spine::Unity::SkeletonRendererInstruction*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_GEOMETRYNOTEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Set(::Spine::Unity::SkeletonRendererInstruction* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRendererInstruction*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_SET_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERERINSTRUCTION_CLEAR_OFFSET))(nullptr);
		}

	};
}

