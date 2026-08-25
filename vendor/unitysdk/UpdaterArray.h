#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualTreeUpdatePhase; }
namespace UnityEngine::UIElements { class IVisualTreeUpdater; }

#define UPDATERARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA38E7F0)
#define UPDATERARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA38F190)
#define UPDATERARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA38F010)
#define UPDATERARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA38ED70)

	inline static constexpr unsigned int UpdaterArray_TypeDefinitionIndex = 30273;

	class UpdaterArray : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_VisualTreeUpdaters; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UPDATERARRAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase* arg, ::UnityEngine::UIElements::IVisualTreeUpdater* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualTreeUpdatePhase*, ::UnityEngine::UIElements::IVisualTreeUpdater*, ::PVOID))((::PBYTE)hIl2Cpp + UPDATERARRAY_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::IVisualTreeUpdater* get_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase* arg)
		{
			return (return (::UnityEngine::UIElements::IVisualTreeUpdater*(*)(::UnityEngine::UIElements::VisualTreeUpdatePhase*, ::PVOID))((::PBYTE)hIl2Cpp + UPDATERARRAY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IVisualTreeUpdater* get_Item(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::IVisualTreeUpdater*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UPDATERARRAY_GET_ITEM_OFFSET))(arg, nullptr);
		}

	};

