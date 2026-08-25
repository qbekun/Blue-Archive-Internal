#pragma once
#include "../unitysdk.h"

namespace Spine { class SlotData; }
namespace Spine { class ClippingAttachment; }
namespace Spine { class Attachment; }

#define SPINE_CLIPPINGATTACHMENT_GET_ENDSLOT_OFFSET UNITYSDK_OFFSET(0x95A6910)
#define SPINE_CLIPPINGATTACHMENT_SET_ENDSLOT_OFFSET UNITYSDK_OFFSET(0x95A6920)
#define SPINE_CLIPPINGATTACHMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A5F40)
#define SPINE_CLIPPINGATTACHMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A6930)
#define SPINE_CLIPPINGATTACHMENT_COPY_OFFSET UNITYSDK_OFFSET(0x95A69A0)

namespace Spine
{
	inline static constexpr unsigned int ClippingAttachment_TypeDefinitionIndex = 35019;

	class ClippingAttachment : public Il2CppObject
	{
	public:
		::Spine::SlotData* endSlot; // 0x40

		::Spine::SlotData* get_EndSlot()
		{
			return (return (::Spine::SlotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_CLIPPINGATTACHMENT_GET_ENDSLOT_OFFSET))(nullptr);
		}

		::System::Void set_EndSlot(::Spine::SlotData* arg)
		{
			((::System::Void(*)(::Spine::SlotData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CLIPPINGATTACHMENT_SET_ENDSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CLIPPINGATTACHMENT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::Spine::ClippingAttachment* arg)
		{
			((::System::Void(*)(::Spine::ClippingAttachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CLIPPINGATTACHMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::Spine::Attachment* Copy()
		{
			return (return (::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_CLIPPINGATTACHMENT_COPY_OFFSET))(nullptr);
		}

	};
}

