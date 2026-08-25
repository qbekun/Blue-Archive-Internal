#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_AI_NAVMESHMODIFIER_AFFECTSAGENTTYPE_OFFSET UNITYSDK_OFFSET(0x9446050)
#define UNITYENGINE_AI_NAVMESHMODIFIER_GET_IGNOREFROMBUILD_OFFSET UNITYSDK_OFFSET(0x94460F0)
#define UNITYENGINE_AI_NAVMESHMODIFIER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9446100)
#define UNITYENGINE_AI_NAVMESHMODIFIER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9446190)
#define UNITYENGINE_AI_NAVMESHMODIFIER_SET_AREA_OFFSET UNITYSDK_OFFSET(0x94462D0)
#define UNITYENGINE_AI_NAVMESHMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94462E0)
#define UNITYENGINE_AI_NAVMESHMODIFIER_GET_AREA_OFFSET UNITYSDK_OFFSET(0x94463A0)
#define UNITYENGINE_AI_NAVMESHMODIFIER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x94463B0)
#define UNITYENGINE_AI_NAVMESHMODIFIER_SET_OVERRIDEAREA_OFFSET UNITYSDK_OFFSET(0x9446450)
#define UNITYENGINE_AI_NAVMESHMODIFIER_SET_IGNOREFROMBUILD_OFFSET UNITYSDK_OFFSET(0x9446460)
#define UNITYENGINE_AI_NAVMESHMODIFIER_GET_OVERRIDEAREA_OFFSET UNITYSDK_OFFSET(0x9446470)
#define UNITYENGINE_AI_NAVMESHMODIFIER_GET_ACTIVEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x9446480)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshModifier_TypeDefinitionIndex = 37901;

	class NavMeshModifier : public Il2CppObject
	{
	public:
		::System::Boolean m_OverrideArea; // 0x18
		::System::Int32 m_Area; // 0x1C
		::System::Boolean m_IgnoreFromBuild; // 0x20
		Il2CppObject* m_AffectedAgents; // 0x28
		Il2CppObject* s_NavMeshModifiers; // 0x0

		::System::Boolean AffectsAgentType(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_AFFECTSAGENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ignoreFromBuild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_GET_IGNOREFROMBUILD_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_area(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_SET_AREA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_area()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_GET_AREA_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_overrideArea(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_SET_OVERRIDEAREA_OFFSET))(arg, nullptr);
		}

		::System::Void set_ignoreFromBuild(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_SET_IGNOREFROMBUILD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_overrideArea()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_GET_OVERRIDEAREA_OFFSET))(nullptr);
		}

		Il2CppObject* get_activeModifiers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_GET_ACTIVEMODIFIERS_OFFSET))(nullptr);
		}

	};
}

