#pragma once
#include "unitysdk.h"

class UISprite;
class OpenConditionButtonController;
class MXButton;
namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UISHIFTINGCRAFTSLOTINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23B2670)
#define UISHIFTINGCRAFTSLOTINFO_REQUESTCRAFTREWARDALL_OFFSET UNITYSDK_OFFSET(0x23B2870)
#define UISHIFTINGCRAFTSLOTINFO_HASCOMPLETESLOT_OFFSET UNITYSDK_OFFSET(0x23B2980)
#define UISHIFTINGCRAFTSLOTINFO_SETDOT_OFFSET UNITYSDK_OFFSET(0x23B2B20)
#define UISHIFTINGCRAFTSLOTINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x23B2E20)
#define UISHIFTINGCRAFTSLOTINFO_ONCLICKGETALL_OFFSET UNITYSDK_OFFSET(0x23B2F90)
#define UISHIFTINGCRAFTSLOTINFO_ACTIVEGETALLBTN_OFFSET UNITYSDK_OFFSET(0x23B3540)
#define UISHIFTINGCRAFTSLOTINFO_HANDLESHIFTINGCRAFTREWARDALLRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23B36E0)
#define UISHIFTINGCRAFTSLOTINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x23B37F0)
#define UISHIFTINGCRAFTSLOTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x23B3F30)
#define UISHIFTINGCRAFTSLOTINFO_HANDLESHIFTINGCRAFTCOMPLETEPROCESSALLRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23B3F40)
#define UISHIFTINGCRAFTSLOTINFO_REQUESTCRAFTCOMPLETEPROCESSALL_OFFSET UNITYSDK_OFFSET(0x23B2FC0)
#define UISHIFTINGCRAFTSLOTINFO_CHECKNEWSHIFTINGCRAFTITEM_OFFSET UNITYSDK_OFFSET(0x23B39B0)
#define UISHIFTINGCRAFTSLOTINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23B4080)

	inline static constexpr unsigned int UIShiftingCraftSlotInfo_TypeDefinitionIndex = 5231;

	class UIShiftingCraftSlotInfo : public Il2CppObject
	{
	public:
		Il2CppObject* slotList; // 0x18
		UISprite* shiftingCraftTabDot; // 0x20
		OpenConditionButtonController* openCondition; // 0x28
		MXButton* getAllBtn; // 0x30
		::UnityEngine::GameObject* getAllDisableBtn; // 0x38

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOTINFO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void RequestCraftRewardAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOTINFO_REQUESTCRAFTREWARDALL_OFFSET))(nullptr);
		}

		::System::Boolean HasCompleteSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOTINFO_HASCOMPLETESLOT_OFFSET))(nullptr);
		}

		::System::Void SetDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOTINFO_SETDOT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOTINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickGetAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOTINFO_ONCLICKGETALL_OFFSET))(nullptr);
		}

		::System::Void ActiveGetAllBtn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOTINFO_ACTIVEGETALLBTN_OFFSET))(nullptr);
		}

		::System::Boolean HandleShiftingCraftRewardAllResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOTINFO_HANDLESHIFTINGCRAFTREWARDALLRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOTINFO_SETDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleShiftingCraftCompleteProcessAllResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOTINFO_HANDLESHIFTINGCRAFTCOMPLETEPROCESSALLRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestCraftCompleteProcessAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOTINFO_REQUESTCRAFTCOMPLETEPROCESSALL_OFFSET))(nullptr);
		}

		::System::Void CheckNewShiftingCraftItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOTINFO_CHECKNEWSHIFTINGCRAFTITEM_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTSLOTINFO_ONENABLE_OFFSET))(nullptr);
		}

	};

