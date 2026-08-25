#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Object; }

#define MX_LOGIC_GENERICCONDITION_UNITYOBJECTREFERENCETO_.CTOR_OFFSET UNITYSDK_OFFSET(0x108EEA0)
#define MX_LOGIC_GENERICCONDITION_UNITYOBJECTREFERENCETO_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_GENERICCONDITION_UNITYOBJECTREFERENCETO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x108EED0)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int UnityObjectReferenceTo_TypeDefinitionIndex = 12963;

	class UnityObjectReferenceTo : public Il2CppObject
	{
	public:
		::UnityEngine::Object* targetObject; // 0x10

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_UNITYOBJECTREFERENCETO_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Get()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_UNITYOBJECTREFERENCETO_GET_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_UNITYOBJECTREFERENCETO_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};
}

