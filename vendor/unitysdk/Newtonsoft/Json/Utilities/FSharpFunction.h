#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_FSHARPFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x94AA440)
#define NEWTONSOFT_JSON_UTILITIES_FSHARPFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x94AA490)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int FSharpFunction_TypeDefinitionIndex = 31855;

	class FSharpFunction : public Il2CppObject
	{
	public:
		::System::Object* _instance; // 0x10
		Il2CppObject* _invoker; // 0x18

		::System::Void .ctor(::System::Object* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Invoke(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_FSHARPFUNCTION_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

