#pragma once
#include "unitysdk.h"

#define SELECTACADEMYLOCATIONMESSAGE_SET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x21BAF90)
#define SELECTACADEMYLOCATIONMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21BAFA0)
#define SELECTACADEMYLOCATIONMESSAGE_GET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x21BAFC0)

	inline static constexpr unsigned int SelectAcademyLocationMessage_TypeDefinitionIndex = 4212;

	class SelectAcademyLocationMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _LocationId_k__BackingField; // 0x18

		::System::Void set_LocationId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SELECTACADEMYLOCATIONMESSAGE_SET_LOCATIONID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SELECTACADEMYLOCATIONMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LocationId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTACADEMYLOCATIONMESSAGE_GET_LOCATIONID_OFFSET))(nullptr);
		}

	};

