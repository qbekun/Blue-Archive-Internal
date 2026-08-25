#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_METHODCALL`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_METHODCALL`2_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_METHODCALL`2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_METHODCALL`2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int MethodCall`2_TypeDefinitionIndex = 31880;

	class MethodCall`2 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_METHODCALL`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Invoke(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_METHODCALL`2_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_METHODCALL`2_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (Il2CppObject*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_METHODCALL`2_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

