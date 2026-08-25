#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94BD660)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x94C96C0)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x94C96E0)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x94C9720)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ExtensionDataSetter_TypeDefinitionIndex = 31937;

	class ExtensionDataSetter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_INVOKE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::String* str, ::System::Object* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::String*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_BEGININVOKE_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

