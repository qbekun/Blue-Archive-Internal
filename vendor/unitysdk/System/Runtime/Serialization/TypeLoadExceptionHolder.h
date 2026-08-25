#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_TYPELOADEXCEPTIONHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9201270)
#define SYSTEM_RUNTIME_SERIALIZATION_TYPELOADEXCEPTIONHOLDER_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x92012A0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int TypeLoadExceptionHolder_TypeDefinitionIndex = 24600;

	class TypeLoadExceptionHolder : public Il2CppObject
	{
	public:
		::System::String* m_typeName; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_TYPELOADEXCEPTIONHOLDER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_TypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_TYPELOADEXCEPTIONHOLDER_GET_TYPENAME_OFFSET))(nullptr);
		}

	};
}

