#pragma once
#include "unitysdk.h"

#define REFERENCEEQUALITYCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x906D170)
#define REFERENCEEQUALITYCOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x906D180)
#define REFERENCEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x906D200)
#define REFERENCEEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x906D210)
#define REFERENCEEQUALITYCOMPARER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x906D220)

	inline static constexpr unsigned int ReferenceEqualityComparer_TypeDefinitionIndex = 35439;

	class ReferenceEqualityComparer : public Il2CppObject
	{
	public:
		ReferenceEqualityComparer* _Instance_k__BackingField; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFERENCEEQUALITYCOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFERENCEEQUALITYCOMPARER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + REFERENCEEQUALITYCOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + REFERENCEEQUALITYCOMPARER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		ReferenceEqualityComparer* get_Instance()
		{
			return (return (ReferenceEqualityComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + REFERENCEEQUALITYCOMPARER_GET_INSTANCE_OFFSET))(nullptr);
		}

	};

