#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR { class Page; }

#define UNITYENGINE_UIELEMENTS_UIR_PAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA349000)
#define UNITYENGINE_UIELEMENTS_UIR_PAGE_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA34EE70)
#define UNITYENGINE_UIELEMENTS_UIR_PAGE_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA34EE80)
#define UNITYENGINE_UIELEMENTS_UIR_PAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA34DE80)
#define UNITYENGINE_UIELEMENTS_UIR_PAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA34EE90)
#define UNITYENGINE_UIELEMENTS_UIR_PAGE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA349160)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int Page_TypeDefinitionIndex = 30778;

	class Page : public Il2CppObject
	{
	public:
		::System::Boolean _disposed_k__BackingField; // 0x10
		Il2CppObject* vertices; // 0x18
		Il2CppObject* indices; // 0x20
		::UnityEngine::UIElements::UIR::Page* next; // 0x28
		::System::Int32 framesEmpty; // 0x30

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_PAGE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_disposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_PAGE_GET_DISPOSED_OFFSET))(nullptr);
		}

		::System::Void set_disposed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_PAGE_SET_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_PAGE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_PAGE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_PAGE_GET_ISEMPTY_OFFSET))(nullptr);
		}

	};
}

