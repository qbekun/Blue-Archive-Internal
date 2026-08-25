#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ScriptableObject; }

#define UNITYENGINE_SCRIPTABLEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA231DC0)
#define UNITYENGINE_SCRIPTABLEOBJECT_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA231E70)
#define UNITYENGINE_SCRIPTABLEOBJECT_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_SCRIPTABLEOBJECT_CREATESCRIPTABLEOBJECT_OFFSET UNITYSDK_OFFSET(0xA231E30)
#define UNITYENGINE_SCRIPTABLEOBJECT_CREATESCRIPTABLEOBJECTINSTANCEFROMTYPE_OFFSET UNITYSDK_OFFSET(0xA231EB0)

namespace UnityEngine
{
	inline static constexpr unsigned int ScriptableObject_TypeDefinitionIndex = 31162;

	class ScriptableObject : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::ScriptableObject* CreateInstance(::System::Type* arg)
		{
			return (return (::UnityEngine::ScriptableObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT_CREATEINSTANCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateInstance()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT_CREATEINSTANCE_OFFSET))(nullptr);
		}

		::System::Void CreateScriptableObject(::UnityEngine::ScriptableObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ScriptableObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT_CREATESCRIPTABLEOBJECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ScriptableObject* CreateScriptableObjectInstanceFromType(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::ScriptableObject*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT_CREATESCRIPTABLEOBJECTINSTANCEFROMTYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

