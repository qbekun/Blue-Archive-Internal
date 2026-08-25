#pragma once
#include "../../../unitysdk.h"

namespace NPA::Promotion { class NXPToyQRCodeInfo; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }
namespace NPA::Editor::Network { class NXPToyImageResponse; }

#define NPA_EDITOR_BOARD_NXPQRVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9C5CC50)
#define NPA_EDITOR_BOARD_NXPQRVIEW_SETQRINFO_OFFSET UNITYSDK_OFFSET(0x9C5D5E0)
#define NPA_EDITOR_BOARD_NXPQRVIEW_ISFAILEDCREATEQRCODE_OFFSET UNITYSDK_OFFSET(0x9C5D5F0)
#define NPA_EDITOR_BOARD_NXPQRVIEW_RESOLVEQRTEXT_OFFSET UNITYSDK_OFFSET(0x9C5D600)
#define NPA_EDITOR_BOARD_NXPQRVIEW_REFRESHQRIMAGE_OFFSET UNITYSDK_OFFSET(0x9C5D4B0)
#define NPA_EDITOR_BOARD_NXPQRVIEW_SETQRIMAGE_OFFSET UNITYSDK_OFFSET(0x9C5D9A0)
#define NPA_EDITOR_BOARD_NXPQRVIEW_CREATEQRIMAGE_OFFSET UNITYSDK_OFFSET(0x9C5D740)
#define NPA_EDITOR_BOARD_NXPQRVIEW_CLOSEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x9C5DB90)
#define NPA_EDITOR_BOARD_NXPQRVIEW_ADDSPACER_OFFSET UNITYSDK_OFFSET(0x9C5D2E0)
#define NPA_EDITOR_BOARD_NXPQRVIEW_ADDFLEXSPACER_OFFSET UNITYSDK_OFFSET(0x9C5D120)
#define NPA_EDITOR_BOARD_NXPQRVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C55A40)
#define NPA_EDITOR_BOARD_NXPQRVIEW__REFRESHQRIMAGE_B__14_0_OFFSET UNITYSDK_OFFSET(0x9C5DBA0)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPQRView_TypeDefinitionIndex = 26905;

	class NXPQRView : public Il2CppObject
	{
	public:
		::System::String* qrViewPrefabUrl; // 0x48
		::System::String* cardPath; // 0x0
		::System::String* titlePath; // 0x0
		::System::String* qrImagePath; // 0x0
		::System::String* closeButtonPath; // 0x0
		::NPA::Promotion::NXPToyQRCodeInfo* qrInfo; // 0x50
		::UnityEngine::Texture2D* gameIconRaw; // 0x58
		::UnityEngine::Texture2D* qrImage; // 0x60
		::System::Boolean failedCreateQRCode; // 0x68
		::System::Int32 DefaultQRSize; // 0x0

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPQRVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void SetQRInfo(::NPA::Promotion::NXPToyQRCodeInfo* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyQRCodeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPQRVIEW_SETQRINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFailedCreateQRCode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPQRVIEW_ISFAILEDCREATEQRCODE_OFFSET))(nullptr);
		}

		::System::String* ResolveQRText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPQRVIEW_RESOLVEQRTEXT_OFFSET))(nullptr);
		}

		::System::Void RefreshQRImage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPQRVIEW_REFRESHQRIMAGE_OFFSET))(nullptr);
		}

		::System::Void SetQRImage(::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPQRVIEW_SETQRIMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CreateQRImage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPQRVIEW_CREATEQRIMAGE_OFFSET))(nullptr);
		}

		::System::Void CloseButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPQRVIEW_CLOSEBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void AddSpacer(::UnityEngine::Transform* arg, ::System::Int32 arg, ::System::Single arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::System::Single, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPQRVIEW_ADDSPACER_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Void AddFlexSpacer(::UnityEngine::Transform* arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPQRVIEW_ADDFLEXSPACER_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPQRVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _RefreshQRImage_b__14_0(::NPA::Editor::Network::NXPToyImageResponse* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPToyImageResponse*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPQRVIEW__REFRESHQRIMAGE_B__14_0_OFFSET))(arg, nullptr);
		}

	};
}

