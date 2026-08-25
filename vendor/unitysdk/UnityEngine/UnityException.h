#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_UNITYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA232D30)
#define UNITYENGINE_UNITYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA231400)
#define UNITYENGINE_UNITYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA232DA0)

namespace UnityEngine
{
	inline static constexpr unsigned int UnityException_TypeDefinitionIndex = 31168;

	class UnityException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

