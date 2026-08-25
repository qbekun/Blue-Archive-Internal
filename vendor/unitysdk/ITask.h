#pragma once
#include "unitysdk.h"

#define ITASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ITask_TypeDefinitionIndex = 3236;

	class ITask : public Il2CppObject
	{
	public:
		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITASK_RELEASE_OFFSET))(nullptr);
		}

	};

