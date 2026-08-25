#pragma once
#include "unitysdk.h"

class MXButton;
class UIFriendsSearchLevelTabController;
namespace FlatData { class FriendSearchLevelOption; }

#define UIFRIENDSSEARCHLEVELFILTERPOPUP__AWAKE_B__4_0_OFFSET UNITYSDK_OFFSET(0x2574970)
#define UIFRIENDSSEARCHLEVELFILTERPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2574A90)
#define UIFRIENDSSEARCHLEVELFILTERPOPUP_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x2574AA0)
#define UIFRIENDSSEARCHLEVELFILTERPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2570440)
#define UIFRIENDSSEARCHLEVELFILTERPOPUP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2574B10)
#define UIFRIENDSSEARCHLEVELFILTERPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2574B40)

	inline static constexpr unsigned int UIFriendsSearchLevelFilterPopup_TypeDefinitionIndex = 6165;

	class UIFriendsSearchLevelFilterPopup : public Il2CppObject
	{
	public:
		MXButton* confirmButton; // 0x18
		Il2CppObject* cancelButtons; // 0x20
		UIFriendsSearchLevelTabController* tabController; // 0x28
		Il2CppObject* onConfirmAction; // 0x30

		::System::Void _Awake_b__4_0(MXButton* arg)
		{
			((::System::Void(*)(MXButton*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSSEARCHLEVELFILTERPOPUP__AWAKE_B__4_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSSEARCHLEVELFILTERPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSSEARCHLEVELFILTERPOPUP_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void Initialize(::FlatData::FriendSearchLevelOption* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatData::FriendSearchLevelOption*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSSEARCHLEVELFILTERPOPUP_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSSEARCHLEVELFILTERPOPUP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSSEARCHLEVELFILTERPOPUP_AWAKE_OFFSET))(nullptr);
		}

	};

