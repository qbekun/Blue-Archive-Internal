#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_IREFERENCERESOLVER_RESOLVEREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_IREFERENCERESOLVER_GETREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_IREFERENCERESOLVER_ISREFERENCED_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_IREFERENCERESOLVER_ADDREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int IReferenceResolver_TypeDefinitionIndex = 31928;

	class IReferenceResolver : public Il2CppObject
	{
	public:
		::System::Object* ResolveReference(::System::Object* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_IREFERENCERESOLVER_RESOLVEREFERENCE_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetReference(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_IREFERENCERESOLVER_GETREFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsReferenced(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_IREFERENCERESOLVER_ISREFERENCED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReference(::System::Object* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_IREFERENCERESOLVER_ADDREFERENCE_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

