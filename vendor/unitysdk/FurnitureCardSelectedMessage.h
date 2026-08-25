#pragma once
#include "unitysdk.h"

#define FURNITURECARDSELECTEDMESSAGE_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0x2583320)
#define FURNITURECARDSELECTEDMESSAGE_SET_SELECTED_OFFSET UNITYSDK_OFFSET(0x2583330)
#define FURNITURECARDSELECTEDMESSAGE_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x2583340)
#define FURNITURECARDSELECTEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2583350)
#define FURNITURECARDSELECTEDMESSAGE_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x2583380)

	inline static constexpr unsigned int FurnitureCardSelectedMessage_TypeDefinitionIndex = 6217;

	class FurnitureCardSelectedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x18
		::System::Boolean _Selected_k__BackingField; // 0x20

		::System::Boolean get_Selected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITURECARDSELECTEDMESSAGE_GET_SELECTED_OFFSET))(nullptr);
		}

		::System::Void set_Selected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FURNITURECARDSELECTEDMESSAGE_SET_SELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FURNITURECARDSELECTEDMESSAGE_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FURNITURECARDSELECTEDMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITURECARDSELECTEDMESSAGE_GET_SERVERID_OFFSET))(nullptr);
		}

	};

