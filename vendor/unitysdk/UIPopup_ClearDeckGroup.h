#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ClearDeckKey; }
class UIGrid;
class MXButton;
class UISprite;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Coroutine; }
class UIClearDeckGroupSlot;
namespace MX::NetworkProtocol { class ClearDeckGroupedListResponse; }

#define UIPOPUP_CLEARDECKGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x27627E0)
#define UIPOPUP_CLEARDECKGROUP__REFRESH_B__24_0_OFFSET UNITYSDK_OFFSET(0x2762820)
#define UIPOPUP_CLEARDECKGROUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2762850)
#define UIPOPUP_CLEARDECKGROUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x27628F0)
#define UIPOPUP_CLEARDECKGROUP__ONREFRESHBUTTONCLICK_B__25_0_OFFSET UNITYSDK_OFFSET(0x2762E80)
#define UIPOPUP_CLEARDECKGROUP_GET_USEASSISTMARK_OFFSET UNITYSDK_OFFSET(0x2763180)
#define UIPOPUP_CLEARDECKGROUP_GET_CLEARDECKKEY_OFFSET UNITYSDK_OFFSET(0x2763190)
#define UIPOPUP_CLEARDECKGROUP_CODISABLEREFRESHBUTTON_OFFSET UNITYSDK_OFFSET(0x2763100)
#define UIPOPUP_CLEARDECKGROUP_SET_USEASSISTMARK_OFFSET UNITYSDK_OFFSET(0x27631C0)
#define UIPOPUP_CLEARDECKGROUP__SETDATA_B__22_0_OFFSET UNITYSDK_OFFSET(0x27631D0)
#define UIPOPUP_CLEARDECKGROUP_GET_USEEXTENSIONSLOT_OFFSET UNITYSDK_OFFSET(0x2762840)
#define UIPOPUP_CLEARDECKGROUP_ONREFRESHBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x2763230)
#define UIPOPUP_CLEARDECKGROUP_REFRESH_OFFSET UNITYSDK_OFFSET(0x2763300)
#define UIPOPUP_CLEARDECKGROUP_SET_CLEARDECKKEY_OFFSET UNITYSDK_OFFSET(0x27635C0)
#define UIPOPUP_CLEARDECKGROUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x27635E0)

	inline static constexpr unsigned int UIPopup_ClearDeckGroup_TypeDefinitionIndex = 7307;

	class UIPopup_ClearDeckGroup : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClearDeckKey* _ClearDeckKey_k__BackingField; // 0xD8
		::System::Boolean _UseAssistMark_k__BackingField; // 0xE8
		UIGrid* grid; // 0xF0
		MXButton* refreshButton; // 0xF8
		UISprite* bg; // 0x100
		::UnityEngine::Vector2* bgSize; // 0x108
		::UnityEngine::Vector2* extensionBgSize; // 0x110
		::UnityEngine::Vector3* gridPos; // 0x118
		::UnityEngine::Vector3* extensionGridPos; // 0x124
		::UnityEngine::Coroutine* _refreshButtonCoroutine; // 0x130
		Il2CppObject* _raidTeamSettingDBGroups; // 0x138
		Il2CppObject* _slots; // 0x140
		::System::Single RefreshButtonDisableTime; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _Refresh_b__24_0(UIClearDeckGroupSlot* arg)
		{
			return ((::System::Boolean(*)(UIClearDeckGroupSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUP__REFRESH_B__24_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::ClearDeckKey* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClearDeckKey*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUP_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _OnRefreshButtonClick_b__25_0(::MX::NetworkProtocol::ClearDeckGroupedListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ClearDeckGroupedListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUP__ONREFRESHBUTTONCLICK_B__25_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseAssistMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUP_GET_USEASSISTMARK_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClearDeckKey* get_ClearDeckKey()
		{
			return ((::MX::GameLogic::DBModel::ClearDeckKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUP_GET_CLEARDECKKEY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDisableRefreshButton(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUP_CODISABLEREFRESHBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_UseAssistMark(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUP_SET_USEASSISTMARK_OFFSET))(arg, nullptr);
		}

		::System::Void _SetData_b__22_0(UIClearDeckGroupSlot* arg)
		{
			((::System::Void(*)(UIClearDeckGroupSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUP__SETDATA_B__22_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseExtensionSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUP_GET_USEEXTENSIONSLOT_OFFSET))(nullptr);
		}

		::System::Void OnRefreshButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUP_ONREFRESHBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUP_REFRESH_OFFSET))(nullptr);
		}

		::System::Void set_ClearDeckKey(::MX::GameLogic::DBModel::ClearDeckKey* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClearDeckKey*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUP_SET_CLEARDECKKEY_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECKGROUP_AWAKE_OFFSET))(nullptr);
		}

	};

