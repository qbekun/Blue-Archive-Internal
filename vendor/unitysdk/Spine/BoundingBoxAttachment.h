#pragma once
#include "../unitysdk.h"

namespace Spine { class BoundingBoxAttachment; }
namespace Spine { class Attachment; }

#define SPINE_BOUNDINGBOXATTACHMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A5790)
#define SPINE_BOUNDINGBOXATTACHMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A6580)
#define SPINE_BOUNDINGBOXATTACHMENT_COPY_OFFSET UNITYSDK_OFFSET(0x95A6880)

namespace Spine
{
	inline static constexpr unsigned int BoundingBoxAttachment_TypeDefinitionIndex = 35018;

	class BoundingBoxAttachment : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BOUNDINGBOXATTACHMENT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::Spine::BoundingBoxAttachment* arg)
		{
			((::System::Void(*)(::Spine::BoundingBoxAttachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BOUNDINGBOXATTACHMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::Spine::Attachment* Copy()
		{
			return (return (::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BOUNDINGBOXATTACHMENT_COPY_OFFSET))(nullptr);
		}

	};
}

