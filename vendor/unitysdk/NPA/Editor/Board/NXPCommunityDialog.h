#pragma once
#include "../../../unitysdk.h"

namespace NPA::Service { class NXPWebInfo; }
namespace NPA { class NPRequestTypeTag; }

#define NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_GET_ISSHOWING_OFFSET UNITYSDK_OFFSET(0x9C50C10)
#define NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_SET_ISSHOWING_OFFSET UNITYSDK_OFFSET(0x9C50C20)
#define NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C50C30)
#define NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_INITIALIZATIONCOMMUNITY_OFFSET UNITYSDK_OFFSET(0x9C50CB0)
#define NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_GETREQUESTTAG_OFFSET UNITYSDK_OFFSET(0x9C50D10)
#define NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_GETSCREENNAME_OFFSET UNITYSDK_OFFSET(0x9C50D20)
#define NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x9C50D50)
#define NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_ONSTANDBY_OFFSET UNITYSDK_OFFSET(0x9C50D70)
#define NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_ONLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x9C50D90)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPCommunityDialog_TypeDefinitionIndex = 26885;

	class NXPCommunityDialog : public Il2CppObject
	{
	public:
		::System::Boolean loadSuccess; // 0x98
		Il2CppObject* initCallback; // 0xA0
		::System::Boolean _IsShowing_k__BackingField; // 0xA8

		::System::Boolean get_IsShowing()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_GET_ISSHOWING_OFFSET))(nullptr);
		}

		::System::Void set_IsShowing(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_SET_ISSHOWING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::NPA::Service::NXPWebInfo* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializationCommunity()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_INITIALIZATIONCOMMUNITY_OFFSET))(nullptr);
		}

		::NPA::NPRequestTypeTag* GetRequestTag()
		{
			return (return (::NPA::NPRequestTypeTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_GETREQUESTTAG_OFFSET))(nullptr);
		}

		::System::String* GetScreenName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_GETSCREENNAME_OFFSET))(nullptr);
		}

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_SHOW_OFFSET))(nullptr);
		}

		::System::Void OnStandby(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_ONSTANDBY_OFFSET))(arg, nullptr);
		}

		::System::Void OnLoadProgressChanged(::System::Object* arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCOMMUNITYDIALOG_ONLOADPROGRESSCHANGED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

