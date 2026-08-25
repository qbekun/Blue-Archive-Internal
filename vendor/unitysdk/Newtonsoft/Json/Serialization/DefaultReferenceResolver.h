#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_GETMAPPINGS_OFFSET UNITYSDK_OFFSET(0x94C6F10)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_RESOLVEREFERENCE_OFFSET UNITYSDK_OFFSET(0x94C7120)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_GETREFERENCE_OFFSET UNITYSDK_OFFSET(0x94C7190)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_ADDREFERENCE_OFFSET UNITYSDK_OFFSET(0x94C7270)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_ISREFERENCED_OFFSET UNITYSDK_OFFSET(0x94C72D0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94C7340)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultReferenceResolver_TypeDefinitionIndex = 31921;

	class DefaultReferenceResolver : public Il2CppObject
	{
	public:
		::System::Int32 _referenceCount; // 0x10

		Il2CppObject* GetMappings(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_GETMAPPINGS_OFFSET))(arg, nullptr);
		}

		::System::Object* ResolveReference(::System::Object* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_RESOLVEREFERENCE_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetReference(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_GETREFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReference(::System::Object* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_ADDREFERENCE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean IsReferenced(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_ISREFERENCED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_.CTOR_OFFSET))(nullptr);
		}

	};
}

