#pragma once
#include "../../../unitysdk.h"

#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9128D50)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x912F4A0)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9128D60)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDCJKEXTENSION_OFFSET UNITYSDK_OFFSET(0x9129F10)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDKANA_OFFSET UNITYSDK_OFFSET(0x912A060)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDNORMAL_OFFSET UNITYSDK_OFFSET(0x9129D90)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDLEVEL5_OFFSET UNITYSDK_OFFSET(0x912F570)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDBUFFERPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x912F4C0)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETRESULTANDRESET_OFFSET UNITYSDK_OFFSET(0x9129770)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETOPTIMIZEDLENGTH_OFFSET UNITYSDK_OFFSET(0x9130010)
#define MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x912F610)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int SortKeyBuffer_TypeDefinitionIndex = 23614;

	class SortKeyBuffer : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* l1b; // 0x10
		::Il2CppArray<::System::Object*>* l2b; // 0x18
		::Il2CppArray<::System::Object*>* l3b; // 0x20
		::Il2CppArray<::System::Object*>* l4sb; // 0x28
		::Il2CppArray<::System::Object*>* l4tb; // 0x30
		::Il2CppArray<::System::Object*>* l4kb; // 0x38
		::Il2CppArray<::System::Object*>* l4wb; // 0x40
		::Il2CppArray<::System::Object*>* l5b; // 0x48
		::System::String* source; // 0x50
		::System::Int32 l1; // 0x58
		::System::Int32 l2; // 0x5C
		::System::Int32 l3; // 0x60
		::System::Int32 l4s; // 0x64
		::System::Int32 l4t; // 0x68
		::System::Int32 l4k; // 0x6C
		::System::Int32 l4w; // 0x70
		::System::Int32 l5; // 0x74
		::System::Int32 lcid; // 0x78
		::System::Globalization::CompareOptions* options; // 0x7C
		::System::Boolean processLevel2; // 0x80
		::System::Boolean frenchSort; // 0x81
		::System::Boolean frenchSorted; // 0x82

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_RESET_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Globalization::CompareOptions* arg, ::System::Int32 arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Globalization::CompareOptions*, ::System::Int32, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_INITIALIZE_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void AppendCJKExtension(::System::Byte arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDCJKEXTENSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AppendKana(::System::Byte arg, ::System::Byte arg, ::System::Byte arg, ::System::Byte arg, ::System::Boolean arg, ::System::Byte arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Boolean, ::System::Byte, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDKANA_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AppendNormal(::System::Byte arg, ::System::Byte arg, ::System::Byte arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDNORMAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AppendLevel5(::System::Byte arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDLEVEL5_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AppendBufferPrimitive(::System::Byte arg, ::System::Object[]&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Object[]&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_APPENDBUFFERPRIMITIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Globalization::SortKey* GetResultAndReset()
		{
			return (return (::System::Globalization::SortKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETRESULTANDRESET_OFFSET))(nullptr);
		}

		::System::Int32 GetOptimizedLength(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Byte arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETOPTIMIZEDLENGTH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Globalization::SortKey* GetResult()
		{
			return (return (::System::Globalization::SortKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SORTKEYBUFFER_GETRESULT_OFFSET))(nullptr);
		}

	};
}

