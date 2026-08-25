#pragma once
#include "../../unitysdk.h"

#define NPA_EDITOR_ERRRANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D4E1D0)
#define NPA_EDITOR_ERRRANGE_INCLUDES_OFFSET UNITYSDK_OFFSET(0x9D4E1E0)

namespace NPA::Editor
{
	inline static constexpr unsigned int ErrRange_TypeDefinitionIndex = 26166;

	class ErrRange : public Il2CppObject
	{
	public:
		::System::Int32 _begin; // 0x10
		::System::Int32 _end; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ERRRANGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Includes(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ERRRANGE_INCLUDES_OFFSET))(arg, nullptr);
		}

	};
}

