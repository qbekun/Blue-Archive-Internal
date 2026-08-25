#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class ErrorContext; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json::Serialization { class ITraceWriter; }
namespace Newtonsoft::Json::Serialization { class JsonSerializerProxy; }
namespace Newtonsoft::Json { class NullValueHandling; }
namespace Newtonsoft::Json::Serialization { class JsonObjectContract; }
namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace Newtonsoft::Json { class IJsonLineInfo; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x94CCBE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_GET_DEFAULTREFERENCEMAPPINGS_OFFSET UNITYSDK_OFFSET(0x94C7010)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_RESOLVEDNULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x94CCCB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_GETERRORCONTEXT_OFFSET UNITYSDK_OFFSET(0x94CCD30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_CLEARERRORCONTEXT_OFFSET UNITYSDK_OFFSET(0x94CCE60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_ISERRORHANDLED_OFFSET UNITYSDK_OFFSET(0x94CCEE0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerInternalBase_TypeDefinitionIndex = 31952;

	class JsonSerializerInternalBase : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Serialization::ErrorContext* _currentErrorContext; // 0x10
		Il2CppObject* _mappings; // 0x18
		::Newtonsoft::Json::JsonSerializer* Serializer; // 0x20
		::Newtonsoft::Json::Serialization::ITraceWriter* TraceWriter; // 0x28
		::Newtonsoft::Json::Serialization::JsonSerializerProxy* InternalSerializer; // 0x30

		::System::Void .ctor(::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DefaultReferenceMappings()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_GET_DEFAULTREFERENCEMAPPINGS_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::NullValueHandling* ResolvedNullValueHandling(::Newtonsoft::Json::Serialization::JsonObjectContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			return (return (::Newtonsoft::Json::NullValueHandling*(*)(::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_RESOLVEDNULLVALUEHANDLING_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::ErrorContext* GetErrorContext(::System::Object* arg, ::System::Object* arg, ::System::String* str, ::System::Exception* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::ErrorContext*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_GETERRORCONTEXT_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void ClearErrorContext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_CLEARERRORCONTEXT_OFFSET))(nullptr);
		}

		::System::Boolean IsErrorHandled(::System::Object* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::System::Object* arg, ::Newtonsoft::Json::IJsonLineInfo* arg, ::System::String* str, ::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*, ::Newtonsoft::Json::IJsonLineInfo*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_ISERRORHANDLED_OFFSET))(arg, arg, arg, arg, str, arg, nullptr);
		}

	};
}

