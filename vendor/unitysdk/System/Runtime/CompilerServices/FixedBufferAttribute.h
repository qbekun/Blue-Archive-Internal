#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_FIXEDBUFFERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9227D20)
#define SYSTEM_RUNTIME_COMPILERSERVICES_FIXEDBUFFERATTRIBUTE_GET_ELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x9227D60)
#define SYSTEM_RUNTIME_COMPILERSERVICES_FIXEDBUFFERATTRIBUTE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9227D70)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int FixedBufferAttribute_TypeDefinitionIndex = 24748;

	class FixedBufferAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* _ElementType_k__BackingField; // 0x10
		::System::Int32 _Length_k__BackingField; // 0x18

		::System::Void .ctor(::System::Type* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FIXEDBUFFERATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_ElementType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FIXEDBUFFERATTRIBUTE_GET_ELEMENTTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FIXEDBUFFERATTRIBUTE_GET_LENGTH_OFFSET))(nullptr);
		}

	};
}

