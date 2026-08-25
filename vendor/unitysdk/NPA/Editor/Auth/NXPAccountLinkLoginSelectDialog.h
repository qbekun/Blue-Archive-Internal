#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth::View { class NXPAccountLinkLoginSelectView; }

#define NPA_EDITOR_AUTH_NXPACCOUNTLINKLOGINSELECTDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CA8BA0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKLOGINSELECTDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CA8CD0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKLOGINSELECTDIALOG_GET_ASGUEST_OFFSET UNITYSDK_OFFSET(0x9CA8F40)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKLOGINSELECTDIALOG_SET_ASGUEST_OFFSET UNITYSDK_OFFSET(0x9CA8F50)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKLOGINSELECTDIALOG_GET_ASACCOUNTLINK_OFFSET UNITYSDK_OFFSET(0x9CA8F60)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKLOGINSELECTDIALOG_SET_ASACCOUNTLINK_OFFSET UNITYSDK_OFFSET(0x9CA8F70)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKLOGINSELECTDIALOG__SETCALLBACK_B__1_0_OFFSET UNITYSDK_OFFSET(0x9CA8F80)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKLOGINSELECTDIALOG__SETCALLBACK_B__1_1_OFFSET UNITYSDK_OFFSET(0x9CA8FB0)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPAccountLinkLoginSelectDialog_TypeDefinitionIndex = 27153;

	class NXPAccountLinkLoginSelectDialog : public Il2CppObject
	{
	public:
		::System::Action* _AsGuest_k__BackingField; // 0x30
		::System::Action* _AsAccountLink_k__BackingField; // 0x38
		::NPA::Editor::Auth::View::NXPAccountLinkLoginSelectView* _view; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKLOGINSELECTDIALOG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKLOGINSELECTDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Action* get_AsGuest()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKLOGINSELECTDIALOG_GET_ASGUEST_OFFSET))(nullptr);
		}

		::System::Void set_AsGuest(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKLOGINSELECTDIALOG_SET_ASGUEST_OFFSET))(arg, nullptr);
		}

		::System::Action* get_AsAccountLink()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKLOGINSELECTDIALOG_GET_ASACCOUNTLINK_OFFSET))(nullptr);
		}

		::System::Void set_AsAccountLink(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKLOGINSELECTDIALOG_SET_ASACCOUNTLINK_OFFSET))(arg, nullptr);
		}

		::System::Void _SetCallback_b__1_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKLOGINSELECTDIALOG__SETCALLBACK_B__1_0_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__1_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKLOGINSELECTDIALOG__SETCALLBACK_B__1_1_OFFSET))(nullptr);
		}

	};
}

