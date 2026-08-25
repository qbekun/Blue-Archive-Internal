#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_DYNAMICATTRIBUTE_GET_TRANSFORMFLAGS_OFFSET UNITYSDK_OFFSET(0x96B3800)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int DynamicAttribute_TypeDefinitionIndex = 33532;

	class DynamicAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::Il2CppArray<::System::Object*>* _transformFlags; // 0x10

		Il2CppObject* get_TransformFlags()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_DYNAMICATTRIBUTE_GET_TRANSFORMFLAGS_OFFSET))(nullptr);
		}

	};
}

