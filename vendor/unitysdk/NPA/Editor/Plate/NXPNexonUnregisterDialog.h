#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Plate::View { class NXPNexonUnregisterView; }
namespace NPA { class NPLoginType; }
namespace NPA { class NXPToyResult; }

#define NPA_EDITOR_PLATE_NXPNEXONUNREGISTERDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DBF8E0)
#define NPA_EDITOR_PLATE_NXPNEXONUNREGISTERDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DBFB40)
#define NPA_EDITOR_PLATE_NXPNEXONUNREGISTERDIALOG_DELETENEXONACCOUNT_OFFSET UNITYSDK_OFFSET(0x9DBFC90)
#define NPA_EDITOR_PLATE_NXPNEXONUNREGISTERDIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x9DBFD40)
#define NPA_EDITOR_PLATE_NXPNEXONUNREGISTERDIALOG__SETCALLBACK_B__4_0_OFFSET UNITYSDK_OFFSET(0x9DBFD80)
#define NPA_EDITOR_PLATE_NXPNEXONUNREGISTERDIALOG__SETCALLBACK_B__4_1_OFFSET UNITYSDK_OFFSET(0x9DBFDC0)
#define NPA_EDITOR_PLATE_NXPNEXONUNREGISTERDIALOG__SETCALLBACK_B__4_2_OFFSET UNITYSDK_OFFSET(0x9DBFE00)
#define NPA_EDITOR_PLATE_NXPNEXONUNREGISTERDIALOG__DELETENEXONACCOUNT_B__5_0_OFFSET UNITYSDK_OFFSET(0x9DBFE60)

namespace NPA::Editor::Plate
{
	inline static constexpr unsigned int NXPNexonUnregisterDialog_TypeDefinitionIndex = 26435;

	class NXPNexonUnregisterDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Plate::View::NXPNexonUnregisterView* nexonUnregisterView; // 0x30
		::System::Action* backPressCallback; // 0x38
		Il2CppObject* closeCallback; // 0x40

		::System::Void .ctor(::System::String* str, ::NPA::NPLoginType* arg, ::System::String* str, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::NPLoginType*, ::System::String*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPNEXONUNREGISTERDIALOG_.CTOR_OFFSET))(str, arg, str, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPNEXONUNREGISTERDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void DeleteNexonAccount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPNEXONUNREGISTERDIALOG_DELETENEXONACCOUNT_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPNEXONUNREGISTERDIALOG_CLOSE_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__4_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPNEXONUNREGISTERDIALOG__SETCALLBACK_B__4_0_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__4_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPNEXONUNREGISTERDIALOG__SETCALLBACK_B__4_1_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__4_2(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPNEXONUNREGISTERDIALOG__SETCALLBACK_B__4_2_OFFSET))(str, arg, nullptr);
		}

		::System::Void _DeleteNexonAccount_b__5_0(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPNEXONUNREGISTERDIALOG__DELETENEXONACCOUNT_B__5_0_OFFSET))(arg, nullptr);
		}

	};
}

