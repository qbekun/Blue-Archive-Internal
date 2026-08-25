#pragma once
#include "../../unitysdk.h"

#define MXFIELD_FIELDDEBUG_FIELDCHEATHANDLER_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEC36A0)
#define MXFIELD_FIELDDEBUG_FIELDCHEATHANDLER_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEC3730)
#define MXFIELD_FIELDDEBUG_FIELDCHEATHANDLER_HANDLECHEAT_OFFSET UNITYSDK_OFFSET(0xEC37E0)
#define MXFIELD_FIELDDEBUG_FIELDCHEATHANDLER_HANDLECHEATCODE_OFFSET UNITYSDK_OFFSET(0xEC38A0)
#define MXFIELD_FIELDDEBUG_FIELDCHEATHANDLER_HANDLECHEATCODE_OFFSET UNITYSDK_OFFSET(0xEC3D40)
#define MXFIELD_FIELDDEBUG_FIELDCHEATHANDLER_HANDLECHEATCODE_OFFSET UNITYSDK_OFFSET(0xEC3FA0)
#define MXFIELD_FIELDDEBUG_FIELDCHEATHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC4470)

namespace MXField::FieldDebug
{
	inline static constexpr unsigned int FieldCheatHandler_TypeDefinitionIndex = 10863;

	class FieldCheatHandler : public Il2CppObject
	{
	public:
		::System::Void Execute(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDDEBUG_FIELDCHEATHANDLER_EXECUTE_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDDEBUG_FIELDCHEATHANDLER_COEXECUTE_OFFSET))(str, nullptr);
		}

		::System::Void HandleCheat(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDDEBUG_FIELDCHEATHANDLER_HANDLECHEAT_OFFSET))(str, nullptr);
		}

		::System::Void HandleCheatCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDDEBUG_FIELDCHEATHANDLER_HANDLECHEATCODE_OFFSET))(str, nullptr);
		}

		::System::Void HandleCheatCode(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDDEBUG_FIELDCHEATHANDLER_HANDLECHEATCODE_OFFSET))(str, str2, nullptr);
		}

		::System::Void HandleCheatCode(::System::String* str, ::System::String* str2, ::System::String* str3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDDEBUG_FIELDCHEATHANDLER_HANDLECHEATCODE_OFFSET))(str, str2, str3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDDEBUG_FIELDCHEATHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

