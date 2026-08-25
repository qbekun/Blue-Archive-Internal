#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_OBJECTCONSTRUCTOR`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_OBJECTCONSTRUCTOR`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_OBJECTCONSTRUCTOR`1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_OBJECTCONSTRUCTOR`1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ObjectConstructor`1_TypeDefinitionIndex = 31967;

	class ObjectConstructor`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_OBJECTCONSTRUCTOR`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Invoke(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_OBJECTCONSTRUCTOR`1_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Object*>* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_OBJECTCONSTRUCTOR`1_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Object*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_OBJECTCONSTRUCTOR`1_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

