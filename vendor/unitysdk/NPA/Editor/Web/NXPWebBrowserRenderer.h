#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class GameObject; }
namespace ToyWebViewShared::Messages { class NotifyPaintView; }
namespace ToyWebViewShared::Messages { class NotifyPaintPopup; }
namespace ToyWebViewShared::Messages { class NotifyPopupShow; }
namespace ToyWebViewShared::Messages { class NotifyPopupHide; }
namespace ToyWebViewShared::Messages { class ReplyResize; }

#define NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9DAB7C0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9DAB890)
#define NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_HANDLEFIRSTPAINT_OFFSET UNITYSDK_OFFSET(0x9DABA60)
#define NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9DABBA0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9DABC00)
#define NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_SETONRECTTRANSFORMDIMENSIONSCHANGEACTION_OFFSET UNITYSDK_OFFSET(0x9DABFA0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_ONNOTIFYPAINTVIEW_OFFSET UNITYSDK_OFFSET(0x9DABFB0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_ONNOTIFYPAINTPOPUP_OFFSET UNITYSDK_OFFSET(0x9DABFE0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_ONNOTIFYPOPUPSHOW_OFFSET UNITYSDK_OFFSET(0x9DAC020)
#define NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_ONNOTIFYPOPUPHIDE_OFFSET UNITYSDK_OFFSET(0x9DAC270)
#define NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_GETPOPUPSIZE_OFFSET UNITYSDK_OFFSET(0x9DAC280)
#define NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x9DAC360)
#define NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_SENDRESIZEREQUEST_OFFSET UNITYSDK_OFFSET(0x9DAB970)
#define NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_ONREPLYRESIZE_OFFSET UNITYSDK_OFFSET(0x9DAC9D0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DACA80)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int NXPWebBrowserRenderer_TypeDefinitionIndex = 26388;

	class NXPWebBrowserRenderer : public Il2CppObject
	{
	public:
		::System::Int32 textureWidth; // 0x18
		::System::Int32 textureHeight; // 0x1C
		::System::Boolean firstPaint; // 0x20
		::Il2CppArray<::System::Object*>* frameBuffer; // 0x28
		::UnityEngine::UI::RawImage* image; // 0x30
		Il2CppObject* onFirstPaint; // 0x38
		::System::Boolean painted; // 0x40
		::UnityEngine::Texture2D* texture; // 0x48
		::UnityEngine::GameObject* popupObject; // 0x50
		::Il2CppArray<::System::Object*>* popupFrameBuffer; // 0x58
		::UnityEngine::UI::RawImage* popupImage; // 0x60
		::UnityEngine::Texture2D* popupTexture; // 0x68
		::System::Boolean popupPainted; // 0x70
		::System::Boolean isPopupShowing; // 0x71
		Il2CppObject* onRectTransformDimensionsChangeAction; // 0x78
		::System::Boolean _resizePending; // 0x80
		::System::Int32 _pendingWidth; // 0x84
		::System::Int32 _pendingHeight; // 0x88
		::System::Single _resizeRequestTime; // 0x8C
		::System::Single ResizeDebounceSeconds; // 0x0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void HandleFirstPaint()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_HANDLEFIRSTPAINT_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SetOnRectTransformDimensionsChangeAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_SETONRECTTRANSFORMDIMENSIONSCHANGEACTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyPaintView(::ToyWebViewShared::Messages::NotifyPaintView* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyPaintView*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_ONNOTIFYPAINTVIEW_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyPaintPopup(::ToyWebViewShared::Messages::NotifyPaintPopup* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyPaintPopup*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_ONNOTIFYPAINTPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyPopupShow(::ToyWebViewShared::Messages::NotifyPopupShow* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyPopupShow*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_ONNOTIFYPOPUPSHOW_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyPopupHide(::ToyWebViewShared::Messages::NotifyPopupHide* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyPopupHide*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_ONNOTIFYPOPUPHIDE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPopupSize()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_GETPOPUPSIZE_OFFSET))(nullptr);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(nullptr);
		}

		::System::Void SendResizeRequest(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_SENDRESIZEREQUEST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnReplyResize(::ToyWebViewShared::Messages::ReplyResize* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::ReplyResize*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_ONREPLYRESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERRENDERER_.CTOR_OFFSET))(nullptr);
		}

	};
}

