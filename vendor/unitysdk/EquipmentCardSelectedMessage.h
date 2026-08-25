#pragma once
#include "unitysdk.h"

#define EQUIPMENTCARDSELECTEDMESSAGE_SET_SELECTED_OFFSET UNITYSDK_OFFSET(0x2416420)
#define EQUIPMENTCARDSELECTEDMESSAGE_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0x2416430)
#define EQUIPMENTCARDSELECTEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2416440)
#define EQUIPMENTCARDSELECTEDMESSAGE_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x2416470)
#define EQUIPMENTCARDSELECTEDMESSAGE_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x2416480)

	inline static constexpr unsigned int EquipmentCardSelectedMessage_TypeDefinitionIndex = 5475;

	class EquipmentCardSelectedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::Boolean _Selected_k__BackingField; // 0x20

		::System::Void set_Selected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTCARDSELECTEDMESSAGE_SET_SELECTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Selected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTCARDSELECTEDMESSAGE_GET_SELECTED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTCARDSELECTEDMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTCARDSELECTEDMESSAGE_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTCARDSELECTEDMESSAGE_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};

