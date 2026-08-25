#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_IDRAGANDDROPDATA_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IDragAndDropData_TypeDefinitionIndex = 30426;

	class IDragAndDropData : public Il2CppObject
	{
	public:
		::System::Object* get_userData()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IDRAGANDDROPDATA_GET_USERDATA_OFFSET))(nullptr);
		}

	};
}

