#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Services { class Hash64; }

#define MX_CORE_SERVICES_HASH64_.CTOR_OFFSET UNITYSDK_OFFSET(0x10179C0)
#define MX_CORE_SERVICES_HASH64_.CTOR_OFFSET UNITYSDK_OFFSET(0x10179D0)
#define MX_CORE_SERVICES_HASH64_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1017A30)
#define MX_CORE_SERVICES_HASH64_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1017A40)
#define MX_CORE_SERVICES_HASH64_EQUALS_OFFSET UNITYSDK_OFFSET(0x1017A50)
#define MX_CORE_SERVICES_HASH64_EQUALS_OFFSET UNITYSDK_OFFSET(0x1017A60)
#define MX_CORE_SERVICES_HASH64_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1017AE0)
#define MX_CORE_SERVICES_HASH64_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1017AF0)
#define MX_CORE_SERVICES_HASH64_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1017B00)
#define MX_CORE_SERVICES_HASH64_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1017B10)
#define MX_CORE_SERVICES_HASH64_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1017B20)
#define MX_CORE_SERVICES_HASH64_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1017B40)
#define MX_CORE_SERVICES_HASH64_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1017B60)
#define MX_CORE_SERVICES_HASH64_TOORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x1017B70)
#define MX_CORE_SERVICES_HASH64_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1017B80)

namespace MX::Core::Services
{
	inline static constexpr unsigned int Hash64_TypeDefinitionIndex = 12795;

	class Hash64 : public Il2CppObject
	{
	public:
		::MX::Core::Services::Hash64* Empty; // 0x0
		::System::UInt64 Hash; // 0x10

		::System::Void .ctor(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::Core::Services::Hash64* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::Services::Hash64* arg, ::MX::Core::Services::Hash64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::Services::Hash64* arg, ::MX::Core::Services::Hash64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::Services::Hash64* arg, ::System::UInt32 arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::Services::Hash64* arg, ::System::UInt32 arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::Services::Hash64* arg, ::System::String* str)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64_OP_EQUALITY_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::Services::Hash64* arg, ::System::String* str)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64_OP_INEQUALITY_OFFSET))(arg, str, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToOriginalString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64_TOORIGINALSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64_.CCTOR_OFFSET))(nullptr);
		}

	};
}

