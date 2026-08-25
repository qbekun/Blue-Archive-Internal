#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_TUPLEELEMENTNAMESATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92282B0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int TupleElementNamesAttribute_TypeDefinitionIndex = 24765;

	class TupleElementNamesAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::Il2CppArray<::System::Object*>* _transformNames; // 0x10

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TUPLEELEMENTNAMESATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

