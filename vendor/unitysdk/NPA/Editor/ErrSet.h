#pragma once
#include "../../unitysdk.h"

#define NPA_EDITOR_ERRSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D4E1F0)
#define NPA_EDITOR_ERRSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D4E290)
#define NPA_EDITOR_ERRSET_INCLUDES_OFFSET UNITYSDK_OFFSET(0x9D4E3A0)

namespace NPA::Editor
{
	inline static constexpr unsigned int ErrSet_TypeDefinitionIndex = 26167;

	class ErrSet : public Il2CppObject
	{
	public:
		Il2CppObject* _specificErrorCodes; // 0x10

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ERRSET_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ERRSET_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Includes(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ERRSET_INCLUDES_OFFSET))(arg, nullptr);
		}

	};
}

