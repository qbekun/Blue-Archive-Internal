#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class ErrorContext; }

#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x94C94E0)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x94C95F0)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x94C9620)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x94C96B0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int SerializationErrorCallback_TypeDefinitionIndex = 31936;

	class SerializationErrorCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::Newtonsoft::Json::Serialization::ErrorContext* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext*, ::Newtonsoft::Json::Serialization::ErrorContext*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::Newtonsoft::Json::Serialization::ErrorContext* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext*, ::Newtonsoft::Json::Serialization::ErrorContext*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONERRORCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

