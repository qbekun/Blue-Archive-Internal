#pragma once
#include "unitysdk.h"

class ActionType;
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class GameObject; }

#define SHADERANIMATEFXINSTANCEINFO_EXECUTEFROM_OFFSET UNITYSDK_OFFSET(0x20C28A0)
#define SHADERANIMATEFXINSTANCEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C2FE0)
#define SHADERANIMATEFXINSTANCEINFO_COWAITFORFINISH_OFFSET UNITYSDK_OFFSET(0x20C2F50)
#define SHADERANIMATEFXINSTANCEINFO_EXECUTESHADERANIMATIONS_OFFSET UNITYSDK_OFFSET(0x20C2A60)

	inline static constexpr unsigned int ShaderAnimateFxInstanceInfo_TypeDefinitionIndex = 3654;

	class ShaderAnimateFxInstanceInfo : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* shaderAnimations; // 0x30
		ActionType* toDoAfterFinish; // 0x38

		::System::Void ExecuteFrom(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERANIMATEFXINSTANCEINFO_EXECUTEFROM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERANIMATEFXINSTANCEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoWaitForFinish(::Il2CppArray<::System::Object*>* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::Il2CppArray<::System::Object*>*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERANIMATEFXINSTANCEINFO_COWAITFORFINISH_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* ExecuteShaderAnimations(::UnityEngine::MonoBehaviour* arg, ::UnityEngine::GameObject* arg2, ::Il2CppArray<::System::Object*>* arg3)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::UnityEngine::MonoBehaviour*, ::UnityEngine::GameObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERANIMATEFXINSTANCEINFO_EXECUTESHADERANIMATIONS_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

