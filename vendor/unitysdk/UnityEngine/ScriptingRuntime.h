#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_SCRIPTINGRUNTIME_GETALLUSERASSEMBLIES_OFFSET UNITYSDK_OFFSET(0xA231EF0)

namespace UnityEngine
{
	inline static constexpr unsigned int ScriptingRuntime_TypeDefinitionIndex = 31163;

	class ScriptingRuntime : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GetAllUserAssemblies()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTINGRUNTIME_GETALLUSERASSEMBLIES_OFFSET))(nullptr);
		}

	};
}

