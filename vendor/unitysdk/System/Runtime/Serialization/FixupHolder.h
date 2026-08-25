#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92003A0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int FixupHolder_TypeDefinitionIndex = 24595;

	class FixupHolder : public Il2CppObject
	{
	public:
		::System::Int64 m_id; // 0x10
		::System::Object* m_fixupInfo; // 0x18
		::System::Int32 m_fixupType; // 0x20

		::System::Void .ctor(::System::Int64 arg, ::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

