#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C094D0)
#define NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C09860)
#define NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C09970)
#define NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C09880)
#define NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_GETTITLE_OFFSET UNITYSDK_OFFSET(0x9C099A0)
#define NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_GETPUSHLABELNAME_OFFSET UNITYSDK_OFFSET(0x9C099B0)
#define NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_GETSMSLABELNAME_OFFSET UNITYSDK_OFFSET(0x9C099C0)
#define NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_GETNIGHTPUSHLABELNAME_OFFSET UNITYSDK_OFFSET(0x9C099D0)
#define NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_GETEMAILLABELNAME_OFFSET UNITYSDK_OFFSET(0x9C099E0)
#define NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9C099F0)
#define NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_SETPUSHLABELNAME_OFFSET UNITYSDK_OFFSET(0x9C09A00)
#define NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_SETSMSLABELNAME_OFFSET UNITYSDK_OFFSET(0x9C09A10)
#define NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_SETNIGHTPUSHLABELNAME_OFFSET UNITYSDK_OFFSET(0x9C09A20)
#define NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_SETEMAILLABELNAME_OFFSET UNITYSDK_OFFSET(0x9C09A30)
#define NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_SETUSEEXACTALARM_OFFSET UNITYSDK_OFFSET(0x9C09A40)

namespace NPA::Editor::Push
{
	inline static constexpr unsigned int NXPPushMenuOption_TypeDefinitionIndex = 26563;

	class NXPPushMenuOption : public Il2CppObject
	{
	public:
		::System::String* title; // 0x10
		::System::String* pushLabelName; // 0x18
		::System::String* smsLabelName; // 0x20
		::System::String* nightPushLabelName; // 0x28
		::System::String* emailLabelName; // 0x30
		::System::Boolean useExactAlarm; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_.CTOR_OFFSET))(str, str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_.CTOR_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_.CTOR_OFFSET))(str, str, str, str, str, nullptr);
		}

		::System::String* GetTitle()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_GETTITLE_OFFSET))(nullptr);
		}

		::System::String* GetPushLabelName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_GETPUSHLABELNAME_OFFSET))(nullptr);
		}

		::System::String* GetSmsLabelName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_GETSMSLABELNAME_OFFSET))(nullptr);
		}

		::System::String* GetNightPushLabelName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_GETNIGHTPUSHLABELNAME_OFFSET))(nullptr);
		}

		::System::String* GetEmailLabelName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_GETEMAILLABELNAME_OFFSET))(nullptr);
		}

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetPushLabelName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_SETPUSHLABELNAME_OFFSET))(str, nullptr);
		}

		::System::Void SetSmsLabelName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_SETSMSLABELNAME_OFFSET))(str, nullptr);
		}

		::System::Void SetNightPushLabelName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_SETNIGHTPUSHLABELNAME_OFFSET))(str, nullptr);
		}

		::System::Void SetEmailLabelName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_SETEMAILLABELNAME_OFFSET))(str, nullptr);
		}

		::System::Void SetUseExactAlarm(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSHMENUOPTION_SETUSEEXACTALARM_OFFSET))(arg, nullptr);
		}

	};
}

