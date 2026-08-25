#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_AI_NAVMESHLINKINSTANCE_GET_VALID_OFFSET UNITYSDK_OFFSET(0xA1B2E00)
#define UNITYENGINE_AI_NAVMESHLINKINSTANCE_GET_ID_OFFSET UNITYSDK_OFFSET(0xA1B2E80)
#define UNITYENGINE_AI_NAVMESHLINKINSTANCE_SET_ID_OFFSET UNITYSDK_OFFSET(0xA1B2E90)
#define UNITYENGINE_AI_NAVMESHLINKINSTANCE_REMOVE_OFFSET UNITYSDK_OFFSET(0xA1B2EA0)
#define UNITYENGINE_AI_NAVMESHLINKINSTANCE_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xA1B2F10)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshLinkInstance_TypeDefinitionIndex = 37502;

	class NavMeshLinkInstance : public Il2CppObject
	{
	public:
		::System::Int32 _id_k__BackingField; // 0x10

		::System::Boolean get_valid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKINSTANCE_GET_VALID_OFFSET))(nullptr);
		}

		::System::Int32 get_id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKINSTANCE_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_id(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKINSTANCE_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void Remove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKINSTANCE_REMOVE_OFFSET))(nullptr);
		}

		::System::Void set_owner(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKINSTANCE_SET_OWNER_OFFSET))(arg, nullptr);
		}

	};
}

