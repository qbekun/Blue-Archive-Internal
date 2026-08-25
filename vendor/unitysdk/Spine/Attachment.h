#pragma once
#include "../unitysdk.h"

namespace Spine { class Attachment; }

#define SPINE_ATTACHMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x95A6300)
#define SPINE_ATTACHMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A6310)
#define SPINE_ATTACHMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A63B0)
#define SPINE_ATTACHMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95A63F0)
#define SPINE_ATTACHMENT_COPY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine
{
	inline static constexpr unsigned int Attachment_TypeDefinitionIndex = 35015;

	class Attachment : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::Spine::Attachment* arg)
		{
			((::System::Void(*)(::Spine::Attachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT_TOSTRING_OFFSET))(nullptr);
		}

		::Spine::Attachment* Copy()
		{
			return (return (::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT_COPY_OFFSET))(nullptr);
		}

	};
}

