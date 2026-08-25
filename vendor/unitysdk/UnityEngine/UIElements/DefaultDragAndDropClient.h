#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Label; }
namespace UnityEngine::UIElements { class DragVisualMode; }
namespace UnityEngine::UIElements { class StartDragArgs; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::UIElements { class DragAndDropData; }

#define UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xA3D0F20)
#define UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_GETGENERICDATA_OFFSET UNITYSDK_OFFSET(0xA3D0F70)
#define UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_STARTDRAG_OFFSET UNITYSDK_OFFSET(0xA3D0FD0)
#define UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_UPDATEDRAG_OFFSET UNITYSDK_OFFSET(0xA3D1770)
#define UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_ACCEPTDRAG_OFFSET UNITYSDK_OFFSET(0xA3D1940)
#define UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_SETVISUALMODE_OFFSET UNITYSDK_OFFSET(0xA3D1950)
#define UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_DRAGCLEANUP_OFFSET UNITYSDK_OFFSET(0xA3D1960)
#define UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_GET_DATA_OFFSET UNITYSDK_OFFSET(0xA3D19C0)
#define UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3D0EB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DefaultDragAndDropClient_TypeDefinitionIndex = 30421;

	class DefaultDragAndDropClient : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* m_GenericData; // 0x10
		::UnityEngine::UIElements::Label* m_DraggedInfoLabel; // 0x18
		::UnityEngine::UIElements::DragVisualMode* m_VisualMode; // 0x20
		Il2CppObject* m_UnityObjectReferences; // 0x28

		::System::Object* get_source()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_GET_SOURCE_OFFSET))(nullptr);
		}

		::System::Object* GetGenericData(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_GETGENERICDATA_OFFSET))(str, nullptr);
		}

		::System::Void StartDrag(::UnityEngine::UIElements::StartDragArgs* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StartDragArgs*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_STARTDRAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateDrag(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_UPDATEDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void AcceptDrag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_ACCEPTDRAG_OFFSET))(nullptr);
		}

		::System::Void SetVisualMode(::UnityEngine::UIElements::DragVisualMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DragVisualMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_SETVISUALMODE_OFFSET))(arg, nullptr);
		}

		::System::Void DragCleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_DRAGCLEANUP_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::DragAndDropData* get_data()
		{
			return (return (::UnityEngine::UIElements::DragAndDropData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTDRAGANDDROPCLIENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

