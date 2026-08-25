#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_INSPECTORNAMEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22C980)

namespace UnityEngine
{
	inline static constexpr unsigned int InspectorNameAttribute_TypeDefinitionIndex = 31111;

	class InspectorNameAttribute : public Il2CppObject
	{
	public:
		::System::String* displayName; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INSPECTORNAMEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

