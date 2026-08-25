#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace UnityEngine { class Color; }
class BeforehandGachaSavedSlotState;
class UIGachaItem;

#define UIBEFOREHANDGACHASAVEDRESULTSLOT_CLEARCARDS_OFFSET UNITYSDK_OFFSET(0xA6DB50)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_GET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0xA6DC40)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_SETSTATE_OFFSET UNITYSDK_OFFSET(0xA6D6E0)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_SETSTATELABELCOLOR_OFFSET UNITYSDK_OFFSET(0xA6DC50)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_REFRESHSTARGRID_OFFSET UNITYSDK_OFFSET(0xA6DD10)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_SET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0xA6DE40)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_SETSELECTABLE_OFFSET UNITYSDK_OFFSET(0xA6DE50)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_SETRESULT_OFFSET UNITYSDK_OFFSET(0xA6D5B0)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xA6E280)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0xA6E290)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_ONCLICKSLOT_OFFSET UNITYSDK_OFFSET(0xA6E400)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA6E430)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA6E440)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA6E450)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_SET_RESULTS_OFFSET UNITYSDK_OFFSET(0xA6E480)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_GET_RESULTS_OFFSET UNITYSDK_OFFSET(0xA6E490)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_FILLCARDS_OFFSET UNITYSDK_OFFSET(0xA6DF80)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xA6E4A0)
#define UIBEFOREHANDGACHASAVEDRESULTSLOT_SETEMPTY_OFFSET UNITYSDK_OFFSET(0xA6D660)

	inline static constexpr unsigned int UIBeforehandGachaSavedResultSlot_TypeDefinitionIndex = 7851;

	class UIBeforehandGachaSavedResultSlot : public Il2CppObject
	{
	public:
		UILabel* stateLabel; // 0x18
		Il2CppObject* resultItems; // 0x20
		::UnityEngine::GameObject* normalState; // 0x28
		::UnityEngine::GameObject* selectState; // 0x30
		::UnityEngine::GameObject* targetState; // 0x38
		::UnityEngine::GameObject* deleteState; // 0x40
		::UnityEngine::GameObject* disableState; // 0x48
		MXButton* selectBtn; // 0x50
		::System::Int32 _SlotIndex_k__BackingField; // 0x58
		::System::Boolean _IsEmpty_k__BackingField; // 0x5C
		::System::Int64 _TargetIndex_k__BackingField; // 0x60
		Il2CppObject* _Results_k__BackingField; // 0x68
		Il2CppObject* onClick; // 0x70
		::UnityEngine::Color* highlightLabelColor; // 0x78
		::UnityEngine::Color* normalLabelColor; // 0x88

		::System::Void ClearCards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_CLEARCARDS_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_GET_TARGETINDEX_OFFSET))(nullptr);
		}

		::System::Void SetState(BeforehandGachaSavedSlotState* arg)
		{
			((::System::Void(*)(BeforehandGachaSavedSlotState*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_SETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetStateLabelColor(BeforehandGachaSavedSlotState* arg)
		{
			((::System::Void(*)(BeforehandGachaSavedSlotState*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_SETSTATELABELCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshStarGrid(UIGachaItem* arg)
		{
			((::System::Void(*)(UIGachaItem*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_REFRESHSTARGRID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_SET_TARGETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_SETSELECTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetResult(::System::Int32 arg, ::System::Int64 arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_SETRESULT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void set_SlotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_SET_SLOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickSlot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_ONCLICKSLOT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Void set_IsEmpty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_SET_ISEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Results(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_SET_RESULTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Results()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_GET_RESULTS_OFFSET))(nullptr);
		}

		::System::Void FillCards(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_FILLCARDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::System::Void SetEmpty(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHASAVEDRESULTSLOT_SETEMPTY_OFFSET))(arg, nullptr);
		}

	};

