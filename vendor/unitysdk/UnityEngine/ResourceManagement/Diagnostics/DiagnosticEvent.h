#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::Diagnostics { class DiagnosticEvent; }

#define UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_GET_STREAM_OFFSET UNITYSDK_OFFSET(0xA0EF890)
#define UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA0EF8A0)
#define UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_GET_DEPENDENCIES_OFFSET UNITYSDK_OFFSET(0xA0EF910)
#define UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_GET_OBJECTID_OFFSET UNITYSDK_OFFSET(0xA0EF920)
#define UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0EF930)
#define UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0xA0EF9B0)
#define UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xA0EF9C0)
#define UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_GET_FRAME_OFFSET UNITYSDK_OFFSET(0xA0EFA50)
#define UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xA0EFA60)
#define UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA0EFA70)

namespace UnityEngine::ResourceManagement::Diagnostics
{
	inline static constexpr unsigned int DiagnosticEvent_TypeDefinitionIndex = 36422;

	class DiagnosticEvent : public Il2CppObject
	{
	public:
		::System::String* m_Graph; // 0x10
		::Il2CppArray<::System::Object*>* m_Dependencies; // 0x18
		::System::Int32 m_ObjectId; // 0x20
		::System::String* m_DisplayName; // 0x28
		::System::Int32 m_Stream; // 0x30
		::System::Int32 m_Frame; // 0x34
		::System::Int32 m_Value; // 0x38

		::System::Int32 get_Stream()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_GET_STREAM_OFFSET))(nullptr);
		}

		::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent* Deserialize(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_DESERIALIZE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Dependencies()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_GET_DEPENDENCIES_OFFSET))(nullptr);
		}

		::System::Int32 get_ObjectId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_GET_OBJECTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_.CTOR_OFFSET))(str, str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* get_Graph()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_GET_GRAPH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* Serialize()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_SERIALIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_Frame()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_GET_FRAME_OFFSET))(nullptr);
		}

		::System::String* get_DisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_Value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENT_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

