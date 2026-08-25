#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Plate::View { class NXPOpenApiPolicyView; }

#define NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DC0140)
#define NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x9DC0340)
#define NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x9DC03C0)
#define NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG_LOADOPENAPIPOLICYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9DC0400)
#define NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG_UPDATEOPENAPIPOLICYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9DC0480)
#define NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG_LOADOPENAPIPOLICY_OFFSET UNITYSDK_OFFSET(0x9DC0380)
#define NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG_UPDATEOPENAPIPOLICY_OFFSET UNITYSDK_OFFSET(0x9DC0540)
#define NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DC0580)
#define NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG__SETCALLBACK_B__12_0_OFFSET UNITYSDK_OFFSET(0x9DC06D0)
#define NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG__SETCALLBACK_B__12_1_OFFSET UNITYSDK_OFFSET(0x9DC0710)
#define NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG__SETCALLBACK_B__12_2_OFFSET UNITYSDK_OFFSET(0x9DC0750)

namespace NPA::Editor::Plate
{
	inline static constexpr unsigned int NXPOpenApiPolicyDialog_TypeDefinitionIndex = 26436;

	class NXPOpenApiPolicyDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Plate::View::NXPOpenApiPolicyView* policyView; // 0x30
		Il2CppObject* onLoadPolicy; // 0x38
		Il2CppObject* onUpdatePolicy; // 0x40
		::System::Action* backPressCallback; // 0x48
		Il2CppObject* closeCallback; // 0x50

		::System::Void .ctor(::System::String* str, ::System::String* str, Il2CppObject* arg, Il2CppObject* arg, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, Il2CppObject*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG_.CTOR_OFFSET))(str, str, arg, arg, arg, arg, nullptr);
		}

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG_SHOW_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG_CLOSE_OFFSET))(nullptr);
		}

		::System::Void LoadOpenApiPolicyComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG_LOADOPENAPIPOLICYCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateOpenApiPolicyComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG_UPDATEOPENAPIPOLICYCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void LoadOpenApiPolicy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG_LOADOPENAPIPOLICY_OFFSET))(nullptr);
		}

		::System::Void UpdateOpenApiPolicy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG_UPDATEOPENAPIPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__12_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG__SETCALLBACK_B__12_0_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__12_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG__SETCALLBACK_B__12_1_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__12_2(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPOPENAPIPOLICYDIALOG__SETCALLBACK_B__12_2_OFFSET))(str, arg, nullptr);
		}

	};
}

