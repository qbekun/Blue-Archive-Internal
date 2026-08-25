#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }

#define ANIMATIONDATASET`2_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMATIONDATASET`2_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMATIONDATASET`2_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMATIONDATASET`2_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMATIONDATASET`2_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMATIONDATASET`2_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMATIONDATASET`2_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMATIONDATASET`2_REPLACE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMATIONDATASET`2_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMATIONDATASET`2_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMATIONDATASET`2_GETACTIVEPROPERTIESFORELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int AnimationDataSet`2_TypeDefinitionIndex = 30184;

	class AnimationDataSet`2 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* elements; // 0x0
		::Il2CppArray<::System::Object*>* properties; // 0x0
		::Il2CppArray<::System::Object*>* timing; // 0x0
		::Il2CppArray<::System::Object*>* style; // 0x0
		::System::Int32 count; // 0x0
		Il2CppObject* indices; // 0x0

		::System::Int32 get_capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONDATASET`2_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Void set_capacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONDATASET`2_SET_CAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONDATASET`2_LOCALINIT_OFFSET))(nullptr);
		}

		Il2CppObject* Create()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONDATASET`2_CREATE_OFFSET))(nullptr);
		}

		::System::Boolean IndexOf(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONDATASET`2_INDEXOF_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Add(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONDATASET`2_ADD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Remove(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONDATASET`2_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Replace(::System::Int32 arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONDATASET`2_REPLACE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RemoveAll(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONDATASET`2_REMOVEALL_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONDATASET`2_REMOVEALL_OFFSET))(nullptr);
		}

		::System::Void GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONDATASET`2_GETACTIVEPROPERTIESFORELEMENT_OFFSET))(arg, arg, nullptr);
		}

	};

