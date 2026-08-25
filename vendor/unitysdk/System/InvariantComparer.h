#pragma once
#include "../unitysdk.h"

#define SYSTEM_INVARIANTCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD0BF0)
#define SYSTEM_INVARIANTCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x9AD0C80)
#define SYSTEM_INVARIANTCOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9AD0D60)

namespace System
{
	inline static constexpr unsigned int InvariantComparer_TypeDefinitionIndex = 29167;

	class InvariantComparer : public Il2CppObject
	{
	public:
		::System::Globalization::CompareInfo* m_compareInfo; // 0x10
		::System::InvariantComparer* Default; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVARIANTCOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVARIANTCOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVARIANTCOMPARER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

