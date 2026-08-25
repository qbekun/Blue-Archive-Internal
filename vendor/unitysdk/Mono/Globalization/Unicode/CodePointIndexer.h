#pragma once
#include "../../../unitysdk.h"

#define MONO_GLOBALIZATION_UNICODE_CODEPOINTINDEXER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91245B0)
#define MONO_GLOBALIZATION_UNICODE_CODEPOINTINDEXER_TOINDEX_OFFSET UNITYSDK_OFFSET(0x9124790)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int CodePointIndexer_TypeDefinitionIndex = 23600;

	class CodePointIndexer : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ranges; // 0x10
		::System::Int32 TotalCount; // 0x18
		::System::Int32 defaultIndex; // 0x1C
		::System::Int32 defaultCP; // 0x20

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CODEPOINTINDEXER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ToIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CODEPOINTINDEXER_TOINDEX_OFFSET))(arg, nullptr);
		}

	};
}

