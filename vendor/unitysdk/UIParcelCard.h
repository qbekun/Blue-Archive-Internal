#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UIEquipmentCard;
class UINonEquipmentCard;
namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class RewardTag; }

#define UIPARCELCARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x2345090)
#define UIPARCELCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x2345670)
#define UIPARCELCARD_GET_SELECTEDASINGREDIENT_OFFSET UNITYSDK_OFFSET(0x2345680)
#define UIPARCELCARD_SET_SELECTEDASINGREDIENT_OFFSET UNITYSDK_OFFSET(0x2345690)
#define UIPARCELCARD_SETDIM_OFFSET UNITYSDK_OFFSET(0x23456C0)

	inline static constexpr unsigned int UIParcelCard_TypeDefinitionIndex = 4997;

	class UIParcelCard : public Il2CppObject
	{
	public:
		UICharacterCard* characterCard; // 0x18
		UIEquipmentCard* equipmentCard; // 0x20
		UINonEquipmentCard* itemCard; // 0x28
		::UnityEngine::GameObject* SelectedIndicator; // 0x30
		::UnityEngine::GameObject* Dim; // 0x38
		::System::Boolean enableToolTip; // 0x40
		::System::Boolean isSelected; // 0x41

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelInfo* arg, ::FlatData::RewardTag* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::FlatData::RewardTag*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPARCELCARD_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARCELCARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_SelectedAsIngredient()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARCELCARD_GET_SELECTEDASINGREDIENT_OFFSET))(nullptr);
		}

		::System::Void set_SelectedAsIngredient(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPARCELCARD_SET_SELECTEDASINGREDIENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetDim(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPARCELCARD_SETDIM_OFFSET))(arg, nullptr);
		}

	};

