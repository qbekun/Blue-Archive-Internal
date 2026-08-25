#pragma once
#include "unitysdk.h"

#define NONEQUIPMENTCARDSELECTEDMESSAGE_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0x26B3510)
#define NONEQUIPMENTCARDSELECTEDMESSAGE_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x26B3520)
#define NONEQUIPMENTCARDSELECTEDMESSAGE_SET_SELECTED_OFFSET UNITYSDK_OFFSET(0x26B3530)
#define NONEQUIPMENTCARDSELECTEDMESSAGE_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x26B3540)
#define NONEQUIPMENTCARDSELECTEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26B3550)

	inline static constexpr unsigned int NonEquipmentCardSelectedMessage_TypeDefinitionIndex = 6903;

	class NonEquipmentCardSelectedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x18
		::System::Boolean _Selected_k__BackingField; // 0x20

		::System::Boolean get_Selected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NONEQUIPMENTCARDSELECTEDMESSAGE_GET_SELECTED_OFFSET))(nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NONEQUIPMENTCARDSELECTEDMESSAGE_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_Selected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NONEQUIPMENTCARDSELECTEDMESSAGE_SET_SELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NONEQUIPMENTCARDSELECTEDMESSAGE_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NONEQUIPMENTCARDSELECTEDMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

