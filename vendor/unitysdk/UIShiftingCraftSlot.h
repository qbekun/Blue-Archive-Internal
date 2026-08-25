#pragma once
#include "unitysdk.h"

class UIParcelCard;
namespace MX::GameLogic::DBModel { class ShiftingCraftInfoDB; }
class UIShiftingCraft;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UISHIFTINGCRAFTSLOT_ONCLICKSLOT_OFFSET UNITYSDK_OFFSET(0x23B1240)
#define UISHIFTINGCRAFTSLOT__ONCLICKSLOT_G__ENTER|6_1_OFFSET UNITYSDK_OFFSET(0x23B1350)
#define UISHIFTINGCRAFTSLOT__ONCLICKSLOT_B__6_2_OFFSET UNITYSDK_OFFSET(0x23B1430)
#define UISHIFTINGCRAFTSLOT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23B1450)
#define UISHIFTINGCRAFTSLOT_ONCLICKREWARD_OFFSET UNITYSDK_OFFSET(0x23B1650)
#define UISHIFTINGCRAFTSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x23B16F0)
#define UISHIFTINGCRAFTSLOT__HANDLESHIFTINGCRAFTREWARDRESPONSEMESSAGE_B__10_0_OFFSET UNITYSDK_OFFSET(0x23B1810)
#define UISHIFTINGCRAFTSLOT__ONCLICKSLOT_B__6_0_OFFSET UNITYSDK_OFFSET(0x23B1840)
#define UISHIFTINGCRAFTSLOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23B1850)
#define UISHIFTINGCRAFTSLOT_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x23B19D0)
#define UISHIFTINGCRAFTSLOT_ONCLICKIMMEDIATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x23B1A00)
#define UISHIFTINGCRAFTSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23B1D40)
#define UISHIFTINGCRAFTSLOT_HANDLESHIFTINGCRAFTREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23B1D50)
#define UISHIFTINGCRAFTSLOT_HANDLESHIFTINGCRAFTCOMPLETEPROCESSRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23B1FE0)

	inline static constexpr unsigned int UIShiftingCraftSlot_TypeDefinitionIndex = 5225;

	class UIShiftingCraftSlot : public Il2CppObject
	{
	public:
		UIParcelCard* card; // 0x78
		::MX::GameLogic::DBModel::ShiftingCraftInfoDB* craftInfo; // 0x80

		::System::Void OnClickSlot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOT_ONCLICKSLOT_OFFSET))(nullptr);
		}

		::System::Void _OnClickSlot_g__Enter|6_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOT__ONCLICKSLOT_G__ENTER|6_1_OFFSET))(nullptr);
		}

		::System::Void _OnClickSlot_b__6_2(UIShiftingCraft* arg)
		{
			((::System::Void(*)(UIShiftingCraft*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOT__ONCLICKSLOT_B__6_2_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOT_ONCLICKREWARD_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::ShiftingCraftInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShiftingCraftInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean _HandleShiftingCraftRewardResponseMessage_b__10_0(::MX::GameLogic::DBModel::ShiftingCraftInfoDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ShiftingCraftInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOT__HANDLESHIFTINGCRAFTREWARDRESPONSEMESSAGE_B__10_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickSlot_b__6_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOT__ONCLICKSLOT_B__6_0_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Initialized(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOT_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickImmediateComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOT_ONCLICKIMMEDIATECOMPLETE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleShiftingCraftRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOT_HANDLESHIFTINGCRAFTREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleShiftingCraftCompleteProcessResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOT_HANDLESHIFTINGCRAFTCOMPLETEPROCESSRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

	};

