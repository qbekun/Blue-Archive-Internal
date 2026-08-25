#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::JSON::LitJson { class IJsonWrapper; }

#define BESTHTTP_JSON_LITJSON_WRAPPERFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A6AF0)
#define BESTHTTP_JSON_LITJSON_WRAPPERFACTORY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8A6BB0)
#define BESTHTTP_JSON_LITJSON_WRAPPERFACTORY_INVOKE_OFFSET UNITYSDK_OFFSET(0x8A6BC0)
#define BESTHTTP_JSON_LITJSON_WRAPPERFACTORY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8A6BD0)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int WrapperFactory_TypeDefinitionIndex = 23314;

	class WrapperFactory : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_WRAPPERFACTORY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::JSON::LitJson::IJsonWrapper* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::BestHTTP::JSON::LitJson::IJsonWrapper*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_WRAPPERFACTORY_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::JSON::LitJson::IJsonWrapper* Invoke()
		{
			return (return (::BestHTTP::JSON::LitJson::IJsonWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_WRAPPERFACTORY_INVOKE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_WRAPPERFACTORY_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

