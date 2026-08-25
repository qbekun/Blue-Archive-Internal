#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DebugHandler; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define DEBUGRENDERPASSENUMERABLE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA038CC0)
#define DEBUGRENDERPASSENUMERABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA037F60)
#define DEBUGRENDERPASSENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA038CD0)

	inline static constexpr unsigned int DebugRenderPassEnumerable_TypeDefinitionIndex = 32584;

	class DebugRenderPassEnumerable : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::DebugHandler* m_DebugHandler; // 0x10
		::UnityEngine::Rendering::ScriptableRenderContext* m_Context; // 0x18
		::UnityEngine::Rendering::CommandBuffer* m_CommandBuffer; // 0x20

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGRENDERPASSENUMERABLE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::DebugHandler* arg, ::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugHandler*, ::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGRENDERPASSENUMERABLE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGRENDERPASSENUMERABLE_GETENUMERATOR_OFFSET))(nullptr);
		}

	};

