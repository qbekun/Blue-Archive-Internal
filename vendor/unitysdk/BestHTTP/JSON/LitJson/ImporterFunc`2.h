#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_JSON_LITJSON_IMPORTERFUNC`2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IMPORTERFUNC`2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IMPORTERFUNC`2_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IMPORTERFUNC`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int ImporterFunc`2_TypeDefinitionIndex = 23313;

	class ImporterFunc`2 : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(Il2CppObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IMPORTERFUNC`2_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (Il2CppObject*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IMPORTERFUNC`2_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Invoke(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IMPORTERFUNC`2_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IMPORTERFUNC`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

