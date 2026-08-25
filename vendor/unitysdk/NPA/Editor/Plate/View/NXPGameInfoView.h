#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Plate { class GameRatingInfo; }
namespace UnityEngine { class Sprite; }

#define NPA_EDITOR_PLATE_VIEW_NXPGAMEINFOVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9DC97C0)
#define NPA_EDITOR_PLATE_VIEW_NXPGAMEINFOVIEW_SETGAMERATINGINFO_OFFSET UNITYSDK_OFFSET(0x9DC97D0)
#define NPA_EDITOR_PLATE_VIEW_NXPGAMEINFOVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9DC97E0)
#define NPA_EDITOR_PLATE_VIEW_NXPGAMEINFOVIEW_GETGRBFIELDICON_OFFSET UNITYSDK_OFFSET(0x9DCABE0)
#define NPA_EDITOR_PLATE_VIEW_NXPGAMEINFOVIEW_GETGRBRATINGICON_OFFSET UNITYSDK_OFFSET(0x9DCAAA0)
#define NPA_EDITOR_PLATE_VIEW_NXPGAMEINFOVIEW_GETGRBRATINGNAME_OFFSET UNITYSDK_OFFSET(0x9DCA990)
#define NPA_EDITOR_PLATE_VIEW_NXPGAMEINFOVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DBF5A0)

namespace NPA::Editor::Plate::View
{
	inline static constexpr unsigned int NXPGameInfoView_TypeDefinitionIndex = 26457;

	class NXPGameInfoView : public Il2CppObject
	{
	public:
		::System::String* plateImageBaseUrl; // 0x48
		::System::String* gameInfoViewPrefabUrl; // 0x50
		::System::String* grbRatingIconPrefabUrl; // 0x58
		::System::String* gameInfoHeaderBasePath; // 0x60
		::System::String* gameInfoContentsBasePath; // 0x68
		::System::String* title; // 0x70
		::NPA::Editor::Plate::GameRatingInfo* gameRatingInfo; // 0x78

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPGAMEINFOVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetGameRatingInfo(::NPA::Editor::Plate::GameRatingInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Plate::GameRatingInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPGAMEINFOVIEW_SETGAMERATINGINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPGAMEINFOVIEW_LOAD_OFFSET))(nullptr);
		}

		::UnityEngine::Sprite* GetGrbFieldIcon(::System::String* str)
		{
			return (return (::UnityEngine::Sprite*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPGAMEINFOVIEW_GETGRBFIELDICON_OFFSET))(str, nullptr);
		}

		::UnityEngine::Sprite* GetGrbRatingIcon(::System::String* str)
		{
			return (return (::UnityEngine::Sprite*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPGAMEINFOVIEW_GETGRBRATINGICON_OFFSET))(str, nullptr);
		}

		::System::String* GetGrbRatingName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPGAMEINFOVIEW_GETGRBRATINGNAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPGAMEINFOVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

