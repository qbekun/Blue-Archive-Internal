#pragma once
#include "unitysdk.h"

class EquipmentObject;

#define EQUIPMENTBATCHMODEITEMINPUTRECORD_GET_TARGETRESULT_OFFSET UNITYSDK_OFFSET(0x23F6620)
#define EQUIPMENTBATCHMODEITEMINPUTRECORD_SET_TARGETRESULT_OFFSET UNITYSDK_OFFSET(0x23F6630)
#define EQUIPMENTBATCHMODEITEMINPUTRECORD_GET_FEEDEXP_OFFSET UNITYSDK_OFFSET(0x23F6640)
#define EQUIPMENTBATCHMODEITEMINPUTRECORD_GET_ISUSEDMAXBTN_OFFSET UNITYSDK_OFFSET(0x23F6650)
#define EQUIPMENTBATCHMODEITEMINPUTRECORD_SET_ISUSEDMAXBTN_OFFSET UNITYSDK_OFFSET(0x23F6660)
#define EQUIPMENTBATCHMODEITEMINPUTRECORD_SET_INPUTEXPITEMHISTORY_OFFSET UNITYSDK_OFFSET(0x23F6670)
#define EQUIPMENTBATCHMODEITEMINPUTRECORD_GET_TIERUPCOST_OFFSET UNITYSDK_OFFSET(0x23F6680)
#define EQUIPMENTBATCHMODEITEMINPUTRECORD_GET_REQUIEREDPIECES_OFFSET UNITYSDK_OFFSET(0x23F6690)
#define EQUIPMENTBATCHMODEITEMINPUTRECORD_SET_TIERUPCOST_OFFSET UNITYSDK_OFFSET(0x23F66A0)
#define EQUIPMENTBATCHMODEITEMINPUTRECORD_RESET_OFFSET UNITYSDK_OFFSET(0x23F66B0)
#define EQUIPMENTBATCHMODEITEMINPUTRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x23F6980)
#define EQUIPMENTBATCHMODEITEMINPUTRECORD_GET_REQUIEREDEXP_OFFSET UNITYSDK_OFFSET(0x23F69C0)
#define EQUIPMENTBATCHMODEITEMINPUTRECORD_SET_REQUIEREDEXP_OFFSET UNITYSDK_OFFSET(0x23F69D0)
#define EQUIPMENTBATCHMODEITEMINPUTRECORD_SET_REQUIEREDPIECES_OFFSET UNITYSDK_OFFSET(0x23F69E0)
#define EQUIPMENTBATCHMODEITEMINPUTRECORD_GET_INPUTEXPITEMHISTORY_OFFSET UNITYSDK_OFFSET(0x23F69F0)
#define EQUIPMENTBATCHMODEITEMINPUTRECORD_SET_FEEDEXP_OFFSET UNITYSDK_OFFSET(0x23F6A00)

	inline static constexpr unsigned int EquipmentBatchModeItemInputRecord_TypeDefinitionIndex = 5430;

	class EquipmentBatchModeItemInputRecord : public Il2CppObject
	{
	public:
		EquipmentObject* _TargetResult_k__BackingField; // 0x10
		Il2CppObject* _InputExpItemHistory_k__BackingField; // 0x18
		Il2CppObject* _RequieredPieces_k__BackingField; // 0x20
		::System::Int64 _RequieredExp_k__BackingField; // 0x28
		::System::Int64 _FeedExp_k__BackingField; // 0x30
		::System::Int64 _TierUpCost_k__BackingField; // 0x38
		Il2CppObject* SelectTicketReplaceInfos; // 0x40
		Il2CppObject* ChangePieceInfos; // 0x48
		::System::Boolean _IsUsedMaxBtn_k__BackingField; // 0x50
		Il2CppObject* expItems; // 0x58

		EquipmentObject* get_TargetResult()
		{
			return ((EquipmentObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEITEMINPUTRECORD_GET_TARGETRESULT_OFFSET))(nullptr);
		}

		::System::Void set_TargetResult(EquipmentObject* arg)
		{
			((::System::Void(*)(EquipmentObject*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEITEMINPUTRECORD_SET_TARGETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FeedExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEITEMINPUTRECORD_GET_FEEDEXP_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUsedMaxBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEITEMINPUTRECORD_GET_ISUSEDMAXBTN_OFFSET))(nullptr);
		}

		::System::Void set_IsUsedMaxBtn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEITEMINPUTRECORD_SET_ISUSEDMAXBTN_OFFSET))(arg, nullptr);
		}

		::System::Void set_InputExpItemHistory(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEITEMINPUTRECORD_SET_INPUTEXPITEMHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TierUpCost()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEITEMINPUTRECORD_GET_TIERUPCOST_OFFSET))(nullptr);
		}

		Il2CppObject* get_RequieredPieces()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEITEMINPUTRECORD_GET_REQUIEREDPIECES_OFFSET))(nullptr);
		}

		::System::Void set_TierUpCost(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEITEMINPUTRECORD_SET_TIERUPCOST_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEITEMINPUTRECORD_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEITEMINPUTRECORD_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RequieredExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEITEMINPUTRECORD_GET_REQUIEREDEXP_OFFSET))(nullptr);
		}

		::System::Void set_RequieredExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEITEMINPUTRECORD_SET_REQUIEREDEXP_OFFSET))(arg, nullptr);
		}

		::System::Void set_RequieredPieces(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEITEMINPUTRECORD_SET_REQUIEREDPIECES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_InputExpItemHistory()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEITEMINPUTRECORD_GET_INPUTEXPITEMHISTORY_OFFSET))(nullptr);
		}

		::System::Void set_FeedExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEITEMINPUTRECORD_SET_FEEDEXP_OFFSET))(arg, nullptr);
		}

	};

