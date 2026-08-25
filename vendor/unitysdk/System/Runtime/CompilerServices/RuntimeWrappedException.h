#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9228000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9228090)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9228190)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_GET_WRAPPEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9228250)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9228260)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RuntimeWrappedException_TypeDefinitionIndex = 24762;

	class RuntimeWrappedException : public Il2CppObject
	{
	public:
		::System::Object* _wrappedException; // 0x90

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_WrappedException()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_GET_WRAPPEDEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

