#pragma once
#include "unitysdk.h"

#define FORMATIONCHARSLOTONLONGPRESSMESSAGE_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x24DAEC0)
#define FORMATIONCHARSLOTONLONGPRESSMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x24DAED0)

	inline static constexpr unsigned int FormationCharSlotOnLongPressMessage_TypeDefinitionIndex = 5979;

	class FormationCharSlotOnLongPressMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x18

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONCHARSLOTONLONGPRESSMESSAGE_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONCHARSLOTONLONGPRESSMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

