#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class WidgetsPositionSetter;
class UISprite;
namespace MX::GameLogic::Parcel { class ParcelCost; }

#define UISHOP_POPUP_REFRESH_.CTOR_OFFSET UNITYSDK_OFFSET(0xAD5B40)
#define UISHOP_POPUP_REFRESH_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0xAD5B50)
#define UISHOP_POPUP_REFRESH__AWAKE_B__8_1_OFFSET UNITYSDK_OFFSET(0xAD5B70)
#define UISHOP_POPUP_REFRESH_AWAKE_OFFSET UNITYSDK_OFFSET(0xAD5C00)
#define UISHOP_POPUP_REFRESH__AWAKE_B__8_0_OFFSET UNITYSDK_OFFSET(0xAD5EF0)
#define UISHOP_POPUP_REFRESH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAD5F80)

	inline static constexpr unsigned int UIShop_Popup_Refresh_TypeDefinitionIndex = 8062;

	class UIShop_Popup_Refresh : public Il2CppObject
	{
	public:
		UILabel* Count; // 0xD8
		UILabel* Cost; // 0xE0
		MXButton* ButtonCancel; // 0xE8
		MXButton* ButtonOk; // 0xF0
		MXButton* ButtonX; // 0xF8
		WidgetsPositionSetter* WidgetsPositionSetter; // 0x100
		UISprite* IconSprite; // 0x108
		::System::Action* okAction; // 0x110

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_REFRESH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_REFRESH_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__8_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_REFRESH__AWAKE_B__8_1_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_REFRESH_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__8_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_REFRESH__AWAKE_B__8_0_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::Parcel::ParcelCost* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelCost*, ::System::Int64, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_REFRESH_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

