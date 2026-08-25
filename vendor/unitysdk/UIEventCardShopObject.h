#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class GameObject; }
class UITexture;
namespace UnityEngine { class Animation; }
namespace MX::GameLogic::DBModel { class CardShopElementDB; }

#define UIEVENTCARDSHOPOBJECT_GET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x2485270)
#define UIEVENTCARDSHOPOBJECT_SETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x2488030)
#define UIEVENTCARDSHOPOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x248D450)
#define UIEVENTCARDSHOPOBJECT_ADD_SELECTED_OFFSET UNITYSDK_OFFSET(0x2485E00)
#define UIEVENTCARDSHOPOBJECT_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x248D6D0)
#define UIEVENTCARDSHOPOBJECT_FLIPIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x2485340)
#define UIEVENTCARDSHOPOBJECT_CO_FLIPWITHANIMATION_OFFSET UNITYSDK_OFFSET(0x248D120)
#define UIEVENTCARDSHOPOBJECT_REMOVE_SELECTED_OFFSET UNITYSDK_OFFSET(0x248D870)
#define UIEVENTCARDSHOPOBJECT_SETDATA_OFFSET UNITYSDK_OFFSET(0x248AD10)
#define UIEVENTCARDSHOPOBJECT_RESETSCALE_OFFSET UNITYSDK_OFFSET(0x248D6F0)
#define UIEVENTCARDSHOPOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x248D910)
#define UIEVENTCARDSHOPOBJECT_CO_LOADBACKTEXTURE_OFFSET UNITYSDK_OFFSET(0x248ADB0)
#define UIEVENTCARDSHOPOBJECT_GET_SOLDOUT_OFFSET UNITYSDK_OFFSET(0x24852D0)
#define UIEVENTCARDSHOPOBJECT_CO_LOADFRONTTEXTURE_OFFSET UNITYSDK_OFFSET(0x248AE20)

	inline static constexpr unsigned int UIEventCardShopObject_TypeDefinitionIndex = 5714;

	class UIEventCardShopObject : public Il2CppObject
	{
	public:
		MXButton* button; // 0x18
		::UnityEngine::BoxCollider* buttonCollider; // 0x20
		::UnityEngine::GameObject* backRoot; // 0x28
		UITexture* frontTexture; // 0x30
		UITexture* backTexture; // 0x38
		::UnityEngine::GameObject* selectRoot; // 0x40
		::UnityEngine::Animation* flipAnimation; // 0x48
		::Il2CppArray<::System::Object*>* fxObjects; // 0x50
		::Il2CppArray<::System::Object*>* animationClipNames; // 0x58
		::MX::GameLogic::DBModel::CardShopElementDB* cardShopElement; // 0x60
		Il2CppObject* Selected; // 0x68

		Il2CppObject* get_SlotNumber()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPOBJECT_GET_SLOTNUMBER_OFFSET))(nullptr);
		}

		::System::Void SetSelectState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPOBJECT_SETSELECTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPOBJECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void add_Selected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPOBJECT_ADD_SELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPOBJECT_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		::System::Void FlipImmediately(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPOBJECT_FLIPIMMEDIATELY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_FlipWithAnimation(::System::Boolean arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPOBJECT_CO_FLIPWITHANIMATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void remove_Selected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPOBJECT_REMOVE_SELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::CardShopElementDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CardShopElementDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPOBJECT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void ResetScale()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPOBJECT_RESETSCALE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_LoadBackTexture()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPOBJECT_CO_LOADBACKTEXTURE_OFFSET))(nullptr);
		}

		Il2CppObject* get_SoldOut()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPOBJECT_GET_SOLDOUT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_LoadFrontTexture(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPOBJECT_CO_LOADFRONTTEXTURE_OFFSET))(arg, nullptr);
		}

	};

