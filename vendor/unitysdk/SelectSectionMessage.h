#pragma once
#include "unitysdk.h"

#define SELECTSECTIONMESSAGE_GET_SECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x26A7180)
#define SELECTSECTIONMESSAGE_SET_SECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x26A7190)
#define SELECTSECTIONMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26A71A0)

	inline static constexpr unsigned int SelectSectionMessage_TypeDefinitionIndex = 6860;

	class SelectSectionMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int32 _SectionIndex_k__BackingField; // 0x18

		::System::Int32 get_SectionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTSECTIONMESSAGE_GET_SECTIONINDEX_OFFSET))(nullptr);
		}

		::System::Void set_SectionIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SELECTSECTIONMESSAGE_SET_SECTIONINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SELECTSECTIONMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

