#pragma once
#include "unitysdk.h"

#define REFRESHFREEPRODUCTREDDOTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26458D0)
#define REFRESHFREEPRODUCTREDDOTMESSAGE_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x26458F0)
#define REFRESHFREEPRODUCTREDDOTMESSAGE_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x2645900)

	inline static constexpr unsigned int RefreshFreeProductRedDotMessage_TypeDefinitionIndex = 6621;

	class RefreshFreeProductRedDotMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Boolean _IsShow_k__BackingField; // 0x18

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + REFRESHFREEPRODUCTREDDOTMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsShow(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + REFRESHFREEPRODUCTREDDOTMESSAGE_SET_ISSHOW_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REFRESHFREEPRODUCTREDDOTMESSAGE_GET_ISSHOW_OFFSET))(nullptr);
		}

	};

