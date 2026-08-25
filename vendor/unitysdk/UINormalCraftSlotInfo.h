#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UINORMALCRAFTSLOTINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x239F250)
#define UINORMALCRAFTSLOTINFO_HANDLECRAFTREWARDALLRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x239F510)
#define UINORMALCRAFTSLOTINFO_HASCOMPLETESLOT_OFFSET UNITYSDK_OFFSET(0x239FAA0)
#define UINORMALCRAFTSLOTINFO_ACTIVEGETALLBTN_OFFSET UNITYSDK_OFFSET(0x239F900)
#define UINORMALCRAFTSLOTINFO_ONCLICKGETALL_OFFSET UNITYSDK_OFFSET(0x239FC40)
#define UINORMALCRAFTSLOTINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23A0310)
#define UINORMALCRAFTSLOTINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x239F6B0)
#define UINORMALCRAFTSLOTINFO_REQUESTCRAFTCOMPLETEPROCESSALL_OFFSET UNITYSDK_OFFSET(0x239FD80)
#define UINORMALCRAFTSLOTINFO_HANDLECRAFTCOMPLETEPROCESSALLRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23A0520)
#define UINORMALCRAFTSLOTINFO_REQUESTCRAFTREWARDALL_OFFSET UNITYSDK_OFFSET(0x239FC70)
#define UINORMALCRAFTSLOTINFO_ONCLICKQUICKCRAFT_OFFSET UNITYSDK_OFFSET(0x23A06C0)
#define UINORMALCRAFTSLOTINFO_SETDOT_OFFSET UNITYSDK_OFFSET(0x239F880)
#define UINORMALCRAFTSLOTINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23A0770)
#define UINORMALCRAFTSLOTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x23A08F0)

	inline static constexpr unsigned int UINormalCraftSlotInfo_TypeDefinitionIndex = 5185;

	class UINormalCraftSlotInfo : public Il2CppObject
	{
	public:
		Il2CppObject* slotList; // 0x18
		::UnityEngine::GameObject* dot; // 0x20
		MXButton* getAllBtn; // 0x28
		::UnityEngine::GameObject* getAllDisableBtn; // 0x30
		MXButton* quickCraftBtn; // 0x38

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOTINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleCraftRewardAllResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOTINFO_HANDLECRAFTREWARDALLRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCompleteSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOTINFO_HASCOMPLETESLOT_OFFSET))(nullptr);
		}

		::System::Void ActiveGetAllBtn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOTINFO_ACTIVEGETALLBTN_OFFSET))(nullptr);
		}

		::System::Void OnClickGetAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOTINFO_ONCLICKGETALL_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOTINFO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOTINFO_SETDATA_OFFSET))(nullptr);
		}

		::System::Void RequestCraftCompleteProcessAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOTINFO_REQUESTCRAFTCOMPLETEPROCESSALL_OFFSET))(nullptr);
		}

		::System::Boolean HandleCraftCompleteProcessAllResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOTINFO_HANDLECRAFTCOMPLETEPROCESSALLRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestCraftRewardAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOTINFO_REQUESTCRAFTREWARDALL_OFFSET))(nullptr);
		}

		::System::Void OnClickQuickCraft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOTINFO_ONCLICKQUICKCRAFT_OFFSET))(nullptr);
		}

		::System::Void SetDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOTINFO_SETDOT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOTINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINORMALCRAFTSLOTINFO_.CTOR_OFFSET))(nullptr);
		}

	};

