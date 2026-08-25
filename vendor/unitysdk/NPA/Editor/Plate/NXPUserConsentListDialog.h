#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Plate::View { class NXPUserConsentListView; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DC4C10)
#define NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x9DC4D70)
#define NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG_GETUSERCONSENTSTATE_OFFSET UNITYSDK_OFFSET(0x9DC4E10)
#define NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG_SETTOGGLEDISABLEINUSERCONSENTLIST_OFFSET UNITYSDK_OFFSET(0x9DC4F20)
#define NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DC5080)
#define NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x9DC51D0)
#define NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG__SHOW_B__6_0_OFFSET UNITYSDK_OFFSET(0x9DC5210)
#define NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG__SHOW_B__6_1_OFFSET UNITYSDK_OFFSET(0x9DC5290)
#define NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG__SETCALLBACK_B__9_0_OFFSET UNITYSDK_OFFSET(0x9DC52D0)
#define NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG__SETCALLBACK_B__9_1_OFFSET UNITYSDK_OFFSET(0x9DC5310)
#define NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG__SETCALLBACK_B__9_2_OFFSET UNITYSDK_OFFSET(0x9DC5350)

namespace NPA::Editor::Plate
{
	inline static constexpr unsigned int NXPUserConsentListDialog_TypeDefinitionIndex = 26447;

	class NXPUserConsentListDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Plate::View::NXPUserConsentListView* userConsentListView; // 0x30
		::System::Action* backPressCallback; // 0x38
		Il2CppObject* closeCallback; // 0x40
		Il2CppObject* userConsentList; // 0x48
		::NPA::SimpleJSON::JSONNode* setListJson; // 0x50

		::System::Void .ctor(::System::String* str, ::NPA::SimpleJSON::JSONNode* arg, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::SimpleJSON::JSONNode*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG_SHOW_OFFSET))(nullptr);
		}

		::System::Void GetUserConsentState(::NPA::SimpleJSON::JSONNode* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG_GETUSERCONSENTSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetToggleDisableInUserConsentList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG_SETTOGGLEDISABLEINUSERCONSENTLIST_OFFSET))(nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG_CLOSE_OFFSET))(nullptr);
		}

		::System::Void _Show_b__6_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG__SHOW_B__6_0_OFFSET))(nullptr);
		}

		::System::Void _Show_b__6_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG__SHOW_B__6_1_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__9_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG__SETCALLBACK_B__9_0_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__9_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG__SETCALLBACK_B__9_1_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__9_2(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERCONSENTLISTDIALOG__SETCALLBACK_B__9_2_OFFSET))(str, arg, nullptr);
		}

	};
}

