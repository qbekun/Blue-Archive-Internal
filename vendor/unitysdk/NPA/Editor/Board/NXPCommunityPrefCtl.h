#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Board { class NXPCommunityPrefCtl; }
namespace NPA::Editor { class NXPToyPrefs; }

#define NPA_EDITOR_BOARD_NXPCOMMUNITYPREFCTL_GET_COMMONPREFCTL_OFFSET UNITYSDK_OFFSET(0x9C4FE60)
#define NPA_EDITOR_BOARD_NXPCOMMUNITYPREFCTL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C4FFF0)
#define NPA_EDITOR_BOARD_NXPCOMMUNITYPREFCTL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C50210)
#define NPA_EDITOR_BOARD_NXPCOMMUNITYPREFCTL_SETCOMMUNITYLASTADMINTHREAD_OFFSET UNITYSDK_OFFSET(0x9C50380)
#define NPA_EDITOR_BOARD_NXPCOMMUNITYPREFCTL_GETCOMMUNITYLASTADMINTHREAD_OFFSET UNITYSDK_OFFSET(0x9C503E0)
#define NPA_EDITOR_BOARD_NXPCOMMUNITYPREFCTL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C50450)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPCommunityPrefCtl_TypeDefinitionIndex = 26882;

	class NXPCommunityPrefCtl : public Il2CppObject
	{
	public:
		::NPA::Editor::Board::NXPCommunityPrefCtl* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		Il2CppObject* prefForNPSN; // 0x10

		::NPA::Editor::NXPToyPrefs* get_CommonPrefCtl()
		{
			return (return (::NPA::Editor::NXPToyPrefs*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCOMMUNITYPREFCTL_GET_COMMONPREFCTL_OFFSET))(nullptr);
		}

		::NPA::Editor::Board::NXPCommunityPrefCtl* get_Instance()
		{
			return (return (::NPA::Editor::Board::NXPCommunityPrefCtl*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCOMMUNITYPREFCTL_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCOMMUNITYPREFCTL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommunityLastAdminThread(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCOMMUNITYPREFCTL_SETCOMMUNITYLASTADMINTHREAD_OFFSET))(str, nullptr);
		}

		::System::String* GetCommunityLastAdminThread()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCOMMUNITYPREFCTL_GETCOMMUNITYLASTADMINTHREAD_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCOMMUNITYPREFCTL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

