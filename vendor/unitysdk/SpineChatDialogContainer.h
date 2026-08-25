#pragma once
#include "unitysdk.h"

namespace UnityEngine::AddressableAssets { class AssetReference; }
class SpineCharacter;
namespace UnityEngine { class Transform; }
class UIWidget;
class ChatDialog;
namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogCondition; }
class UIViewRenderQueueOrder;

#define SPINECHATDIALOGCONTAINER__CONNECTSPINECHARACTERCALLBACKS_B__17_0_OFFSET UNITYSDK_OFFSET(0xC1AD30)
#define SPINECHATDIALOGCONTAINER_CLEARSPINECHARACTER_OFFSET UNITYSDK_OFFSET(0xC1AD60)
#define SPINECHATDIALOGCONTAINER_INITCHATDIALOG_OFFSET UNITYSDK_OFFSET(0xC1AE10)
#define SPINECHATDIALOGCONTAINER_ONOPENED_OFFSET UNITYSDK_OFFSET(0xC1AFD0)
#define SPINECHATDIALOGCONTAINER_SETSPINECOLLIDER_OFFSET UNITYSDK_OFFSET(0xC1B050)
#define SPINECHATDIALOGCONTAINER_SETRQORDER_OFFSET UNITYSDK_OFFSET(0xC1B110)
#define SPINECHATDIALOGCONTAINER_DESTROYSPINE_OFFSET UNITYSDK_OFFSET(0xC1B290)
#define SPINECHATDIALOGCONTAINER_INITINSTANTIATEDRQORDER_OFFSET UNITYSDK_OFFSET(0xC1B160)
#define SPINECHATDIALOGCONTAINER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC1B3F0)
#define SPINECHATDIALOGCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC1B410)
#define SPINECHATDIALOGCONTAINER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC1B420)
#define SPINECHATDIALOGCONTAINER_INITSPINE_OFFSET UNITYSDK_OFFSET(0xC1B430)
#define SPINECHATDIALOGCONTAINER_CONNECTSPINECHARACTERCALLBACKS_OFFSET UNITYSDK_OFFSET(0xC1B730)

	inline static constexpr unsigned int SpineChatDialogContainer_TypeDefinitionIndex = 8857;

	class SpineChatDialogContainer : public Il2CppObject
	{
	public:
		::UnityEngine::AddressableAssets::AssetReference* AssetReference; // 0x18
		SpineCharacter* SpineCharacter; // 0x20
		::UnityEngine::Transform* SpinePosition; // 0x28
		UIWidget* SpineRenderOrder; // 0x30
		ChatDialog* ChatDialog; // 0x38
		::FlatData::DialogCategory* DialogCategory; // 0x40
		::System::Int64 CharacterId; // 0x48
		::FlatData::DialogCondition* condition; // 0x50

		::System::Void _ConnectSpineCharacterCallbacks_b__17_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINER__CONNECTSPINECHARACTERCALLBACKS_B__17_0_OFFSET))(nullptr);
		}

		::System::Void ClearSpineCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINER_CLEARSPINECHARACTER_OFFSET))(nullptr);
		}

		::System::Void InitChatDialog()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINER_INITCHATDIALOG_OFFSET))(nullptr);
		}

		::System::Void OnOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINER_ONOPENED_OFFSET))(nullptr);
		}

		::System::Void SetSpineCollider(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINER_SETSPINECOLLIDER_OFFSET))(arg, nullptr);
		}

		::System::Void SetRQOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINER_SETRQORDER_OFFSET))(nullptr);
		}

		::System::Void DestroySpine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINER_DESTROYSPINE_OFFSET))(nullptr);
		}

		::System::Void InitInstantiatedRQOrder(UIViewRenderQueueOrder* arg)
		{
			((::System::Void(*)(UIViewRenderQueueOrder*, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINER_INITINSTANTIATEDRQORDER_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void InitSpine(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINER_INITSPINE_OFFSET))(arg, nullptr);
		}

		::System::Void ConnectSpineCharacterCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHATDIALOGCONTAINER_CONNECTSPINECHARACTERCALLBACKS_OFFSET))(nullptr);
		}

	};

