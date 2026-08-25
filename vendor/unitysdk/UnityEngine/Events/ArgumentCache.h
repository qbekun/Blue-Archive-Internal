#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_UNITYOBJECTARGUMENT_OFFSET UNITYSDK_OFFSET(0xA248B70)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_UNITYOBJECTARGUMENTASSEMBLYTYPENAME_OFFSET UNITYSDK_OFFSET(0xA248B80)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_INTARGUMENT_OFFSET UNITYSDK_OFFSET(0xA248B90)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_FLOATARGUMENT_OFFSET UNITYSDK_OFFSET(0xA248BA0)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_STRINGARGUMENT_OFFSET UNITYSDK_OFFSET(0xA248BB0)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_BOOLARGUMENT_OFFSET UNITYSDK_OFFSET(0xA248BC0)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA248BD0)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA248C00)
#define UNITYENGINE_EVENTS_ARGUMENTCACHE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA248C30)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int ArgumentCache_TypeDefinitionIndex = 31283;

	class ArgumentCache : public Il2CppObject
	{
	public:
		::UnityEngine::Object* m_ObjectArgument; // 0x10
		::System::String* m_ObjectArgumentAssemblyTypeName; // 0x18
		::System::Int32 m_IntArgument; // 0x20
		::System::Single m_FloatArgument; // 0x24
		::System::String* m_StringArgument; // 0x28
		::System::Boolean m_BoolArgument; // 0x30

		::UnityEngine::Object* get_unityObjectArgument()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_UNITYOBJECTARGUMENT_OFFSET))(nullptr);
		}

		::System::String* get_unityObjectArgumentAssemblyTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_UNITYOBJECTARGUMENTASSEMBLYTYPENAME_OFFSET))(nullptr);
		}

		::System::Int32 get_intArgument()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_INTARGUMENT_OFFSET))(nullptr);
		}

		::System::Single get_floatArgument()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_FLOATARGUMENT_OFFSET))(nullptr);
		}

		::System::String* get_stringArgument()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_STRINGARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_boolArgument()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_GET_BOOLARGUMENT_OFFSET))(nullptr);
		}

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_ARGUMENTCACHE_.CTOR_OFFSET))(nullptr);
		}

	};
}

