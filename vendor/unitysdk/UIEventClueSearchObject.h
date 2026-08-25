#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class UITexture;
class MXButton;
namespace UnityEngine { class Animation; }
class ClueSlotViewData;
class UIEventContentClueViewModel;

#define UIEVENTCLUESEARCHOBJECT_ONCLICKREGISTER_OFFSET UNITYSDK_OFFSET(0x2492A30)
#define UIEVENTCLUESEARCHOBJECT_CO_PLAYCOMPLETEONCEBYLINETWEEN_OFFSET UNITYSDK_OFFSET(0x2492A50)
#define UIEVENTCLUESEARCHOBJECT_SETUNUSED_OFFSET UNITYSDK_OFFSET(0x2492AE0)
#define UIEVENTCLUESEARCHOBJECT_GETMAXTWEENTIMESECONDS_OFFSET UNITYSDK_OFFSET(0x2492E40)
#define UIEVENTCLUESEARCHOBJECT_APPLYNAMETAG_OFFSET UNITYSDK_OFFSET(0x2492F50)
#define UIEVENTCLUESEARCHOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2493010)
#define UIEVENTCLUESEARCHOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24932C0)
#define UIEVENTCLUESEARCHOBJECT_BIND_OFFSET UNITYSDK_OFFSET(0x2493310)
#define UIEVENTCLUESEARCHOBJECT_APPLYLINEVISIBILITYNOW_OFFSET UNITYSDK_OFFSET(0x24937C0)
#define UIEVENTCLUESEARCHOBJECT_ONCLICKHINTBUTTON_OFFSET UNITYSDK_OFFSET(0x2493840)
#define UIEVENTCLUESEARCHOBJECT_APPLYCLUETEXTURE_OFFSET UNITYSDK_OFFSET(0x24938B0)
#define UIEVENTCLUESEARCHOBJECT_SETCLUEHINTDATA_OFFSET UNITYSDK_OFFSET(0x24939F0)
#define UIEVENTCLUESEARCHOBJECT_CO_PLAYREGISTERANIMATION_OFFSET UNITYSDK_OFFSET(0x2493AB0)
#define UIEVENTCLUESEARCHOBJECT_APPLYSTATEBYAMOUNTS_OFFSET UNITYSDK_OFFSET(0x24933D0)
#define UIEVENTCLUESEARCHOBJECT_SETDEFERLINEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x2493B40)

	inline static constexpr unsigned int UIEventClueSearchObject_TypeDefinitionIndex = 5736;

	class UIEventClueSearchObject : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* unusedSlotRoot; // 0x18
		::UnityEngine::GameObject* registRoot; // 0x20
		::UnityEngine::GameObject* nameTagRoot; // 0x28
		UILabel* clueNameLabel; // 0x30
		UITexture* clueIconTexture; // 0x38
		UILabel* amountLabel; // 0x40
		MXButton* registerButton; // 0x48
		MXButton* hintButton; // 0x50
		::UnityEngine::GameObject* clueLineObject; // 0x58
		::UnityEngine::GameObject* clueCompleteObject; // 0x60
		::UnityEngine::Animation* slotAnimation; // 0x68
		::System::String* registerClipName; // 0x70
		ClueSlotViewData* _data; // 0x78
		Il2CppObject* _onClickRegister; // 0x80
		UIEventContentClueViewModel* _viewModel; // 0x88
		::System::String* _slotClueHintText; // 0x90
		::System::Boolean _deferLineVisibility; // 0x98
		::System::Boolean _pendingLineActive; // 0x99

		::System::Void OnClickRegister()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCLUESEARCHOBJECT_ONCLICKREGISTER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayCompleteOnceByLineTween()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCLUESEARCHOBJECT_CO_PLAYCOMPLETEONCEBYLINETWEEN_OFFSET))(nullptr);
		}

		::System::Void SetUnused()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCLUESEARCHOBJECT_SETUNUSED_OFFSET))(nullptr);
		}

		::System::Single GetMaxTweenTimeSeconds(::UnityEngine::GameObject* arg)
		{
			return ((::System::Single(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCLUESEARCHOBJECT_GETMAXTWEENTIMESECONDS_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyNameTag(ClueSlotViewData* arg)
		{
			((::System::Void(*)(ClueSlotViewData*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCLUESEARCHOBJECT_APPLYNAMETAG_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCLUESEARCHOBJECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCLUESEARCHOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Bind(ClueSlotViewData* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(ClueSlotViewData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCLUESEARCHOBJECT_BIND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyLineVisibilityNow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCLUESEARCHOBJECT_APPLYLINEVISIBILITYNOW_OFFSET))(nullptr);
		}

		::System::Void OnClickHintButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCLUESEARCHOBJECT_ONCLICKHINTBUTTON_OFFSET))(nullptr);
		}

		::System::Void ApplyClueTexture(ClueSlotViewData* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(ClueSlotViewData*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCLUESEARCHOBJECT_APPLYCLUETEXTURE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetClueHintData(UIEventContentClueViewModel* arg, ::System::String* str)
		{
			((::System::Void(*)(UIEventContentClueViewModel*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCLUESEARCHOBJECT_SETCLUEHINTDATA_OFFSET))(arg, str, nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayRegisterAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCLUESEARCHOBJECT_CO_PLAYREGISTERANIMATION_OFFSET))(nullptr);
		}

		::System::Void ApplyStateByAmounts(ClueSlotViewData* arg)
		{
			((::System::Void(*)(ClueSlotViewData*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCLUESEARCHOBJECT_APPLYSTATEBYAMOUNTS_OFFSET))(arg, nullptr);
		}

		::System::Void SetDeferLineVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCLUESEARCHOBJECT_SETDEFERLINEVISIBILITY_OFFSET))(arg, nullptr);
		}

	};

