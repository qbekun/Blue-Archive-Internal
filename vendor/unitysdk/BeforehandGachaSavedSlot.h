#pragma once
#include "unitysdk.h"

class BeforehandGachaSavedSlot;

#define BEFOREHANDGACHASAVEDSLOT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA6CD70)
#define BEFOREHANDGACHASAVEDSLOT_GET_RESULTS_OFFSET UNITYSDK_OFFSET(0xA6CD80)
#define BEFOREHANDGACHASAVEDSLOT_GET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0xA6CD90)
#define BEFOREHANDGACHASAVEDSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA6CDA0)
#define BEFOREHANDGACHASAVEDSLOT_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xA6CDF0)
#define BEFOREHANDGACHASAVEDSLOT_EMPTY_OFFSET UNITYSDK_OFFSET(0xA6CAA0)
#define BEFOREHANDGACHASAVEDSLOT_FROMRESULT_OFFSET UNITYSDK_OFFSET(0xA6CB10)

	inline static constexpr unsigned int BeforehandGachaSavedSlot_TypeDefinitionIndex = 7848;

	class BeforehandGachaSavedSlot : public Il2CppObject
	{
	public:
		::System::Int32 _SlotIndex_k__BackingField; // 0x10
		::System::Boolean _IsEmpty_k__BackingField; // 0x14
		::System::Int64 _TargetIndex_k__BackingField; // 0x18
		Il2CppObject* _Results_k__BackingField; // 0x20

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHASAVEDSLOT_GET_ISEMPTY_OFFSET))(nullptr);
		}

		Il2CppObject* get_Results()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHASAVEDSLOT_GET_RESULTS_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHASAVEDSLOT_GET_TARGETINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg2, ::System::Int64 arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHASAVEDSLOT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHASAVEDSLOT_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		BeforehandGachaSavedSlot* Empty(::System::Int32 arg)
		{
			return ((BeforehandGachaSavedSlot*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHASAVEDSLOT_EMPTY_OFFSET))(arg, nullptr);
		}

		BeforehandGachaSavedSlot* FromResult(::System::Int32 arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			return ((BeforehandGachaSavedSlot*(*)(::System::Int32, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHASAVEDSLOT_FROMRESULT_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

