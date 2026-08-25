#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_CLASSLIBRARYINITIALIZER_INIT_OFFSET UNITYSDK_OFFSET(0xA22EC80)

namespace UnityEngine
{
	inline static constexpr unsigned int ClassLibraryInitializer_TypeDefinitionIndex = 31146;

	class ClassLibraryInitializer : public Il2CppObject
	{
	public:
		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CLASSLIBRARYINITIALIZER_INIT_OFFSET))(nullptr);
		}

	};
}

