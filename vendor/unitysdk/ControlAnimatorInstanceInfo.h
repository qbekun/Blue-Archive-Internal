#pragma once
#include "unitysdk.h"

class CommandType;
namespace UnityEngine { class MonoBehaviour; }

#define CONTROLANIMATORINSTANCEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B2E30)
#define CONTROLANIMATORINSTANCEINFO_EXECUTEFROM_OFFSET UNITYSDK_OFFSET(0x20B2E50)

	inline static constexpr unsigned int ControlAnimatorInstanceInfo_TypeDefinitionIndex = 3588;

	class ControlAnimatorInstanceInfo : public Il2CppObject
	{
	public:
		CommandType* commandType; // 0x30
		::System::String* commandTargetName; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLANIMATORINSTANCEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ExecuteFrom(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLANIMATORINSTANCEINFO_EXECUTEFROM_OFFSET))(arg, nullptr);
		}

	};

