#pragma once
#include "../unitysdk.h"

namespace Spine { class AttachmentType; }

namespace Spine
{
	inline static constexpr unsigned int AttachmentType_TypeDefinitionIndex = 35017;

	class AttachmentType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Spine::AttachmentType* Region; // 0x0
		::Spine::AttachmentType* Boundingbox; // 0x0
		::Spine::AttachmentType* Mesh; // 0x0
		::Spine::AttachmentType* Linkedmesh; // 0x0
		::Spine::AttachmentType* Path; // 0x0
		::Spine::AttachmentType* Point; // 0x0
		::Spine::AttachmentType* Clipping; // 0x0
		::Spine::AttachmentType* Sequence; // 0x0

	};
}

