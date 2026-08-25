#pragma once
#include "../unitysdk.h"

namespace Spine { class VertexAttachment; }
namespace Spine { class Inherit; }

#define SPINE_SPINESKELETONEXTENSIONS_ISWEIGHTED_OFFSET UNITYSDK_OFFSET(0x95E71B0)
#define SPINE_SPINESKELETONEXTENSIONS_INHERITSROTATION_OFFSET UNITYSDK_OFFSET(0x95E71E0)
#define SPINE_SPINESKELETONEXTENSIONS_INHERITSSCALE_OFFSET UNITYSDK_OFFSET(0x95E71F0)

namespace Spine
{
	inline static constexpr unsigned int SpineSkeletonExtensions_TypeDefinitionIndex = 35264;

	class SpineSkeletonExtensions : public Il2CppObject
	{
	public:
		::System::Boolean IsWeighted(::Spine::VertexAttachment* arg)
		{
			return (return (::System::Boolean(*)(::Spine::VertexAttachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SPINESKELETONEXTENSIONS_ISWEIGHTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean InheritsRotation(::Spine::Inherit* arg)
		{
			return (return (::System::Boolean(*)(::Spine::Inherit*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SPINESKELETONEXTENSIONS_INHERITSROTATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean InheritsScale(::Spine::Inherit* arg)
		{
			return (return (::System::Boolean(*)(::Spine::Inherit*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SPINESKELETONEXTENSIONS_INHERITSSCALE_OFFSET))(arg, nullptr);
		}

	};
}

