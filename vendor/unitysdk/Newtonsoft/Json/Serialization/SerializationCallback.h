#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x94BD2D0)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x94C9420)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x94C9450)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x94C94D0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int SerializationCallback_TypeDefinitionIndex = 31935;

	class SerializationCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

