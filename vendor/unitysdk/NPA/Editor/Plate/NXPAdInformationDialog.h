#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Plate::View { class NXPAdInformationView; }
namespace NPA { class NXPPushPolicies; }
namespace NPA { class NXPPolicy; }
namespace NPA::Editor::Auth { class NXPToyTermsManager; }
namespace NPA::Editor::Plate { class NXPAdInformationDialog; }
namespace NPA::Editor::Push { class NXPPushMenuOption; }

#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DBD670)
#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DBD860)
#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x9DBD9B0)
#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_LOADPOLICYSTATUS_OFFSET UNITYSDK_OFFSET(0x9DBDA30)
#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_GETUSERPOLICYSTATUS_OFFSET UNITYSDK_OFFSET(0x9DBDB10)
#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_SETADPUSHPOLICY_OFFSET UNITYSDK_OFFSET(0x9DBDC10)
#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_SETNIGHTPUSHPOLICY_OFFSET UNITYSDK_OFFSET(0x9DBDEB0)
#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_SETSMSPOLICY_OFFSET UNITYSDK_OFFSET(0x9DBE0E0)
#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_SETEMAILPOLICY_OFFSET UNITYSDK_OFFSET(0x9DBE0F0)
#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_CHECKPOLICYSTATUS_OFFSET UNITYSDK_OFFSET(0x9DBE100)
#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_DESTROY_OFFSET UNITYSDK_OFFSET(0x9DBE160)
#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x9DBE1C0)
#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG__SETCALLBACK_B__11_0_OFFSET UNITYSDK_OFFSET(0x9DBE270)
#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG__SETCALLBACK_B__11_1_OFFSET UNITYSDK_OFFSET(0x9DBE2B0)
#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG__SETCALLBACK_B__11_2_OFFSET UNITYSDK_OFFSET(0x9DBE340)
#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG__SHOW_B__12_0_OFFSET UNITYSDK_OFFSET(0x9DBE460)
#define NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG__SHOW_B__12_1_OFFSET UNITYSDK_OFFSET(0x9DBE560)

namespace NPA::Editor::Plate
{
	inline static constexpr unsigned int NXPAdInformationDialog_TypeDefinitionIndex = 26430;

	class NXPAdInformationDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Plate::View::NXPAdInformationView* adInformationView; // 0x30
		::System::Action* backPressCallback; // 0x38
		Il2CppObject* closeCallback; // 0x40
		::NPA::NXPPushPolicies* pushPolicies; // 0x48
		::NPA::NXPPolicy* adPushPolicy; // 0x50
		::NPA::NXPPolicy* nightPushPolicy; // 0x58
		::NPA::NXPPolicy* smsPolicy; // 0x60
		::NPA::NXPPolicy* emailPolicy; // 0x68
		::NPA::Editor::Auth::NXPToyTermsManager* termsManager; // 0x70
		::NPA::Editor::Plate::NXPAdInformationDialog* instance; // 0x0

		::System::Void .ctor(::NPA::Editor::Push::NXPPushMenuOption* arg, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Push::NXPPushMenuOption*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_SHOW_OFFSET))(nullptr);
		}

		::System::Void LoadPolicyStatus(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_LOADPOLICYSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void GetUserPolicyStatus(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_GETUSERPOLICYSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void SetAdPushPolicy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_SETADPUSHPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void SetNightPushPolicy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_SETNIGHTPUSHPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void SetSmsPolicy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_SETSMSPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void SetEmailPolicy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_SETEMAILPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckPolicyStatus(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_CHECKPOLICYSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_DESTROY_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG_CLOSE_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__11_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG__SETCALLBACK_B__11_0_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__11_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG__SETCALLBACK_B__11_1_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__11_2(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG__SETCALLBACK_B__11_2_OFFSET))(str, arg, nullptr);
		}

		::System::Void _Show_b__12_0(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG__SHOW_B__12_0_OFFSET))(arg, nullptr);
		}

		::System::Void _Show_b__12_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPADINFORMATIONDIALOG__SHOW_B__12_1_OFFSET))(nullptr);
		}

	};
}

