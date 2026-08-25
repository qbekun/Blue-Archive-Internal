#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_LABEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA398170)
#define UNITYENGINE_UIELEMENTS_LABEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A4E10)
#define UNITYENGINE_UIELEMENTS_LABEL_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3AABE0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Label_TypeDefinitionIndex = 30343;

	class Label : public Il2CppObject
	{
	public:
		::System::String* ussClassName; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LABEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LABEL_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LABEL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

