#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NATIVEINTEGERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x28892E0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NativeIntegerAttribute_TypeDefinitionIndex = 37754;

	class NativeIntegerAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::Il2CppArray<::System::Object*>* TransformFlags; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NATIVEINTEGERATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

