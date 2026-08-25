#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_HEADERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22CA30)

namespace UnityEngine
{
	inline static constexpr unsigned int HeaderAttribute_TypeDefinitionIndex = 31114;

	class HeaderAttribute : public Il2CppObject
	{
	public:
		::System::String* header; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HEADERATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

