#pragma once
#include "unitysdk.h"

#define NATIVEDIALOG_SHOWOK_OFFSET UNITYSDK_OFFSET(0x2124A80)
#define NATIVEDIALOG_SHOWWARNING_OFFSET UNITYSDK_OFFSET(0x2124C00)
#define NATIVEDIALOG_MESSAGEBOX_OFFSET UNITYSDK_OFFSET(0x2124B50)
#define NATIVEDIALOG_SHOWOKCANCEL_OFFSET UNITYSDK_OFFSET(0x2124CD0)
#define NATIVEDIALOG_SHOWYESNO_OFFSET UNITYSDK_OFFSET(0x2124DA0)

	inline static constexpr unsigned int NativeDialog_TypeDefinitionIndex = 3901;

	class NativeDialog : public Il2CppObject
	{
	public:
		::System::UInt32 MB_OK; // 0x0
		::System::UInt32 MB_OKCANCEL; // 0x0
		::System::UInt32 MB_YESNO; // 0x0
		::System::UInt32 MB_ICONWARNING; // 0x0
		::System::UInt32 MB_ICONERROR; // 0x0
		::System::UInt32 MB_ICONINFORMATION; // 0x0
		::System::Int32 IDOK; // 0x0
		::System::Int32 IDCANCEL; // 0x0
		::System::Int32 IDYES; // 0x0
		::System::Int32 IDNO; // 0x0

		::System::Boolean ShowOk(::System::String* str, ::System::String* str2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NATIVEDIALOG_SHOWOK_OFFSET))(str, str2, nullptr);
		}

		::System::Void ShowWarning(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NATIVEDIALOG_SHOWWARNING_OFFSET))(str, str2, nullptr);
		}

		::System::Int32 MessageBox(::System::Int32 arg, ::System::String* str, ::System::String* str2, ::System::UInt32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NATIVEDIALOG_MESSAGEBOX_OFFSET))(arg, str, str2, arg2, nullptr);
		}

		::System::Boolean ShowOkCancel(::System::String* str, ::System::String* str2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NATIVEDIALOG_SHOWOKCANCEL_OFFSET))(str, str2, nullptr);
		}

		::System::Boolean ShowYesNo(::System::String* str, ::System::String* str2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NATIVEDIALOG_SHOWYESNO_OFFSET))(str, str2, nullptr);
		}

	};

