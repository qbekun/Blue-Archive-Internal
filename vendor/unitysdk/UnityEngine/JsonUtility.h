#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_JSONUTILITY_TOJSONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA293540)
#define UNITYENGINE_JSONUTILITY_FROMJSONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA293580)
#define UNITYENGINE_JSONUTILITY_TOJSON_OFFSET UNITYSDK_OFFSET(0xA2935D0)
#define UNITYENGINE_JSONUTILITY_TOJSON_OFFSET UNITYSDK_OFFSET(0xA2935E0)
#define UNITYENGINE_JSONUTILITY_FROMJSON_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_JSONUTILITY_FROMJSON_OFFSET UNITYSDK_OFFSET(0xA293730)

namespace UnityEngine
{
	inline static constexpr unsigned int JsonUtility_TypeDefinitionIndex = 38028;

	class JsonUtility : public Il2CppObject
	{
	public:
		::System::String* ToJsonInternal(::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_TOJSONINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* FromJsonInternal(::System::String* str, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_FROMJSONINTERNAL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* ToJson(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_TOJSON_OFFSET))(arg, nullptr);
		}

		::System::String* ToJson(::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_TOJSON_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* FromJson(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_FROMJSON_OFFSET))(str, nullptr);
		}

		::System::Object* FromJson(::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_FROMJSON_OFFSET))(str, arg, nullptr);
		}

	};
}

