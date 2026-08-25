#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_DRAGANDDROPDATA_GETGENERICDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_DRAGANDDROPDATA_UNITYENGINE.UIELEMENTS.IDRAGANDDROPDATA.GET_USERDATA_OFFSET UNITYSDK_OFFSET(0xA3D2D20)
#define UNITYENGINE_UIELEMENTS_DRAGANDDROPDATA_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_DRAGANDDROPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3D19D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragAndDropData_TypeDefinitionIndex = 30427;

	class DragAndDropData : public Il2CppObject
	{
	public:
		::System::Object* GetGenericData(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGANDDROPDATA_GETGENERICDATA_OFFSET))(str, nullptr);
		}

		::System::Object* UnityEngine.UIElements.IDragAndDropData.get_userData()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGANDDROPDATA_UNITYENGINE.UIELEMENTS.IDRAGANDDROPDATA.GET_USERDATA_OFFSET))(nullptr);
		}

		::System::Object* get_source()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGANDDROPDATA_GET_SOURCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGANDDROPDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

