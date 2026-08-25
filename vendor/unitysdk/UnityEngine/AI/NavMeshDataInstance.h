#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_AI_NAVMESHDATAINSTANCE_GET_VALID_OFFSET UNITYSDK_OFFSET(0xA1B2B50)
#define UNITYENGINE_AI_NAVMESHDATAINSTANCE_GET_ID_OFFSET UNITYSDK_OFFSET(0xA1B2BD0)
#define UNITYENGINE_AI_NAVMESHDATAINSTANCE_SET_ID_OFFSET UNITYSDK_OFFSET(0xA1B2BE0)
#define UNITYENGINE_AI_NAVMESHDATAINSTANCE_REMOVE_OFFSET UNITYSDK_OFFSET(0xA1B2BF0)
#define UNITYENGINE_AI_NAVMESHDATAINSTANCE_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xA1B2C60)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshDataInstance_TypeDefinitionIndex = 37500;

	class NavMeshDataInstance : public Il2CppObject
	{
	public:
		::System::Int32 _id_k__BackingField; // 0x10

		::System::Boolean get_valid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATAINSTANCE_GET_VALID_OFFSET))(nullptr);
		}

		::System::Int32 get_id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATAINSTANCE_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_id(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATAINSTANCE_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void Remove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATAINSTANCE_REMOVE_OFFSET))(nullptr);
		}

		::System::Void set_owner(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATAINSTANCE_SET_OWNER_OFFSET))(arg, nullptr);
		}

	};
}

