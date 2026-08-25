#pragma once
#include "unitysdk.h"

namespace UnityEngine { class MonoBehaviour; }

#define DESTROYFXINSTANCEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B3BC0)
#define DESTROYFXINSTANCEINFO_EXECUTEFROM_OFFSET UNITYSDK_OFFSET(0x20B3BD0)

	inline static constexpr unsigned int DestroyFxInstanceInfo_TypeDefinitionIndex = 3593;

	class DestroyFxInstanceInfo : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DESTROYFXINSTANCEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ExecuteFrom(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + DESTROYFXINSTANCEINFO_EXECUTEFROM_OFFSET))(arg, nullptr);
		}

	};

