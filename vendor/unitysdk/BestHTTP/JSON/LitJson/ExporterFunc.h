#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::JSON::LitJson { class JsonWriter; }

#define BESTHTTP_JSON_LITJSON_EXPORTERFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x8A6820)
#define BESTHTTP_JSON_LITJSON_EXPORTERFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8A6830)
#define BESTHTTP_JSON_LITJSON_EXPORTERFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8A6870)
#define BESTHTTP_JSON_LITJSON_EXPORTERFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A6880)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int ExporterFunc_TypeDefinitionIndex = 23310;

	class ExporterFunc : public Il2CppObject
	{
	public:
		::System::Void Invoke(::System::Object* arg, ::BestHTTP::JSON::LitJson::JsonWriter* arg)
		{
			((::System::Void(*)(::System::Object*, ::BestHTTP::JSON::LitJson::JsonWriter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_EXPORTERFUNC_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::BestHTTP::JSON::LitJson::JsonWriter* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::BestHTTP::JSON::LitJson::JsonWriter*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_EXPORTERFUNC_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_EXPORTERFUNC_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_EXPORTERFUNC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

