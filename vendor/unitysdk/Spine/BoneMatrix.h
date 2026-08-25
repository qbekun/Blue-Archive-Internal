#pragma once
#include "../unitysdk.h"

namespace Spine { class BoneMatrix; }
namespace Spine { class BoneData; }
namespace Spine { class Bone; }

#define SPINE_BONEMATRIX_CALCULATESETUPWORLD_OFFSET UNITYSDK_OFFSET(0x95E67F0)
#define SPINE_BONEMATRIX_GETINHERITEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x95E6880)
#define SPINE_BONEMATRIX_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E6F70)
#define SPINE_BONEMATRIX_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E7060)
#define SPINE_BONEMATRIX_TRANSFORMMATRIX_OFFSET UNITYSDK_OFFSET(0x95E7150)

namespace Spine
{
	inline static constexpr unsigned int BoneMatrix_TypeDefinitionIndex = 35263;

	class BoneMatrix : public Il2CppObject
	{
	public:
		::System::Single a; // 0x10
		::System::Single b; // 0x14
		::System::Single c; // 0x18
		::System::Single d; // 0x1C
		::System::Single x; // 0x20
		::System::Single y; // 0x24

		::Spine::BoneMatrix* CalculateSetupWorld(::Spine::BoneData* arg)
		{
			return (return (::Spine::BoneMatrix*(*)(::Spine::BoneData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEMATRIX_CALCULATESETUPWORLD_OFFSET))(arg, nullptr);
		}

		::Spine::BoneMatrix* GetInheritedInternal(::Spine::BoneData* arg, ::Spine::BoneMatrix* arg)
		{
			return (return (::Spine::BoneMatrix*(*)(::Spine::BoneData*, ::Spine::BoneMatrix*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEMATRIX_GETINHERITEDINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Spine::BoneData* arg)
		{
			((::System::Void(*)(::Spine::BoneData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEMATRIX_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Spine::Bone* arg)
		{
			((::System::Void(*)(::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEMATRIX_.CTOR_OFFSET))(arg, nullptr);
		}

		::Spine::BoneMatrix* TransformMatrix(::Spine::BoneMatrix* arg)
		{
			return (return (::Spine::BoneMatrix*(*)(::Spine::BoneMatrix*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEMATRIX_TRANSFORMMATRIX_OFFSET))(arg, nullptr);
		}

	};
}

