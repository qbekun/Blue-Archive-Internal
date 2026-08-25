#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_ESCAPE_OFFSET UNITYSDK_OFFSET(0x9E88920)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_UNESCAPE_OFFSET UNITYSDK_OFFSET(0x9E88AE0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9E88CF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9E88D20)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_GETPLURAL_OFFSET UNITYSDK_OFFSET(0x9E88D50)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_NICIFYMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x9E88EE0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_FROMNICIFIEDMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x9E89080)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_COUNTOCCURRENCES_OFFSET UNITYSDK_OFFSET(0x9E85220)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_TOKENIZE_OFFSET UNITYSDK_OFFSET(0x9E89200)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_SPLIT_OFFSET UNITYSDK_OFFSET(0x9E892B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_JOIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_JOIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_MAKEUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_CHARACTERSEPARATEDLISTSHAVEATLEASTONECOMMONELEMENT_OFFSET UNITYSDK_OFFSET(0x9E89370)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_PARSEINT_OFFSET UNITYSDK_OFFSET(0x9E89640)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_WRITESTRINGTOBUFFER_OFFSET UNITYSDK_OFFSET(0x9E896C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_WRITESTRINGTOBUFFER_OFFSET UNITYSDK_OFFSET(0x9E896E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_READSTRINGFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x9E898D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_READSTRINGFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x9E898F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_ISPRINTABLE_OFFSET UNITYSDK_OFFSET(0x9E89A10)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_WITHALLWHITESPACESTRIPPED_OFFSET UNITYSDK_OFFSET(0x9E89A90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_INVARIANTEQUALSIGNORECASE_OFFSET UNITYSDK_OFFSET(0x9E89B70)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_EXPANDTEMPLATESTRING_OFFSET UNITYSDK_OFFSET(0x9E89BC0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int StringHelpers_TypeDefinitionIndex = 28960;

	class StringHelpers : public Il2CppObject
	{
	public:
		::System::String* Escape(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_ESCAPE_OFFSET))(str, str, str, nullptr);
		}

		::System::String* Unescape(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_UNESCAPE_OFFSET))(str, str, str, nullptr);
		}

		::System::Boolean Contains(::System::String* str, ::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_CONTAINS_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean Contains(::System::String* str, ::System::String* str, ::System::StringComparison* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::StringComparison*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_CONTAINS_OFFSET))(str, str, arg, nullptr);
		}

		::System::String* GetPlural(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_GETPLURAL_OFFSET))(str, nullptr);
		}

		::System::String* NicifyMemorySize(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_NICIFYMEMORYSIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean FromNicifiedMemorySize(::System::String* str, int64_t&* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, int64_t&*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_FROMNICIFIEDMEMORYSIZE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int32 CountOccurrences(::System::String* str, ::System::Char arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_COUNTOCCURRENCES_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Tokenize(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_TOKENIZE_OFFSET))(str, nullptr);
		}

		Il2CppObject* Split(::System::String* str, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_SPLIT_OFFSET))(str, arg, nullptr);
		}

		::System::String* Join(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_JOIN_OFFSET))(str, arg, nullptr);
		}

		::System::String* Join(Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_JOIN_OFFSET))(arg, str, nullptr);
		}

		::System::String* MakeUniqueName(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::String*(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_MAKEUNIQUENAME_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean CharacterSeparatedListsHaveAtLeastOneCommonElement(::System::String* str, ::System::String* str, ::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_CHARACTERSEPARATEDLISTSHAVEATLEASTONECOMMONELEMENT_OFFSET))(str, str, arg, nullptr);
		}

		::System::Int32 ParseInt(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_PARSEINT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean WriteStringToBuffer(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_WRITESTRINGTOBUFFER_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean WriteStringToBuffer(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_WRITESTRINGTOBUFFER_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::String* ReadStringFromBuffer(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_READSTRINGFROMBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ReadStringFromBuffer(::System::Int32 arg, ::System::Int32 arg, uint32_t&* arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_READSTRINGFROMBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsPrintable(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_ISPRINTABLE_OFFSET))(arg, nullptr);
		}

		::System::String* WithAllWhitespaceStripped(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_WITHALLWHITESPACESTRIPPED_OFFSET))(str, nullptr);
		}

		::System::Boolean InvariantEqualsIgnoreCase(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_INVARIANTEQUALSIGNORECASE_OFFSET))(str, str, nullptr);
		}

		::System::String* ExpandTemplateString(::System::String* str, Il2CppObject* arg)
		{
			return (return (::System::String*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_EXPANDTEMPLATESTRING_OFFSET))(str, arg, nullptr);
		}

	};
}

