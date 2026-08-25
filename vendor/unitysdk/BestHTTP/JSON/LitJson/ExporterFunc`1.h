#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::JSON::LitJson { class JsonWriter; }

#define BESTHTTP_JSON_LITJSON_EXPORTERFUNC`1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_EXPORTERFUNC`1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_EXPORTERFUNC`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_EXPORTERFUNC`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int ExporterFunc`1_TypeDefinitionIndex = 23311;

	class ExporterFunc`1 : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, ::BestHTTP::JSON::LitJson::JsonWriter* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(Il2CppObject*, ::BestHTTP::JSON::LitJson::JsonWriter*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_EXPORTERFUNC`1_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_EXPORTERFUNC`1_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg, ::BestHTTP::JSON::LitJson::JsonWriter* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::BestHTTP::JSON::LitJson::JsonWriter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_EXPORTERFUNC`1_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_EXPORTERFUNC`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

