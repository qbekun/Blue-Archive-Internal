#pragma once
#include "unitysdk.h"

#define EQUALITYWEAKREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7C9E0)
#define EQUALITYWEAKREFERENCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B7CC50)
#define EQUALITYWEAKREFERENCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B7CCC0)

	inline static constexpr unsigned int EqualityWeakReference_TypeDefinitionIndex = 29534;

	class EqualityWeakReference : public Il2CppObject
	{
	public:
		::System::Int32 _hashCode; // 0x20

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALITYWEAKREFERENCE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALITYWEAKREFERENCE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALITYWEAKREFERENCE_GETHASHCODE_OFFSET))(nullptr);
		}

	};

