#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_IATTRIBUTEPROVIDER_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_IATTRIBUTEPROVIDER_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int IAttributeProvider_TypeDefinitionIndex = 31926;

	class IAttributeProvider : public Il2CppObject
	{
	public:
		Il2CppObject* GetAttributes(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_IATTRIBUTEPROVIDER_GETATTRIBUTES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_IATTRIBUTEPROVIDER_GETATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

	};
}

