#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CUSTOMCONSTANTATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CUSTOMCONSTANTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9227C20)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CustomConstantAttribute_TypeDefinitionIndex = 24744;

	class CustomConstantAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CUSTOMCONSTANTATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CUSTOMCONSTANTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

