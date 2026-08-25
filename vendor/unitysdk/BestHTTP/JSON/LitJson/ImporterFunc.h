#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_JSON_LITJSON_IMPORTERFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x8A6990)
#define BESTHTTP_JSON_LITJSON_IMPORTERFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8A69A0)
#define BESTHTTP_JSON_LITJSON_IMPORTERFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A69B0)
#define BESTHTTP_JSON_LITJSON_IMPORTERFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8A6AC0)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int ImporterFunc_TypeDefinitionIndex = 23312;

	class ImporterFunc : public Il2CppObject
	{
	public:
		::System::Object* Invoke(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IMPORTERFUNC_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Object*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IMPORTERFUNC_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IMPORTERFUNC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IMPORTERFUNC_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

