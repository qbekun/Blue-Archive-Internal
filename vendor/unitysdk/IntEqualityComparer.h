#pragma once
#include "unitysdk.h"

#define INTEQUALITYCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9608870)
#define INTEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9608880)
#define INTEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9608890)
#define INTEQUALITYCOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96088A0)

	inline static constexpr unsigned int IntEqualityComparer_TypeDefinitionIndex = 35313;

	class IntEqualityComparer : public Il2CppObject
	{
	public:
		Il2CppObject* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTEQUALITYCOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTEQUALITYCOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTEQUALITYCOMPARER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTEQUALITYCOMPARER_.CCTOR_OFFSET))(nullptr);
		}

	};

