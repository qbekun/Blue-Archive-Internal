#pragma once
#include "unitysdk.h"

class UIGrid;
class MXButton;
class UISprite;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Coroutine; }
namespace MX::GameLogic::DBModel { class ClearDeckKey; }
class UIClearDeckSlot;
namespace MX::NetworkProtocol { class ClearDeckListResponse; }

#define UIPOPUP_CLEARDECK_REFRESH_OFFSET UNITYSDK_OFFSET(0x27614F0)
#define UIPOPUP_CLEARDECK__GET_SLOTS_B__17_1_OFFSET UNITYSDK_OFFSET(0x2761AE0)
#define UIPOPUP_CLEARDECK_REFRESHBUTTONCOROUTINE_OFFSET UNITYSDK_OFFSET(0x2761BF0)
#define UIPOPUP_CLEARDECK_SET_CLEARDECKKEY_OFFSET UNITYSDK_OFFSET(0x2761C90)
#define UIPOPUP_CLEARDECK_GET_CLEARDECKKEY_OFFSET UNITYSDK_OFFSET(0x2761CB0)
#define UIPOPUP_CLEARDECK_ONCLICKREFRESH_OFFSET UNITYSDK_OFFSET(0x2761CC0)
#define UIPOPUP_CLEARDECK_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2761D90)
#define UIPOPUP_CLEARDECK_SETDATA_OFFSET UNITYSDK_OFFSET(0x2761E00)
#define UIPOPUP_CLEARDECK_GET_USEASSISTMARK_OFFSET UNITYSDK_OFFSET(0x27620F0)
#define UIPOPUP_CLEARDECK_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x2761870)
#define UIPOPUP_CLEARDECK_AWAKE_OFFSET UNITYSDK_OFFSET(0x2762100)
#define UIPOPUP_CLEARDECK__ONCLICKREFRESH_B__34_0_OFFSET UNITYSDK_OFFSET(0x2762270)
#define UIPOPUP_CLEARDECK_SET_USEASSISTMARK_OFFSET UNITYSDK_OFFSET(0x27624D0)
#define UIPOPUP_CLEARDECK_GETGRIDPOS_OFFSET UNITYSDK_OFFSET(0x2761A10)
#define UIPOPUP_CLEARDECK_GET_USEEXTENTIONTYPE_OFFSET UNITYSDK_OFFSET(0x2761B10)
#define UIPOPUP_CLEARDECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x27624E0)
#define UIPOPUP_CLEARDECK__GET_SLOTS_B__17_0_OFFSET UNITYSDK_OFFSET(0x27625B0)
#define UIPOPUP_CLEARDECK_GETBGSIZE_OFFSET UNITYSDK_OFFSET(0x2761A90)

	inline static constexpr unsigned int UIPopup_ClearDeck_TypeDefinitionIndex = 7305;

	class UIPopup_ClearDeck : public Il2CppObject
	{
	public:
		::System::Single refreshButtonColliderInterval; // 0x0
		UIGrid* grid; // 0xD8
		MXButton* refreshButton; // 0xE0
		UISprite* bg; // 0xE8
		::UnityEngine::Vector2* fromFormationBgSize; // 0xF0
		::UnityEngine::Vector2* noFormationBgSize; // 0xF8
		::UnityEngine::Vector2* fromFormationExtensionBgSize; // 0x100
		::UnityEngine::Vector2* noFormationExtensionBgSize; // 0x108
		::UnityEngine::Vector3* fromFormationGridPos; // 0x110
		::UnityEngine::Vector3* noFormationGridPos; // 0x11C
		::UnityEngine::Vector3* fromFormationExtensionGridPos; // 0x128
		::UnityEngine::Vector3* noFormationExtensionGridPos; // 0x134
		Il2CppObject* raidTeamSettingDBs; // 0x140
		::UnityEngine::BoxCollider* refreshButtonCollider; // 0x148
		::UnityEngine::Coroutine* refreshButtonCoroutine; // 0x150
		Il2CppObject* slots; // 0x158
		::MX::GameLogic::DBModel::ClearDeckKey* _ClearDeckKey_k__BackingField; // 0x160
		::System::Boolean _UseAssistMark_k__BackingField; // 0x170

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_REFRESH_OFFSET))(nullptr);
		}

		::System::Boolean _get_Slots_b__17_1(UIClearDeckSlot* arg)
		{
			return ((::System::Boolean(*)(UIClearDeckSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK__GET_SLOTS_B__17_1_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* RefreshButtonCoroutine(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_REFRESHBUTTONCOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClearDeckKey(::MX::GameLogic::DBModel::ClearDeckKey* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClearDeckKey*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_SET_CLEARDECKKEY_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClearDeckKey* get_ClearDeckKey()
		{
			return ((::MX::GameLogic::DBModel::ClearDeckKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_GET_CLEARDECKKEY_OFFSET))(nullptr);
		}

		::System::Void OnClickRefresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_ONCLICKREFRESH_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::ClearDeckKey* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClearDeckKey*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_UseAssistMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_GET_USEASSISTMARK_OFFSET))(nullptr);
		}

		Il2CppObject* get_Slots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_GET_SLOTS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickRefresh_b__34_0(::MX::NetworkProtocol::ClearDeckListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ClearDeckListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK__ONCLICKREFRESH_B__34_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_UseAssistMark(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_SET_USEASSISTMARK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetGridPos(::System::Boolean arg)
		{
			return ((::UnityEngine::Vector3*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_GETGRIDPOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseExtentionType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_GET_USEEXTENTIONTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _get_Slots_b__17_0(UIClearDeckSlot* arg)
		{
			((::System::Void(*)(UIClearDeckSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK__GET_SLOTS_B__17_0_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetBgSize(::System::Boolean arg)
		{
			return ((::UnityEngine::Vector2*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLEARDECK_GETBGSIZE_OFFSET))(arg, nullptr);
		}

	};

