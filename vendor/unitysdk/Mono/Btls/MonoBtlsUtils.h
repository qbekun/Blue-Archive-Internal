#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509Name; }

#define MONO_BTLS_MONOBTLSUTILS_COMPARE_OFFSET UNITYSDK_OFFSET(0x9ABD410)
#define MONO_BTLS_MONOBTLSUTILS_APPENDENTRY_OFFSET UNITYSDK_OFFSET(0x9ABD470)
#define MONO_BTLS_MONOBTLSUTILS_FORMATNAME_OFFSET UNITYSDK_OFFSET(0x9ABC150)
#define MONO_BTLS_MONOBTLSUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9ABE160)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsUtils_TypeDefinitionIndex = 29123;

	class MonoBtlsUtils : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* emailOid; // 0x0

		::System::Boolean Compare(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSUTILS_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AppendEntry(::System::Text::StringBuilder* arg, ::Mono::Btls::MonoBtlsX509Name* arg, ::System::Int32 arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Text::StringBuilder*, ::Mono::Btls::MonoBtlsX509Name*, ::System::Int32, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSUTILS_APPENDENTRY_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::System::String* FormatName(::Mono::Btls::MonoBtlsX509Name* arg, ::System::Boolean arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::Mono::Btls::MonoBtlsX509Name*, ::System::Boolean, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSUTILS_FORMATNAME_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

