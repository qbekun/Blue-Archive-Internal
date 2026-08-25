#pragma once
#include "unitysdk.h"

class UIWidget;
namespace UnityEngine { class GameObject; }
class UINonEquipmentCard;
class UILabel;
class TooltipButton;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UICAFERANKUPRECIPESLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2286D60)
#define UICAFERANKUPRECIPESLOT_GET_ALPHAWIDGET_OFFSET UNITYSDK_OFFSET(0x2286D70)
#define UICAFERANKUPRECIPESLOT_GET_CARD_OFFSET UNITYSDK_OFFSET(0x2286E00)
#define UICAFERANKUPRECIPESLOT_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x2286E90)
#define UICAFERANKUPRECIPESLOT_GET_COUNTLABEL_OFFSET UNITYSDK_OFFSET(0x2286F40)
#define UICAFERANKUPRECIPESLOT_GET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x2286FF0)
#define UICAFERANKUPRECIPESLOT_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x2287090)
#define UICAFERANKUPRECIPESLOT_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x22871F0)
#define UICAFERANKUPRECIPESLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x22872A0)

	inline static constexpr unsigned int UICafeRankUpRecipeSlot_TypeDefinitionIndex = 4676;

	class UICafeRankUpRecipeSlot : public Il2CppObject
	{
	public:
		UIWidget* alphaWidget; // 0x18
		::UnityEngine::GameObject* empty; // 0x20
		::UnityEngine::GameObject* normal; // 0x28
		UINonEquipmentCard* card; // 0x30
		UILabel* countLabel; // 0x38
		TooltipButton* tooltip; // 0x40
		::System::Boolean isEnoughItem; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPRECIPESLOT_.CTOR_OFFSET))(nullptr);
		}

		UIWidget* get_AlphaWidget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPRECIPESLOT_GET_ALPHAWIDGET_OFFSET))(nullptr);
		}

		UINonEquipmentCard* get_Card()
		{
			return ((UINonEquipmentCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPRECIPESLOT_GET_CARD_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Normal()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPRECIPESLOT_GET_NORMAL_OFFSET))(nullptr);
		}

		UILabel* get_CountLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPRECIPESLOT_GET_COUNTLABEL_OFFSET))(nullptr);
		}

		TooltipButton* get_Tooltip()
		{
			return ((TooltipButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPRECIPESLOT_GET_TOOLTIP_OFFSET))(nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPRECIPESLOT_SETEMPTY_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Empty()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPRECIPESLOT_GET_EMPTY_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPRECIPESLOT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

