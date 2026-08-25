#pragma once
#include "unitysdk.h"

#define ATYPENAME_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ATYPENAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x93C7BE0)
#define ATYPENAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93C7CB0)
#define ATYPENAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x93C7CF0)
#define ATYPENAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x93C7DF0)

	inline static constexpr unsigned int ATypeName_TypeDefinitionIndex = 24001;

	class ATypeName : public Il2CppObject
	{
	public:
		::System::String* get_DisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATYPENAME_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::TypeName* arg)
		{
			return (return (::System::Boolean(*)(::System::TypeName*, ::PVOID))((::PBYTE)hIl2Cpp + ATYPENAME_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ATYPENAME_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ATYPENAME_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATYPENAME_.CTOR_OFFSET))(nullptr);
		}

	};

