#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Banner::View { class NXPBannerView; }
namespace NPA::Promotion { class NXPToyBanner; }
namespace UnityEngine { class Texture2D; }

#define NPA_EDITOR_BANNER_NXPBANNERDIALOG_GET_ISSHOWN_OFFSET UNITYSDK_OFFSET(0x9C68AE0)
#define NPA_EDITOR_BANNER_NXPBANNERDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C64210)
#define NPA_EDITOR_BANNER_NXPBANNERDIALOG_SETBANNERDATA_OFFSET UNITYSDK_OFFSET(0x9C642B0)
#define NPA_EDITOR_BANNER_NXPBANNERDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C68B00)
#define NPA_EDITOR_BANNER_NXPBANNERDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x9C68C70)
#define NPA_EDITOR_BANNER_NXPBANNERDIALOG_RELOADVIEW_OFFSET UNITYSDK_OFFSET(0x9C644D0)
#define NPA_EDITOR_BANNER_NXPBANNERDIALOG_GETDONTSHOWTODAYTOGGLESTATE_OFFSET UNITYSDK_OFFSET(0x9C68C80)
#define NPA_EDITOR_BANNER_NXPBANNERDIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x9C63DC0)
#define NPA_EDITOR_BANNER_NXPBANNERDIALOG_DESTROY_OFFSET UNITYSDK_OFFSET(0x9C68C90)
#define NPA_EDITOR_BANNER_NXPBANNERDIALOG__SETCALLBACK_B__14_0_OFFSET UNITYSDK_OFFSET(0x9C68CC0)

namespace NPA::Editor::Banner
{
	inline static constexpr unsigned int NXPBannerDialog_TypeDefinitionIndex = 26930;

	class NXPBannerDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Banner::View::NXPBannerView* bannerView; // 0x30
		::System::Boolean isShown; // 0x38
		::System::Boolean dontShowToggleState; // 0x39
		::NPA::Promotion::NXPToyBanner* banner; // 0x40
		::UnityEngine::Texture2D* bannerTexture; // 0x48
		::System::String* dontShowToggleLabel; // 0x50
		Il2CppObject* onDontShowToggleValueChanged; // 0x58
		::System::Action* onClickWorkOnButton; // 0x60
		::System::Action* onClickBannerContent; // 0x68
		::System::Action* onClickCloseButton; // 0x70

		::System::Boolean get_IsShown()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERDIALOG_GET_ISSHOWN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERDIALOG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetBannerData(::NPA::Promotion::NXPToyBanner* arg, ::UnityEngine::Texture2D* arg, ::System::String* str, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyBanner*, ::UnityEngine::Texture2D*, ::System::String*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERDIALOG_SETBANNERDATA_OFFSET))(arg, arg, str, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERDIALOG_SHOW_OFFSET))(nullptr);
		}

		::System::Void ReloadView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERDIALOG_RELOADVIEW_OFFSET))(nullptr);
		}

		::System::Boolean GetDontShowTodayToggleState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERDIALOG_GETDONTSHOWTODAYTOGGLESTATE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERDIALOG_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERDIALOG_DESTROY_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__14_0(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERDIALOG__SETCALLBACK_B__14_0_OFFSET))(arg, nullptr);
		}

	};
}

