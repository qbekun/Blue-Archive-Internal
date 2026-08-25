#pragma once
#include "unitysdk.h"

#define CHARACTERCARDSELECTEDMESSAGE_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0x22F2780)
#define CHARACTERCARDSELECTEDMESSAGE_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x22F2790)
#define CHARACTERCARDSELECTEDMESSAGE_SET_SELECTED_OFFSET UNITYSDK_OFFSET(0x22F27A0)
#define CHARACTERCARDSELECTEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F27B0)
#define CHARACTERCARDSELECTEDMESSAGE_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x22F27E0)

	inline static constexpr unsigned int CharacterCardSelectedMessage_TypeDefinitionIndex = 4898;

	class CharacterCardSelectedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::Boolean _Selected_k__BackingField; // 0x20

		::System::Boolean get_Selected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERCARDSELECTEDMESSAGE_GET_SELECTED_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERCARDSELECTEDMESSAGE_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Selected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERCARDSELECTEDMESSAGE_SET_SELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERCARDSELECTEDMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERCARDSELECTEDMESSAGE_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};

