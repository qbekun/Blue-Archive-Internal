#pragma once
#include "unitysdk.h"

class UIButton;
namespace UnityEngine { class Sprite; }
class UISprite;
class UI2DSprite;
class State;

#define UIBUTTON_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x9F7A70)
#define UIBUTTON_SET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x9F7B90)
#define UIBUTTON_GET_NORMALSPRITE_OFFSET UNITYSDK_OFFSET(0x9F7E40)
#define UIBUTTON_SET_NORMALSPRITE_OFFSET UNITYSDK_OFFSET(0x9F7E70)
#define UIBUTTON_GET_NORMALSPRITE2D_OFFSET UNITYSDK_OFFSET(0x9F80F0)
#define UIBUTTON_SET_NORMALSPRITE2D_OFFSET UNITYSDK_OFFSET(0x9F8120)
#define UIBUTTON_ONINIT_OFFSET UNITYSDK_OFFSET(0x9F83F0)
#define UIBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9F88F0)
#define UIBUTTON_ONDRAGOVER_OFFSET UNITYSDK_OFFSET(0x9F89F0)
#define UIBUTTON_ONDRAGOUT_OFFSET UNITYSDK_OFFSET(0x9F8C10)
#define UIBUTTON_ONCLICK_OFFSET UNITYSDK_OFFSET(0x9F8E30)
#define UIBUTTON_SETSTATE_OFFSET UNITYSDK_OFFSET(0x9F8FC0)
#define UIBUTTON_SETSPRITE_OFFSET UNITYSDK_OFFSET(0x9F8010)
#define UIBUTTON_SETSPRITE_OFFSET UNITYSDK_OFFSET(0x9F82D0)
#define UIBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F9230)

	inline static constexpr unsigned int UIButton_TypeDefinitionIndex = 16;

	class UIButton : public Il2CppObject
	{
	public:
		UIButton* current; // 0x0
		::System::Boolean dragHighlight; // 0x88
		::System::String* hoverSprite; // 0x90
		::System::String* pressedSprite; // 0x98
		::System::String* disabledSprite; // 0xA0
		::UnityEngine::Sprite* hoverSprite2D; // 0xA8
		::UnityEngine::Sprite* pressedSprite2D; // 0xB0
		::UnityEngine::Sprite* disabledSprite2D; // 0xB8
		::System::Boolean pixelSnap; // 0xC0
		Il2CppObject* onClick; // 0xC8
		UISprite* mSprite; // 0xD0
		UI2DSprite* mSprite2D; // 0xD8
		::System::String* mNormalSprite; // 0xE0
		::UnityEngine::Sprite* mNormalSprite2D; // 0xE8

		::System::Boolean get_isEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTON_GET_ISENABLED_OFFSET))(nullptr);
		}

		::System::Void set_isEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTON_SET_ISENABLED_OFFSET))(arg, nullptr);
		}

		::System::String* get_normalSprite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTON_GET_NORMALSPRITE_OFFSET))(nullptr);
		}

		::System::Void set_normalSprite(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTON_SET_NORMALSPRITE_OFFSET))(str, nullptr);
		}

		::UnityEngine::Sprite* get_normalSprite2D()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTON_GET_NORMALSPRITE2D_OFFSET))(nullptr);
		}

		::System::Void set_normalSprite2D(::UnityEngine::Sprite* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTON_SET_NORMALSPRITE2D_OFFSET))(arg, nullptr);
		}

		::System::Void OnInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTON_ONINIT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDragOver()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTON_ONDRAGOVER_OFFSET))(nullptr);
		}

		::System::Void OnDragOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTON_ONDRAGOUT_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTON_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetState(State* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(State*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTON_SETSTATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSprite(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTON_SETSPRITE_OFFSET))(str, nullptr);
		}

		::System::Void SetSprite(::UnityEngine::Sprite* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTON_SETSPRITE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTON_.CTOR_OFFSET))(nullptr);
		}

	};

