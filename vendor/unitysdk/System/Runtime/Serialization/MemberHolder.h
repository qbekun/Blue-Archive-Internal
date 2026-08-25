#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_MEMBERHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F7BD0)
#define SYSTEM_RUNTIME_SERIALIZATION_MEMBERHOLDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x91F7C20)
#define SYSTEM_RUNTIME_SERIALIZATION_MEMBERHOLDER_EQUALS_OFFSET UNITYSDK_OFFSET(0x91F7C50)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int MemberHolder_TypeDefinitionIndex = 24581;

	class MemberHolder : public Il2CppObject
	{
	public:
		::System::Type* _memberType; // 0x10
		::System::Runtime::Serialization::StreamingContext* _context; // 0x18

		::System::Void .ctor(::System::Type* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_MEMBERHOLDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_MEMBERHOLDER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_MEMBERHOLDER_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

