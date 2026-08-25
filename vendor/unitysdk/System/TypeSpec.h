#pragma once
#include "../unitysdk.h"

#define SYSTEM_TYPESPEC_GET_HASMODIFIERS_OFFSET UNITYSDK_OFFSET(0x93C82F0)
#define SYSTEM_TYPESPEC_GETDISPLAYFULLNAME_OFFSET UNITYSDK_OFFSET(0x93C8300)
#define SYSTEM_TYPESPEC_GETMODIFIERSTRING_OFFSET UNITYSDK_OFFSET(0x93C89F0)
#define SYSTEM_TYPESPEC_GET_DISPLAYFULLNAME_OFFSET UNITYSDK_OFFSET(0x93C89B0)
#define SYSTEM_TYPESPEC_PARSE_OFFSET UNITYSDK_OFFSET(0x93C8C00)
#define SYSTEM_TYPESPEC_UNESCAPEINTERNALNAME_OFFSET UNITYSDK_OFFSET(0x93C7F20)
#define SYSTEM_TYPESPEC_RESOLVE_OFFSET UNITYSDK_OFFSET(0x93C9B00)
#define SYSTEM_TYPESPEC_ADDNAME_OFFSET UNITYSDK_OFFSET(0x93CA680)
#define SYSTEM_TYPESPEC_ADDMODIFIER_OFFSET UNITYSDK_OFFSET(0x93CA900)
#define SYSTEM_TYPESPEC_SKIPSPACE_OFFSET UNITYSDK_OFFSET(0x93CAA00)
#define SYSTEM_TYPESPEC_BOUNDCHECK_OFFSET UNITYSDK_OFFSET(0x93CAA90)
#define SYSTEM_TYPESPEC_PARSEDTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x93CA880)
#define SYSTEM_TYPESPEC_PARSE_OFFSET UNITYSDK_OFFSET(0x93C8CF0)
#define SYSTEM_TYPESPEC_.CTOR_OFFSET UNITYSDK_OFFSET(0x93CAB10)

namespace System
{
	inline static constexpr unsigned int TypeSpec_TypeDefinitionIndex = 24009;

	class TypeSpec : public Il2CppObject
	{
	public:
		::System::TypeIdentifier* name; // 0x10
		::System::String* assembly_name; // 0x18
		Il2CppObject* nested; // 0x20
		Il2CppObject* generic_params; // 0x28
		Il2CppObject* modifier_spec; // 0x30
		::System::Boolean is_byref; // 0x38
		::System::String* display_fullname; // 0x40

		::System::Boolean get_HasModifiers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_GET_HASMODIFIERS_OFFSET))(nullptr);
		}

		::System::String* GetDisplayFullName(DisplayNameFormat* arg)
		{
			return (return (::System::String*(*)(DisplayNameFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_GETDISPLAYFULLNAME_OFFSET))(arg, nullptr);
		}

		::System::Text::StringBuilder* GetModifierString(::System::Text::StringBuilder* arg)
		{
			return (return (::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_GETMODIFIERSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* get_DisplayFullName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_GET_DISPLAYFULLNAME_OFFSET))(nullptr);
		}

		::System::TypeSpec* Parse(::System::String* str)
		{
			return (return (::System::TypeSpec*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_PARSE_OFFSET))(str, nullptr);
		}

		::System::String* UnescapeInternalName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_UNESCAPEINTERNALNAME_OFFSET))(str, nullptr);
		}

		::System::Type* Resolve(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::Type*(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_RESOLVE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AddName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_ADDNAME_OFFSET))(str, nullptr);
		}

		::System::Void AddModifier(::System::ModifierSpec* arg)
		{
			((::System::Void(*)(::System::ModifierSpec*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_ADDMODIFIER_OFFSET))(arg, nullptr);
		}

		::System::Void SkipSpace(::System::String* str, int32_t&* arg)
		{
			((::System::Void(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_SKIPSPACE_OFFSET))(str, arg, nullptr);
		}

		::System::Void BoundCheck(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_BOUNDCHECK_OFFSET))(arg, str, nullptr);
		}

		::System::TypeIdentifier* ParsedTypeIdentifier(::System::String* str)
		{
			return (return (::System::TypeIdentifier*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_PARSEDTYPEIDENTIFIER_OFFSET))(str, nullptr);
		}

		::System::TypeSpec* Parse(::System::String* str, int32_t&* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::TypeSpec*(*)(::System::String*, int32_t&*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_PARSE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_.CTOR_OFFSET))(nullptr);
		}

	};
}

