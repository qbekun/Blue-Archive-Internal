#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_IVALUEPROVIDER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_IVALUEPROVIDER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int IValueProvider_TypeDefinitionIndex = 31931;

	class IValueProvider : public Il2CppObject
	{
	public:
		::System::Void SetValue(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_IVALUEPROVIDER_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_IVALUEPROVIDER_GETVALUE_OFFSET))(arg, nullptr);
		}

	};
}

