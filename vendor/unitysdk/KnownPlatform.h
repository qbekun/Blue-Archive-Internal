#pragma once
#include "unitysdk.h"

#define KNOWNPLATFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1D4F0)
#define KNOWNPLATFORM_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D1D500)
#define KNOWNPLATFORM_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D1D510)
#define KNOWNPLATFORM_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D1D5A0)
#define KNOWNPLATFORM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D1D5B0)
#define KNOWNPLATFORM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9D1D5D0)
#define KNOWNPLATFORM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9D1D630)
#define KNOWNPLATFORM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9D1D690)
#define KNOWNPLATFORM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9D1D6F0)
#define KNOWNPLATFORM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D1D750)

	inline static constexpr unsigned int KnownPlatform_TypeDefinitionIndex = 25978;

	class KnownPlatform : public Il2CppObject
	{
	public:
		::System::String* platformId; // 0x10
		KnownPlatform* PSN; // 0x0
		KnownPlatform* STEAM; // 0x8
		KnownPlatform* NINTENDO; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + KNOWNPLATFORM_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Boolean Equals(KnownPlatform* arg)
		{
			return (return (::System::Boolean(*)(KnownPlatform*, ::PVOID))((::PBYTE)hIl2Cpp + KNOWNPLATFORM_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + KNOWNPLATFORM_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + KNOWNPLATFORM_EQUALS_OFFSET))(str, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWNPLATFORM_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(KnownPlatform* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(KnownPlatform*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + KNOWNPLATFORM_OP_EQUALITY_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean op_Inequality(KnownPlatform* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(KnownPlatform*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + KNOWNPLATFORM_OP_INEQUALITY_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean op_Equality(::System::String* str, KnownPlatform* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, KnownPlatform*, ::PVOID))((::PBYTE)hIl2Cpp + KNOWNPLATFORM_OP_EQUALITY_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::String* str, KnownPlatform* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, KnownPlatform*, ::PVOID))((::PBYTE)hIl2Cpp + KNOWNPLATFORM_OP_INEQUALITY_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWNPLATFORM_.CCTOR_OFFSET))(nullptr);
		}

	};

