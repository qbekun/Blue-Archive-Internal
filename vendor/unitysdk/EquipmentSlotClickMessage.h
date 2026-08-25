#pragma once
#include "unitysdk.h"

#define EQUIPMENTSLOTCLICKMESSAGE_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x2416490)
#define EQUIPMENTSLOTCLICKMESSAGE_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x24164A0)
#define EQUIPMENTSLOTCLICKMESSAGE_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x24164B0)
#define EQUIPMENTSLOTCLICKMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x24164C0)
#define EQUIPMENTSLOTCLICKMESSAGE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x24164F0)

	inline static constexpr unsigned int EquipmentSlotClickMessage_TypeDefinitionIndex = 5476;

	class EquipmentSlotClickMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int32 _SlotIndex_k__BackingField; // 0x18
		::System::Int64 _UniqueId_k__BackingField; // 0x20

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSLOTCLICKMESSAGE_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSLOTCLICKMESSAGE_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SlotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSLOTCLICKMESSAGE_SET_SLOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSLOTCLICKMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTSLOTCLICKMESSAGE_GET_SLOTINDEX_OFFSET))(nullptr);
		}

	};

