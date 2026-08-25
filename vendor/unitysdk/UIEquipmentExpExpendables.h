#pragma once
#include "unitysdk.h"

class UIEquipmentGrowth_LevelUpEstimation;
class UIEquipmentCard;
class AssetObjectBase;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define UIEQUIPMENTEXPEXPENDABLES_GET_CARD_OFFSET UNITYSDK_OFFSET(0x22DED00)
#define UIEQUIPMENTEXPEXPENDABLES_ONCLICKADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0x22DEDB0)
#define UIEQUIPMENTEXPEXPENDABLES_SETDATA_OFFSET UNITYSDK_OFFSET(0x22DF170)
#define UIEQUIPMENTEXPEXPENDABLES_ISCANNOTINPUT_OFFSET UNITYSDK_OFFSET(0x22DFC60)
#define UIEQUIPMENTEXPEXPENDABLES_CANADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0x22DFD50)
#define UIEQUIPMENTEXPEXPENDABLES_.CTOR_OFFSET UNITYSDK_OFFSET(0x22DFD80)

	inline static constexpr unsigned int UIEquipmentExpExpendables_TypeDefinitionIndex = 4854;

	class UIEquipmentExpExpendables : public Il2CppObject
	{
	public:
		UIEquipmentGrowth_LevelUpEstimation* EquipmentGrowth_LevelUpEstimation; // 0x98
		UIEquipmentCard* card; // 0xA0

		UIEquipmentCard* get_Card()
		{
			return ((UIEquipmentCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTEXPEXPENDABLES_GET_CARD_OFFSET))(nullptr);
		}

		::System::Void OnClickAddIngredient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTEXPEXPENDABLES_ONCLICKADDINGREDIENT_OFFSET))(nullptr);
		}

		::System::Void SetData(AssetObjectBase* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, AssetObjectBase* arg3)
		{
			((::System::Void(*)(AssetObjectBase*, ::MX::GameLogic::Parcel::ParcelKeyPair*, AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTEXPEXPENDABLES_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsCanNotInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTEXPEXPENDABLES_ISCANNOTINPUT_OFFSET))(nullptr);
		}

		::System::Boolean CanAddIngredient()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTEXPEXPENDABLES_CANADDINGREDIENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTEXPEXPENDABLES_.CTOR_OFFSET))(nullptr);
		}

	};

