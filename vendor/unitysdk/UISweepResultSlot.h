#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class UIGrid;
namespace UnityEngine { class Animation; }
class SweepResultSlotInfo;

#define UISWEEPRESULTSLOT_GET_CLIPLENGTH_OFFSET UNITYSDK_OFFSET(0xB2D7C0)
#define UISWEEPRESULTSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB2EBC0)
#define UISWEEPRESULTSLOT_SETVISIBILITY_OFFSET UNITYSDK_OFFSET(0xB2C630)
#define UISWEEPRESULTSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0xB2ED00)
#define UISWEEPRESULTSLOT_GET_GRID_OFFSET UNITYSDK_OFFSET(0xB2FBD0)
#define UISWEEPRESULTSLOT_FILLPARCELCARDS_OFFSET UNITYSDK_OFFSET(0xB2EE50)
#define UISWEEPRESULTSLOT__FILLPARCELCARDS_G__ISCARDFULL|20_1_OFFSET UNITYSDK_OFFSET(0xB2FC50)
#define UISWEEPRESULTSLOT_GET_PARCELCARDS_OFFSET UNITYSDK_OFFSET(0xB2FCD0)
#define UISWEEPRESULTSLOT_GET_ANIMATIONOBJECT_OFFSET UNITYSDK_OFFSET(0xB2EB50)
#define UISWEEPRESULTSLOT_ONCLICKOPENTOTALREWARDPOPUP_OFFSET UNITYSDK_OFFSET(0xB2FD90)
#define UISWEEPRESULTSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB2FF30)
#define UISWEEPRESULTSLOT_ACTIVATETOOLTIP_OFFSET UNITYSDK_OFFSET(0xB2CC60)

	inline static constexpr unsigned int UISweepResultSlot_TypeDefinitionIndex = 8280;

	class UISweepResultSlot : public ::System::Xml::Serialization::TypeMember
	{
	public:
		UILabel* turnLabel; // 0x28
		UILabel* totalLabel; // 0x30
		MXButton* openTotalRewardPopupButton; // 0x38
		Il2CppObject* rewardParcels; // 0x40
		UIGrid* grid; // 0x48
		::Il2CppArray<::System::Object*>* _parcelCards; // 0x50
		::System::Int32 turn; // 0x58
		::UnityEngine::Animation* _animationObject; // 0x60

		::System::Single get_ClipLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSLOT_GET_CLIPLENGTH_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetVisibility(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSLOT_SETVISIBILITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(SweepResultSlotInfo* arg)
		{
			((::System::Void(*)(SweepResultSlotInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSLOT_SETDATA_OFFSET))(arg, nullptr);
		}

		UIGrid* get_Grid()
		{
			return ((UIGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSLOT_GET_GRID_OFFSET))(nullptr);
		}

		::System::Void FillParcelCards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSLOT_FILLPARCELCARDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean _FillParcelCards_g__IsCardFull|20_1(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSLOT__FILLPARCELCARDS_G__ISCARDFULL|20_1_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_parcelCards()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSLOT_GET_PARCELCARDS_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* get_animationObject()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSLOT_GET_ANIMATIONOBJECT_OFFSET))(nullptr);
		}

		::System::Void OnClickOpenTotalRewardPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSLOT_ONCLICKOPENTOTALREWARDPOPUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ActivateTooltip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSLOT_ACTIVATETOOLTIP_OFFSET))(arg, nullptr);
		}

	};

