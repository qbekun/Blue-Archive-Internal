#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_PLAYERPREFSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22C440)

namespace UnityEngine
{
	inline static constexpr unsigned int PlayerPrefsException_TypeDefinitionIndex = 31108;

	class PlayerPrefsException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFSEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

