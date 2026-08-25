#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_STACKTRACEUTILITY_SETPROJECTFOLDER_OFFSET UNITYSDK_OFFSET(0xA231F50)
#define UNITYENGINE_STACKTRACEUTILITY_EXTRACTSTACKTRACE_OFFSET UNITYSDK_OFFSET(0xA232060)
#define UNITYENGINE_STACKTRACEUTILITY_EXTRACTSTRINGFROMEXCEPTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA232900)
#define UNITYENGINE_STACKTRACEUTILITY_EXTRACTFORMATTEDSTACKTRACE_OFFSET UNITYSDK_OFFSET(0xA2321E0)
#define UNITYENGINE_STACKTRACEUTILITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA232CD0)

namespace UnityEngine
{
	inline static constexpr unsigned int StackTraceUtility_TypeDefinitionIndex = 31167;

	class StackTraceUtility : public Il2CppObject
	{
	public:
		::System::String* projectFolder; // 0x0

		::System::Void SetProjectFolder(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STACKTRACEUTILITY_SETPROJECTFOLDER_OFFSET))(str, nullptr);
		}

		::System::String* ExtractStackTrace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STACKTRACEUTILITY_EXTRACTSTACKTRACE_OFFSET))(nullptr);
		}

		::System::Void ExtractStringFromExceptionInternal(::System::Object* arg, ::System::String&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STACKTRACEUTILITY_EXTRACTSTRINGFROMEXCEPTIONINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ExtractFormattedStackTrace(::System::Diagnostics::StackTrace* arg)
		{
			return (return (::System::String*(*)(::System::Diagnostics::StackTrace*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STACKTRACEUTILITY_EXTRACTFORMATTEDSTACKTRACE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STACKTRACEUTILITY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

