#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x923E310)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x923E370)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x923E4A0)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_GET_LOADEREXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x923E5B0)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x923E5C0)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x923E750)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_CREATESTRING_OFFSET UNITYSDK_OFFSET(0x923E5D0)

namespace System::Reflection
{
	inline static constexpr unsigned int ReflectionTypeLoadException_TypeDefinitionIndex = 24878;

	class ReflectionTypeLoadException : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _Types_k__BackingField; // 0x90
		::Il2CppArray<::System::Object*>* _LoaderExceptions_k__BackingField; // 0x98

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_LoaderExceptions()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_GET_LOADEREXCEPTIONS_OFFSET))(nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* CreateString(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_CREATESTRING_OFFSET))(arg, nullptr);
		}

	};
}

