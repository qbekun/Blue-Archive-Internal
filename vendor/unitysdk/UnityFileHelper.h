#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonSerializerSettings; }

#define UNITYFILEHELPER_SAVE_OFFSET UNITYSDK_OFFSET(0x1FFB2E0)
#define UNITYFILEHELPER_SAVE_OFFSET UNITYSDK_OFFSET(0x1FFB2F0)
#define UNITYFILEHELPER_LOAD_OFFSET UNITYSDK_OFFSET(0x1FFB300)
#define UNITYFILEHELPER_LOAD_OFFSET UNITYSDK_OFFSET(0x1FFB330)
#define UNITYFILEHELPER_LOADBYTES_OFFSET UNITYSDK_OFFSET(0x1FFB340)
#define UNITYFILEHELPER_SAVEASJSON_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYFILEHELPER_SAVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYFILEHELPER_SAVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYFILEHELPER_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYFILEHELPER_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYFILEHELPER_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYFILEHELPER_LOADMEMORYPACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYFILEHELPER_MAKEDIRECTORYEMPTY_OFFSET UNITYSDK_OFFSET(0x1FFB350)
#define UNITYFILEHELPER_COUNTOFFILES_OFFSET UNITYSDK_OFFSET(0x1FFB920)
#define UNITYFILEHELPER_COMBINE_OFFSET UNITYSDK_OFFSET(0x1FFBB00)

	inline static constexpr unsigned int UnityFileHelper_TypeDefinitionIndex = 3103;

	class UnityFileHelper : public Il2CppObject
	{
	public:
		::System::Void Save(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYFILEHELPER_SAVE_OFFSET))(str, str2, nullptr);
		}

		::System::Void Save(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYFILEHELPER_SAVE_OFFSET))(str, arg, nullptr);
		}

		::System::String* Load(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYFILEHELPER_LOAD_OFFSET))(str, nullptr);
		}

		::System::String* Load(::System::String* str, ::System::Text::Encoding* arg)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYFILEHELPER_LOAD_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* LoadBytes(::System::String* str)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYFILEHELPER_LOADBYTES_OFFSET))(str, nullptr);
		}

		::System::Void SaveAsJson(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYFILEHELPER_SAVEASJSON_OFFSET))(str, arg, nullptr);
		}

		::System::Void Save(::System::String* str, Il2CppObject* arg, ::Newtonsoft::Json::JsonSerializerSettings* arg2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::Newtonsoft::Json::JsonSerializerSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYFILEHELPER_SAVE_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void Save(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYFILEHELPER_SAVE_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* LoadAsync(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYFILEHELPER_LOADASYNC_OFFSET))(str, nullptr);
		}

		Il2CppObject* Load(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYFILEHELPER_LOAD_OFFSET))(str, nullptr);
		}

		Il2CppObject* Load(::System::String* str, ::Newtonsoft::Json::JsonSerializerSettings* arg)
		{
			return ((Il2CppObject*(*)(::System::String*, ::Newtonsoft::Json::JsonSerializerSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYFILEHELPER_LOAD_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* LoadMemoryPack(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYFILEHELPER_LOADMEMORYPACK_OFFSET))(str, nullptr);
		}

		::System::Int32 MakeDirectoryEmpty(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYFILEHELPER_MAKEDIRECTORYEMPTY_OFFSET))(str, nullptr);
		}

		::System::Int32 CountOfFiles(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYFILEHELPER_COUNTOFFILES_OFFSET))(str, nullptr);
		}

		::System::String* Combine(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYFILEHELPER_COMBINE_OFFSET))(arg, nullptr);
		}

	};

