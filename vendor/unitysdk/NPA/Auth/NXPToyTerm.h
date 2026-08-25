#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYTERM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CD9E10)
#define NPA_AUTH_NXPTOYTERM_CLONE_OFFSET UNITYSDK_OFFSET(0x9CDA2B0)
#define NPA_AUTH_NXPTOYTERM_HASTYPE_OFFSET UNITYSDK_OFFSET(0x9CDAA20)
#define NPA_AUTH_NXPTOYTERM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDAA10)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyTerm_TypeDefinitionIndex = 27500;

	class NXPToyTerm : public Il2CppObject
	{
	public:
		::System::String* TYPE_TOAST; // 0x0
		::System::String* TYPE_PUSH; // 0x0
		::System::String* TYPE_OPTIONAL; // 0x0
		::System::String* TYPE_NIGHT_PUSH; // 0x0
		::System::String* TYPE_PARENTAL_IV; // 0x0
		::System::String* EXPOSURE_TYPE_NORMAL; // 0x0
		::System::String* EXPOSURE_TYPE_GDPR; // 0x0
		::System::Int32 termID; // 0x10
		::System::String* title; // 0x18
		::System::String* contents; // 0x20
		::System::Int32 isAgree; // 0x28
		Il2CppObject* type; // 0x30
		::System::Int32 isOptional; // 0x38
		::System::Int32 optional; // 0x3C
		::System::Int32 pTermsID; // 0x40
		Il2CppObject* cTermsID; // 0x48
		::System::Int32 isUpdate; // 0x50
		::System::String* exposureType; // 0x58
		Il2CppObject* titleReplacements; // 0x60

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYTERM_TOSTRING_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYTERM_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean HasType(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYTERM_HASTYPE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYTERM_.CTOR_OFFSET))(nullptr);
		}

	};
}

