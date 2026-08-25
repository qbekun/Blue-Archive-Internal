#pragma once
#include "../../../unitysdk.h"

#define MONO_GLOBALIZATION_UNICODE_CONTRACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9124830)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int Contraction_TypeDefinitionIndex = 23602;

	class Contraction : public Il2CppObject
	{
	public:
		::System::Int32 Index; // 0x10
		::Il2CppArray<::System::Object*>* Source; // 0x18
		::System::String* Replacement; // 0x20
		::Il2CppArray<::System::Object*>* SortKey; // 0x28

		::System::Void .ctor(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CONTRACTION_.CTOR_OFFSET))(arg, arg, str, arg, nullptr);
		}

	};
}

