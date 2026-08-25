#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_UNITYSTRING_FORMAT_OFFSET UNITYSDK_OFFSET(0xA2A5750)

namespace UnityEngine
{
	inline static constexpr unsigned int UnityString_TypeDefinitionIndex = 37876;

	class UnityString : public Il2CppObject
	{
	public:
		::System::String* Format(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSTRING_FORMAT_OFFSET))(str, arg, nullptr);
		}

	};
}

