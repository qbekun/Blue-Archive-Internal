#pragma once
#include "unitysdk.h"

class MXButton;
class UINormalCraftRewardDetail;
namespace MX::GameLogic::DBModel { class CraftInfoDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UICraftDuration;

#define UINORMALCRAFTSLOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x239DAB0)
#define UINORMALCRAFTSLOT_HANDLECRAFTCOMPLETEPROCESSRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x239DC30)
#define UINORMALCRAFTSLOT_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x239DEF0)
#define UINORMALCRAFTSLOT_ONCLICKREWARDDETAIL_OFFSET UNITYSDK_OFFSET(0x239DF20)
#define UINORMALCRAFTSLOT_ONCLICKREWARD_OFFSET UNITYSDK_OFFSET(0x239DF70)
#define UINORMALCRAFTSLOT_ONCLICKIMMEDIATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x239E010)
#define UINORMALCRAFTSLOT__ONCLICKSLOT_B__8_0_OFFSET UNITYSDK_OFFSET(0x239E320)
#define UINORMALCRAFTSLOT__HANDLECRAFTREWARDRESPONSEMESSAGE_B__12_0_OFFSET UNITYSDK_OFFSET(0x239E410)
#define UINORMALCRAFTSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x239E440)
#define UINORMALCRAFTSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x239E7C0)
#define UINORMALCRAFTSLOT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x239E890)
#define UINORMALCRAFTSLOT__ONCLICKSLOT_B__8_2_OFFSET UNITYSDK_OFFSET(0x239EA90)
#define UINORMALCRAFTSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x239EAE0)
#define UINORMALCRAFTSLOT_HANDLECRAFTREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x239EAF0)
#define UINORMALCRAFTSLOT_ONCLICKSLOT_OFFSET UNITYSDK_OFFSET(0x239ED70)
#define UINORMALCRAFTSLOT__ONCLICKSLOT_G__ENTER|8_1_OFFSET UNITYSDK_OFFSET(0x239E330)

	inline static constexpr unsigned int UINormalCraftSlot_TypeDefinitionIndex = 5182;

	class UINormalCraftSlot : public Il2CppObject
	{
	public:
		MXButton* rewardDetailButton; // 0x78
		UINormalCraftRewardDetail* rewardDetailPopup; // 0x80
		::MX::GameLogic::DBModel::CraftInfoDB* craftInfo; // 0x88

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleCraftCompleteProcessResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOT_HANDLECRAFTCOMPLETEPROCESSRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialized(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOT_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRewardDetail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOT_ONCLICKREWARDDETAIL_OFFSET))(nullptr);
		}

		::System::Void OnClickReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOT_ONCLICKREWARD_OFFSET))(nullptr);
		}

		::System::Void OnClickImmediateComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOT_ONCLICKIMMEDIATECOMPLETE_OFFSET))(nullptr);
		}

		::System::Void _OnClickSlot_b__8_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOT__ONCLICKSLOT_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean _HandleCraftRewardResponseMessage_b__12_0(::MX::GameLogic::DBModel::CraftInfoDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CraftInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOT__HANDLECRAFTREWARDRESPONSEMESSAGE_B__12_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::CraftInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void _OnClickSlot_b__8_2(UICraftDuration* arg)
		{
			((::System::Void(*)(UICraftDuration*, ::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOT__ONCLICKSLOT_B__8_2_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleCraftRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOT_HANDLECRAFTREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSlot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOT_ONCLICKSLOT_OFFSET))(nullptr);
		}

		::System::Void _OnClickSlot_g__Enter|8_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOT__ONCLICKSLOT_G__ENTER|8_1_OFFSET))(nullptr);
		}

	};

