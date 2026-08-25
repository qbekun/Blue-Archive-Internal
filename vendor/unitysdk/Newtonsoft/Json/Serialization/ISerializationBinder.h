#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_ISERIALIZATIONBINDER_BINDTOTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_ISERIALIZATIONBINDER_BINDTONAME_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ISerializationBinder_TypeDefinitionIndex = 31929;

	class ISerializationBinder : public Il2CppObject
	{
	public:
		::System::Type* BindToType(::System::String* str, ::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ISERIALIZATIONBINDER_BINDTOTYPE_OFFSET))(str, str, nullptr);
		}

		::System::Void BindToName(::System::Type* arg, ::System::String&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ISERIALIZATIONBINDER_BINDTONAME_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

