#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class SpriteState; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine { class GameObject; }

#define NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x9CB7590)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x9CB7910)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_SETTERMSITEM_OFFSET UNITYSDK_OFFSET(0x9CB7DF0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_SETGDPRTERMSITEM_OFFSET UNITYSDK_OFFSET(0x9CB82D0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_UPDATETERMSLISTHEIGHT_OFFSET UNITYSDK_OFFSET(0x9CB9090)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_MAKEGDPRTERMSLINKGROUP_OFFSET UNITYSDK_OFFSET(0x9CB90B0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_DRAWGDPRTERMSLINK_OFFSET UNITYSDK_OFFSET(0x9CB79F0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_UPDATEENABLED_OFFSET UNITYSDK_OFFSET(0x9CB91B0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_UPDATELINKBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x9CB8CB0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_UPDATEAGREECHECKBOXSTATE_OFFSET UNITYSDK_OFFSET(0x9CB8210)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_GETSPRITE_OFFSET UNITYSDK_OFFSET(0x9CB78B0)
#define NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CB9250)

namespace NPA::Editor::Auth::View
{
	inline static constexpr unsigned int NXPTermsItemView_TypeDefinitionIndex = 27197;

	class NXPTermsItemView : public Il2CppObject
	{
	public:
		::System::Int32 termsID; // 0x18
		::System::Boolean isAgree; // 0x1C
		::System::Single LinkGroupMaxWidth; // 0x0
		::UnityEngine::Sprite* agreeSprite; // 0x20
		::UnityEngine::UI::SpriteState* agreeSpriteState; // 0x28
		::UnityEngine::Sprite* disagreeSprite; // 0x48
		::UnityEngine::UI::SpriteState* disagreeSpriteState; // 0x50
		::UnityEngine::UI::Text* titleText; // 0x70
		::UnityEngine::UI::Button* agreeCheckBox; // 0x78
		::System::Single linkWidthSum; // 0x80
		::System::Boolean isUpdateUI; // 0x84
		::UnityEngine::GameObject* linkGroup; // 0x88
		::System::Int32 linkCount; // 0x90
		Il2CppObject* links; // 0x98
		Il2CppObject* onUpdateTermsListHeight; // 0xA0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetTermsItem(::System::Int32 arg, ::System::String* str, ::System::Int32 arg, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::Int32, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_SETTERMSITEM_OFFSET))(arg, str, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetGdprTermsItem(::System::Int32 arg, ::System::String* str, Il2CppObject* arg, ::System::Int32 arg, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, Il2CppObject*, ::System::Int32, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_SETGDPRTERMSITEM_OFFSET))(arg, str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void UpdateTermsListHeight(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_UPDATETERMSLISTHEIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* MakeGdprTermsLinkGroup()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_MAKEGDPRTERMSLINKGROUP_OFFSET))(nullptr);
		}

		::System::Void DrawGdprTermsLink()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_DRAWGDPRTERMSLINK_OFFSET))(nullptr);
		}

		::System::Void UpdateEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_UPDATEENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateLinkButtonState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_UPDATELINKBUTTONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateAgreeCheckBoxState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_UPDATEAGREECHECKBOXSTATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Sprite* GetSprite(::System::String* str)
		{
			return (return (::UnityEngine::Sprite*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_GETSPRITE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPTERMSITEMVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

