#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }

#define SINGLEQUERYMATCHER_GET_MATCH_OFFSET UNITYSDK_OFFSET(0xA3852F0)
#define SINGLEQUERYMATCHER_SET_MATCH_OFFSET UNITYSDK_OFFSET(0xA385300)
#define SINGLEQUERYMATCHER_RUN_OFFSET UNITYSDK_OFFSET(0xA385310)
#define SINGLEQUERYMATCHER_ISINUSE_OFFSET UNITYSDK_OFFSET(0xA385380)
#define SINGLEQUERYMATCHER_CREATENEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SINGLEQUERYMATCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA385390)

	inline static constexpr unsigned int SingleQueryMatcher_TypeDefinitionIndex = 30230;

	class SingleQueryMatcher : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::VisualElement* _match_k__BackingField; // 0x18

		::UnityEngine::UIElements::VisualElement* get_match()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SINGLEQUERYMATCHER_GET_MATCH_OFFSET))(nullptr);
		}

		::System::Void set_match(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + SINGLEQUERYMATCHER_SET_MATCH_OFFSET))(arg, nullptr);
		}

		::System::Void Run(::UnityEngine::UIElements::VisualElement* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SINGLEQUERYMATCHER_RUN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsInUse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SINGLEQUERYMATCHER_ISINUSE_OFFSET))(nullptr);
		}

		SingleQueryMatcher* CreateNew()
		{
			return (return (SingleQueryMatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + SINGLEQUERYMATCHER_CREATENEW_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SINGLEQUERYMATCHER_.CTOR_OFFSET))(nullptr);
		}

	};

