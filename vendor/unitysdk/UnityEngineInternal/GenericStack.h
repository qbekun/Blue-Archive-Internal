#pragma once
#include "../unitysdk.h"

#define UNITYENGINEINTERNAL_GENERICSTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DFAB0)

namespace UnityEngineInternal
{
	inline static constexpr unsigned int GenericStack_TypeDefinitionIndex = 30848;

	class GenericStack : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_GENERICSTACK_.CTOR_OFFSET))(nullptr);
		}

	};
}

