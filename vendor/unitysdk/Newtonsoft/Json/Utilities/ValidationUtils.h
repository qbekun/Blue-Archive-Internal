#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_VALIDATIONUTILS_ARGUMENTNOTNULL_OFFSET UNITYSDK_OFFSET(0x94B82D0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ValidationUtils_TypeDefinitionIndex = 31904;

	class ValidationUtils : public Il2CppObject
	{
	public:
		::System::Void ArgumentNotNull(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_VALIDATIONUTILS_ARGUMENTNOTNULL_OFFSET))(arg, str, nullptr);
		}

	};
}

