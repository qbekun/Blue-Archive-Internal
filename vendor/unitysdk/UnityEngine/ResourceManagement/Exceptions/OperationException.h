#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_OPERATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E2E00)
#define UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_OPERATIONEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0E2E60)

namespace UnityEngine::ResourceManagement::Exceptions
{
	inline static constexpr unsigned int OperationException_TypeDefinitionIndex = 36361;

	class OperationException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_OPERATIONEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_EXCEPTIONS_OPERATIONEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

