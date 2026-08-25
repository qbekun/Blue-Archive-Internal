#pragma once
#include "unitysdk.h"

namespace Spine { class Attachment; }

#define SKINENTRY_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95DF710)
#define SKINENTRY_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x95DF720)
#define SKINENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x95DF190)
#define SKINENTRY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x95DF730)

	inline static constexpr unsigned int SkinEntry_TypeDefinitionIndex = 35066;

	class SkinEntry : public Il2CppObject
	{
	public:
		::System::Int32 slotIndex; // 0x10
		::System::String* name; // 0x18
		::Spine::Attachment* attachment; // 0x20

		::Spine::Attachment* get_Attachment()
		{
			return (return (::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKINENTRY_GET_ATTACHMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_SlotIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SKINENTRY_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::Spine::Attachment* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::Spine::Attachment*, ::PVOID))((::PBYTE)hIl2Cpp + SKINENTRY_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKINENTRY_GET_NAME_OFFSET))(nullptr);
		}

	};

