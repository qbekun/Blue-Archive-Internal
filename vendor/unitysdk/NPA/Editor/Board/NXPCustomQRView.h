#pragma once
#include "../../../unitysdk.h"

namespace NPA::Promotion { class NXPToyCustomQRCodeInfo; }
namespace UnityEngine { class Texture2D; }
namespace NPA::Editor::Network { class NXPToyImageResponse; }

#define NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9C5ABA0)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_SETACTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C5B9E0)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_SETQRINFO_OFFSET UNITYSDK_OFFSET(0x9C5B9F0)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_REFRESHQRIMAGE_OFFSET UNITYSDK_OFFSET(0x9C5B2F0)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_SETQRIMAGE_OFFSET UNITYSDK_OFFSET(0x9C5BDC0)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_CREATEQRIMAGE_OFFSET UNITYSDK_OFFSET(0x9C5BA00)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_SETWIDGETBACKGROUNDIMAGE_OFFSET UNITYSDK_OFFSET(0x9C5BFB0)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_REFRESHWIDGETBACKGROUNDIMAGE_OFFSET UNITYSDK_OFFSET(0x9C5B410)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_REFRESHBUTTONIMAGE_OFFSET UNITYSDK_OFFSET(0x9C5B520)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_REFRESHBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x9C5C1B0)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_SHORTCUTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x9C5C1C0)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_CLOSEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x9C5C360)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C5C380)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW__REFRESHQRIMAGE_B__17_0_OFFSET UNITYSDK_OFFSET(0x9C5C3F0)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW__REFRESHWIDGETBACKGROUNDIMAGE_B__21_0_OFFSET UNITYSDK_OFFSET(0x9C5C440)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPCustomQRView_TypeDefinitionIndex = 26902;

	class NXPCustomQRView : public Il2CppObject
	{
	public:
		::System::String* qrViewPrefabUrl; // 0x48
		::System::String* windowPath; // 0x0
		::System::String* qrMainContentsPath; // 0x0
		::System::String* leftPanelPath; // 0x0
		::System::String* rightPanelPath; // 0x0
		::System::String* qrCardLayoutPath; // 0x0
		::System::String* textGroupPath; // 0x0
		::System::String* buttonGroupPath; // 0x0
		::NPA::Promotion::NXPToyCustomQRCodeInfo* qrInfo; // 0x50
		::UnityEngine::Texture2D* logoImageRaw; // 0x58
		::UnityEngine::Texture2D* qrImage; // 0x60
		::UnityEngine::Texture2D* widgetBackgroundImage; // 0x68
		::System::Action* actionCallback; // 0x70
		::System::Int32 DefaultQRSize; // 0x0

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void SetActionCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_SETACTIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetQRInfo(::NPA::Promotion::NXPToyCustomQRCodeInfo* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCustomQRCodeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_SETQRINFO_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshQRImage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_REFRESHQRIMAGE_OFFSET))(nullptr);
		}

		::System::Void SetQRImage(::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_SETQRIMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CreateQRImage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_CREATEQRIMAGE_OFFSET))(nullptr);
		}

		::System::Void SetWidgetBackgroundImage(::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_SETWIDGETBACKGROUNDIMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshWidgetBackgroundImage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_REFRESHWIDGETBACKGROUNDIMAGE_OFFSET))(nullptr);
		}

		::System::Void RefreshButtonImage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_REFRESHBUTTONIMAGE_OFFSET))(nullptr);
		}

		::System::Void RefreshButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_REFRESHBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void ShortCutButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_SHORTCUTBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void CloseButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_CLOSEBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _RefreshQRImage_b__17_0(::NPA::Editor::Network::NXPToyImageResponse* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPToyImageResponse*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW__REFRESHQRIMAGE_B__17_0_OFFSET))(arg, nullptr);
		}

		::System::Void _RefreshWidgetBackgroundImage_b__21_0(::NPA::Editor::Network::NXPToyImageResponse* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPToyImageResponse*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRVIEW__REFRESHWIDGETBACKGROUNDIMAGE_B__21_0_OFFSET))(arg, nullptr);
		}

	};
}

