#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Plate::View { class NXPTermsListView; }

#define NPA_EDITOR_PLATE_NXPTERMSLISTDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DC46C0)
#define NPA_EDITOR_PLATE_NXPTERMSLISTDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DC47E0)
#define NPA_EDITOR_PLATE_NXPTERMSLISTDIALOG_SHOWTERMSDETAIL_OFFSET UNITYSDK_OFFSET(0x9DC4930)
#define NPA_EDITOR_PLATE_NXPTERMSLISTDIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x9DC4A30)
#define NPA_EDITOR_PLATE_NXPTERMSLISTDIALOG__SETCALLBACK_B__4_0_OFFSET UNITYSDK_OFFSET(0x9DC4AB0)
#define NPA_EDITOR_PLATE_NXPTERMSLISTDIALOG__SETCALLBACK_B__4_1_OFFSET UNITYSDK_OFFSET(0x9DC4AF0)
#define NPA_EDITOR_PLATE_NXPTERMSLISTDIALOG__SETCALLBACK_B__4_2_OFFSET UNITYSDK_OFFSET(0x9DC4B70)

namespace NPA::Editor::Plate
{
	inline static constexpr unsigned int NXPTermsListDialog_TypeDefinitionIndex = 26442;

	class NXPTermsListDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Plate::View::NXPTermsListView* termsListView; // 0x30
		::System::Action* backPressCallback; // 0x38
		Il2CppObject* closeCallback; // 0x40

		::System::Void .ctor(::System::String* str, Il2CppObject* arg, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPTERMSLISTDIALOG_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPTERMSLISTDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void ShowTermsDetail(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPTERMSLISTDIALOG_SHOWTERMSDETAIL_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPTERMSLISTDIALOG_CLOSE_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__4_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPTERMSLISTDIALOG__SETCALLBACK_B__4_0_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__4_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPTERMSLISTDIALOG__SETCALLBACK_B__4_1_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__4_2(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPTERMSLISTDIALOG__SETCALLBACK_B__4_2_OFFSET))(str, arg, nullptr);
		}

	};
}

