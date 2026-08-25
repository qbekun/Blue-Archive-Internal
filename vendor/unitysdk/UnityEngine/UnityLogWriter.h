#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_UNITYLOGWRITER_WRITESTRINGTOUNITYLOG_OFFSET UNITYSDK_OFFSET(0xA21E970)
#define UNITYENGINE_UNITYLOGWRITER_WRITESTRINGTOUNITYLOGIMPL_OFFSET UNITYSDK_OFFSET(0xA21E9D0)
#define UNITYENGINE_UNITYLOGWRITER_INIT_OFFSET UNITYSDK_OFFSET(0xA21EA10)
#define UNITYENGINE_UNITYLOGWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0xA21EB10)
#define UNITYENGINE_UNITYLOGWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0xA21EB20)
#define UNITYENGINE_UNITYLOGWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0xA21EBB0)
#define UNITYENGINE_UNITYLOGWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0xA21EC00)
#define UNITYENGINE_UNITYLOGWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21EAC0)

namespace UnityEngine
{
	inline static constexpr unsigned int UnityLogWriter_TypeDefinitionIndex = 31089;

	class UnityLogWriter : public Il2CppObject
	{
	public:
		::System::Void WriteStringToUnityLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_WRITESTRINGTOUNITYLOG_OFFSET))(str, nullptr);
		}

		::System::Void WriteStringToUnityLogImpl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_WRITESTRINGTOUNITYLOGIMPL_OFFSET))(str, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_INIT_OFFSET))(nullptr);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::Void Write(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_WRITE_OFFSET))(str, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_.CTOR_OFFSET))(nullptr);
		}

	};
}

