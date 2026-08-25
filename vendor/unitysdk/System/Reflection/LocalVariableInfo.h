#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_LOCALVARIABLEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9249030)
#define SYSTEM_REFLECTION_LOCALVARIABLEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9249040)

namespace System::Reflection
{
	inline static constexpr unsigned int LocalVariableInfo_TypeDefinitionIndex = 24908;

	class LocalVariableInfo : public Il2CppObject
	{
	public:
		::System::Type* type; // 0x10
		::System::Boolean is_pinned; // 0x18
		::System::UInt16 position; // 0x1A

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_LOCALVARIABLEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_LOCALVARIABLEINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

